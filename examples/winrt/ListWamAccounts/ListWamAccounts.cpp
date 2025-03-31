#include <winrt/Windows.Security.Authentication.Web.Core.h>
#include <winrt/Windows.Security.Credentials.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.h>
#include <iostream>
using namespace winrt;
using namespace Windows::Security::Authentication::Web::Core;
using namespace Windows::Security::Credentials;
using namespace Windows::Foundation;

int main()
{
    init_apartment();

    std::wcout << L"[*] Calling FindAccountProviderAsync..." << std::endl;

    auto providerOp = WebAuthenticationCoreManager::FindAccountProviderAsync(
        L"https://login.microsoft.com",
        L"organizations");

    WebAccountProvider provider = providerOp.get();
    if (!provider)
    {
        std::wcout << L"[!] Provider not found" << std::endl;
        return 1;
    }

    std::wcout << L"[*] Provider found: " << provider.DisplayName().c_str() << std::endl;

    std::wcout << L"[*] Calling FindAllAccountsAsync..." << std::endl;
    auto accountsOp = WebAuthenticationCoreManager::FindAllAccountsAsync(provider, L"00000000-0000-0000-0000-000000000000");
    auto result = accountsOp.get();

    auto accounts = result.Accounts();
    uint32_t count = accounts.Size();

    std::wcout << L"[*] Found " << count << L" accounts" << std::endl;
    for (uint32_t i = 0; i < count; i++)
    {
        WebAccount account = accounts.GetAt(i);
        std::wcout << L"    - " << account.UserName().c_str() << std::endl;
    }

    return 0;
}