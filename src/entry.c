#define COBJMACROS

#include <windows.h>
#include <roapi.h>
#include <winstring.h>
#include <stdio.h>
#include <wchar.h>
#include <oleauto.h>

#include "AsyncInfo.h"
#include "winrt.h"
#include "guids.h"
#include "base.c"

int ListWamAccounts() {
    internal_printf("[*] Listing WAM accounts for the current user profile\n");
    HRESULT hr = COMBASE$RoInitialize(RO_INIT_MULTITHREADED);

    HSTRING hClassName;
    hr = COMBASE$WindowsCreateString(
        L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager",
        MSVCRT$wcslen(L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager"),
        &hClassName);

    __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* factory = NULL;
    hr = COMBASE$RoGetActivationFactory(hClassName, &IID_IWebAuthenticationCoreManagerStatics4, (void**)&factory);
    
    if (FAILED(hr) || factory == NULL) {
        internal_printf("[!] RoGetActivationFactory failed or returned NULL pointer: 0x%lx\n", hr);
        COMBASE$RoUninitialize();
        return 1;
    }

    //internal_printf("[*] RoGetActivationFactory -> 0x%lx\n", hr);

    __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics* legacyFactory = NULL;
    hr = ((IUnknown*)factory)->lpVtbl->QueryInterface((IUnknown*)factory, &IID_IWebAuthenticationCoreManagerStatics, (void**)&legacyFactory);
    
    if (FAILED(hr) || legacyFactory == NULL) {
        internal_printf("[!] QI for IWebAuthenticationCoreManagerStatics failed or returned NULL pointer: 0x%lx\n", hr);
        factory->lpVtbl->Release(factory);
        COMBASE$RoUninitialize();
        return 1;
    }
    
    //internal_printf("[*] QI for IWebAuthenticationCoreManagerStatics -> 0x%lx\n", hr);

    COMBASE$WindowsDeleteString(hClassName);

    //
    // According to GitHub docs, for AzureAD accounts the providerId is
    // "https://login.microsoft.com" and the authority is "organizations"
    //
    // https://github.com/MicrosoftDocs/windows-dev-docs/blob/docs/uwp/security/web-account-manager.md#build-the-account-settings-pane
    //
    HSTRING providerId;
    hr = COMBASE$WindowsCreateString(L"https://login.microsoft.com",
                             MSVCRT$wcslen(L"https://login.microsoft.com"), &providerId);
    
    HSTRING authority;
    hr = COMBASE$WindowsCreateString(L"organizations",
                             MSVCRT$wcslen(L"organizations"), &authority);

    //internal_printf("[*] Calling FindAccountProviderWithAuthorityAsync...\n");
    
    //
    // Find the web account provider
    //
    __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider* providerOp = NULL;
    hr = legacyFactory->lpVtbl->FindAccountProviderWithAuthorityAsync(legacyFactory, providerId, authority, &providerOp);
    
    COMBASE$WindowsDeleteString(authority);
    COMBASE$WindowsDeleteString(providerId);
    
    //internal_printf("[*] FindAccountProviderWithAuthorityAsync -> 0x%lx\n", hr);
    
    if (!SUCCEEDED(hr) || providerOp == NULL) {
        internal_printf("[!] FindAccountProviderWithAuthorityAsync failed or returned NULL pointer\n");
        COMBASE$RoUninitialize();
        return 1;
    }

    // sleep for 0.5 seconds to allow async operation to complete
    KERNEL32$Sleep(500);

    // Register empty completion handler (no-op)
    hr = providerOp->lpVtbl->put_Completed(providerOp, NULL);
    //internal_printf("[*] put_Completed -> 0x%lx\n", hr);

    __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider* asyncOp = NULL;
    hr = providerOp->lpVtbl->QueryInterface(providerOp, &IID___FIAsyncOperation_WebAccountProvider, (void**)&asyncOp);
    //internal_printf("[*] QI IAsyncOperation<WebAccountProvider> -> 0x%lx\n", hr);
    providerOp->lpVtbl->Release(providerOp);

    __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* result = NULL;
    hr = asyncOp->lpVtbl->GetResults(asyncOp, &result);
    
    //internal_printf("[*] hr from GetResults: 0x%lx, result: %p\n", hr, (void*)result);
    if (FAILED(hr) || result == NULL) {
        internal_printf("[!] GetResults failed or returned NULL pointer: 0x%lx\n", hr);
        if (result) {
            result->lpVtbl->Release(result);
        }
        asyncOp->lpVtbl->Release(asyncOp);
        legacyFactory->lpVtbl->Release(legacyFactory);
        factory->lpVtbl->Release(factory);
        COMBASE$RoUninitialize();
        return 1;
    }

    //internal_printf("[*] GetResults returned a valid result: %p\n", (void*)result);
    
    //
    // Confirm provider's ID and DisplayName
    //   should be "https://login.microsoft.com" and "Work or school account"
    //
    __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* providerInterface = NULL;
    hr = result->lpVtbl->QueryInterface(result, &IID___x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider, (void**)&providerInterface);
    //internal_printf("[*] QI for CIWebAccountProvider -> 0x%lx\n", hr);

    if (FAILED(hr) || providerInterface == NULL) {
        internal_printf("[!] QI for CIWebAccountProvider failed or returned NULL pointer: 0x%lx\n", hr);
        result->lpVtbl->Release(result);
        asyncOp->lpVtbl->Release(asyncOp);
        legacyFactory->lpVtbl->Release(legacyFactory);
        factory->lpVtbl->Release(factory);
        COMBASE$RoUninitialize();
        return 1;
    }

   
    internal_printf("[*] Got Web Account Provider interface!\n");

    //
    // Get Provider ID
    //
    HSTRING idStr;
    hr = providerInterface->lpVtbl->get_Id(providerInterface, &idStr);
    if (SUCCEEDED(hr)) {
        UINT32 len = 0;
        LPCWSTR raw = COMBASE$WindowsGetStringRawBuffer(idStr, &len);
        //wprintf(L"[*] Provider Id: %.*ls\n", len, raw);
        char* providerId = Utf16ToUtf8(raw);
        internal_printf(" |-> Provider Id: %s\n", providerId);
        intFree(providerId);
        COMBASE$WindowsDeleteString(idStr);
    } else {
        internal_printf("[!] Failed to get Id from provider: 0x%lx\n", hr);
    }

    //
    // Get Provider Display Name
    //
    HSTRING displayNameStr;
    hr = providerInterface->lpVtbl->get_DisplayName(providerInterface, &displayNameStr);
    if (SUCCEEDED(hr)) {
        UINT32 len = 0;
        LPCWSTR raw = COMBASE$WindowsGetStringRawBuffer(displayNameStr, &len);
        //wprintf(L"[*] Provider Display Name: %.*ls\n", len, raw);
        char* displayName = Utf16ToUtf8(raw);
        internal_printf(" |-> Provider Display Name: %s\n", displayName);
        intFree(displayName);
        COMBASE$WindowsDeleteString(displayNameStr);
    } else {
        internal_printf("[!] Failed to get DisplayName from provider: 0x%lx\n", hr);
    }

    providerInterface->lpVtbl->Release(providerInterface);
    
    
    //
    // Initialize a zerod-out HSTRING for the clientId to be
    //   passed to FindAllAccountsWithClientIdAsync
    //
    HSTRING clientId;
    hr = COMBASE$WindowsCreateString(L"00000000-0000-0000-0000-000000000000", MSVCRT$wcslen(L"00000000-0000-0000-0000-000000000000"), &clientId);
    
    //
    // Call FindAllAccountsWithClientIdAsync
    //
    __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult* accountsAsync = NULL;
    hr = factory->lpVtbl->FindAllAccountsWithClientIdAsync(factory, result, clientId, &accountsAsync);
    COMBASE$WindowsDeleteString(clientId);
    //internal_printf("[*] FindAllAccountsWithClientIdAsync -> 0x%lx\n", hr);

    if (FAILED(hr) || accountsAsync == NULL) {
        internal_printf("[!] FindAllAccountsWithClientIdAsync failed or returned NULL pointer: 0x%lx\n", hr);
        result->lpVtbl->Release(result);
        asyncOp->lpVtbl->Release(asyncOp);
        legacyFactory->lpVtbl->Release(legacyFactory);
        factory->lpVtbl->Release(factory);
        COMBASE$RoUninitialize();
        return 1;
    }

    //internal_printf("[*] FindAllAccountsWithClientIdAsync returned non-null async object\n");
    
    // sleep for 0.5 seconds to allow async operation to complete
    KERNEL32$Sleep(500);
    
    hr = accountsAsync->lpVtbl->put_Completed(accountsAsync, NULL);
    //internal_printf("[*] put_Completed (accountsAsync) -> 0x%lx\n", hr);

    __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult* resultObj = NULL;
    hr = accountsAsync->lpVtbl->GetResults(accountsAsync, &resultObj);
    //internal_printf("[*] GetResults (FindAllAccountsResult) -> 0x%lx, result = %p\n", hr, (void*)resultObj);

    if (SUCCEEDED(hr) && resultObj) {
        __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount* accountList = NULL;
        hr = resultObj->lpVtbl->get_Accounts(resultObj, &accountList);
        if (SUCCEEDED(hr) && accountList) {
            unsigned int size = 0;
            hr = accountList->lpVtbl->get_Size(accountList, &size);
            internal_printf("\n[*] FindAllAccountsWithClientIdAsync returned %u accounts!\n", size);

            for (unsigned int i = 0; i < size; i++) {
                __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount* account = NULL;
                hr = accountList->lpVtbl->GetAt(accountList, i, &account);
                if (SUCCEEDED(hr) && account) {
                    HSTRING username;
                    hr = account->lpVtbl->get_UserName(account, &username);
                    if (SUCCEEDED(hr)) {
                        UINT32 ulen = 0;
                        LPCWSTR uname = COMBASE$WindowsGetStringRawBuffer(username, &ulen);
                        //wprintf(L"    - Username: %.*ls\n", ulen, uname);
                        char* usernameStr = Utf16ToUtf8(uname);
                        internal_printf(" |-> %s\n", usernameStr);
                        intFree(usernameStr);
                        COMBASE$WindowsDeleteString(username);
                    } else {
                        internal_printf("[!] Failed to get username for account %u: 0x%lx\n", i, hr);
                    }

                    account->lpVtbl->Release(account);
                } else {
                    internal_printf("[!] Failed to get account at index %u: 0x%lx\n", i, hr);
                }
            }

            accountList->lpVtbl->Release(accountList);
        } else {
            internal_printf("[!] Failed to get Accounts: 0x%lx\n", hr);
        }
        resultObj->lpVtbl->Release(resultObj);
    } else {
        internal_printf("[!] GetResults returned NULL or failed\n");
    }

    accountsAsync->lpVtbl->Release(accountsAsync);    
    result->lpVtbl->Release(result);
    asyncOp->lpVtbl->Release(asyncOp);
    legacyFactory->lpVtbl->Release(legacyFactory);
    factory->lpVtbl->Release(factory);
    COMBASE$RoUninitialize();
    internal_printf("\n[*] Done!\n");
    return 0;
}

#ifdef BOF
VOID go( 
	IN PCHAR Buffer, 
	IN ULONG Length 
) 
{
	if(!bofstart())
	{
		return;
	}
	ListWamAccounts();
	printoutput(TRUE);
};

#else

int main()
{
    return ListWamAccounts();
}

#endif
