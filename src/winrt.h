# pragma once

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl *lpVtbl;
};


typedef interface __FIAsyncOperation_WebAccountProvider __FIAsyncOperation_WebAccountProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_WebAccountProvider;

typedef struct __FIAsyncOperation_WebAccountProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_WebAccountProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_WebAccountProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_WebAccountProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_WebAccountProvider * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_WebAccountProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_WebAccountProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_WebAccountProvider * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_WebAccountProvider * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_WebAccountProvider * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * *results);
    END_INTERFACE
} __FIAsyncOperation_WebAccountProviderVtbl;

interface __FIAsyncOperation_WebAccountProvider
{
    CONST_VTBL struct __FIAsyncOperation_WebAccountProviderVtbl *lpVtbl;
};


typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider;

typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderVtbl {
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* This);
    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* This);

    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* This,
        TrustLevel* trustLevel);

    // Property getters
    HRESULT (STDMETHODCALLTYPE *get_Id)(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE *get_DisplayName)(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE *get_Icon)(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* This,
        void** value); // IRandomAccessStreamReference*
} __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderVtbl;

interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider {
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProviderVtbl* lpVtbl;
};

typedef enum __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountState __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountState;
enum __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountState
{
    WebAccountState_None = 0,
    WebAccountState_Connected = 1,
    WebAccountState_Error = 2,
};

typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebAccountProvider )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserName )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CWebAccountState * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountVtbl;

interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountVtbl *lpVtbl;
};

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccount **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountVtbl *lpVtbl;
};

typedef interface __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount;

typedef struct __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAt)(__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount* This,
        UINT32 index,
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount* This,
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount** items,
        UINT32* result);

    END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccountVtbl* lpVtbl;
};

typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CFindAllWebAccountsStatus __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CFindAllWebAccountsStatus;
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CFindAllWebAccountsStatus
{
    FindAllWebAccountsStatus_Success = 0,
    FindAllWebAccountsStatus_NotAllowedByProvider = 1,
    FindAllWebAccountsStatus_NotSupportedByProvider = 2,
    FindAllWebAccountsStatus_ProviderError = 3,
};

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIMapView_2_HSTRING_HSTRING* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIMapView_2_HSTRING_HSTRING* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIMapView_2_HSTRING_HSTRING* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIMapView_2_HSTRING_HSTRING* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIMapView_2_HSTRING_HSTRING* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIMapView_2_HSTRING_HSTRING* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Lookup)(__FIMapView_2_HSTRING_HSTRING* This,
        HSTRING key,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIMapView_2_HSTRING_HSTRING* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* HasKey)(__FIMapView_2_HSTRING_HSTRING* This,
        HSTRING key,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* Split)(__FIMapView_2_HSTRING_HSTRING* This,
        __FIMapView_2_HSTRING_HSTRING** first,
        __FIMapView_2_HSTRING_HSTRING** second);

    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl* lpVtbl;
};

typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;

typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIMap_2_HSTRING_HSTRING* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIMap_2_HSTRING_HSTRING* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIMap_2_HSTRING_HSTRING* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIMap_2_HSTRING_HSTRING* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIMap_2_HSTRING_HSTRING* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIMap_2_HSTRING_HSTRING* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Lookup)(__FIMap_2_HSTRING_HSTRING* This,
        HSTRING key,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__FIMap_2_HSTRING_HSTRING* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* HasKey)(__FIMap_2_HSTRING_HSTRING* This,
        HSTRING key,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetView)(__FIMap_2_HSTRING_HSTRING* This,
        __FIMapView_2_HSTRING_HSTRING** result);
    HRESULT (STDMETHODCALLTYPE* Insert)(__FIMap_2_HSTRING_HSTRING* This,
        HSTRING key,
        HSTRING value,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* Remove)(__FIMap_2_HSTRING_HSTRING* This,
        HSTRING key);
    HRESULT (STDMETHODCALLTYPE* Clear)(__FIMap_2_HSTRING_HSTRING* This);

    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;

interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl* lpVtbl;
};

typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError;

typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_ErrorCode)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* get_ErrorMessage)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_Properties)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError* This,
        __FIMap_2_HSTRING_HSTRING** value);

    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderErrorVtbl* lpVtbl;
};

typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult;

typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResultVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Accounts)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult* This,
        __FIVectorView_1_Windows__CSecurity__CCredentials__CWebAccount** value);
    HRESULT (STDMETHODCALLTYPE* get_Status)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult* This,
        enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CFindAllWebAccountsStatus* value);
    HRESULT (STDMETHODCALLTYPE* get_ProviderError)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult* This,
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebProviderError** value);

    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResultVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResultVtbl* lpVtbl;
};

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult;

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResultVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* put_Completed)(__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult* This,
        __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult* This,
        __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult* This,
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIFindAllAccountsResult** result);

    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResultVtbl* lpVtbl;
};

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider;


  typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider;
  typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl
  {
      BEGIN_INTERFACE
      HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This,
          /* [in] */ __RPC__in REFIID riid,
          /* [annotation][iid_is][out] */ 
          _COM_Outptr_  void **ppvObject);
      ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);
      ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This);
  
      HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This,
          /* [out] */ __RPC__out ULONG *iidCount,
          /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
      HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
      HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);
  
      /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider *handler);
      /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CWebAccountProvider **handler);
      HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider * *results);
      END_INTERFACE
  } __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl;
  
  interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider
  {
      CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProviderVtbl *lpVtbl;
  };

typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4 __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4;
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4Vtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* FindAllAccountsAsync)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* This,
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* provider,
        __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult** operation);
    HRESULT (STDMETHODCALLTYPE* FindAllAccountsWithClientIdAsync)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* This,
        __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccountProvider* provider,
        HSTRING clientId,
        __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CFindAllAccountsResult** operation);
    HRESULT (STDMETHODCALLTYPE* FindSystemAccountProviderAsync)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* This,
        HSTRING webAccountProviderId,
        __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider** operation);
    HRESULT (STDMETHODCALLTYPE* FindSystemAccountProviderWithAuthorityAsync)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* This,
        HSTRING webAccountProviderId,
        HSTRING authority,
        __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider** operation);
    HRESULT (STDMETHODCALLTYPE* FindSystemAccountProviderWithAuthorityForUserAsync)(__x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4* This,
        HSTRING webAccountProviderId,
        HSTRING authority,
        __x_ABI_CWindows_CSystem_CIUser* user,
        __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider** operation);

    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4Vtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics4Vtbl* lpVtbl;
};


typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl;
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics {
    const __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl* lpVtbl;
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics;

typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl {
    HRESULT(STDMETHODCALLTYPE* QueryInterface)(void* This, REFIID riid, void** ppvObject);
    ULONG(STDMETHODCALLTYPE* AddRef)(void* This);
    ULONG(STDMETHODCALLTYPE* Release)(void* This);
    HRESULT(STDMETHODCALLTYPE* GetIids)(void* This, ULONG* iidCount, IID** iids);
    HRESULT(STDMETHODCALLTYPE* GetRuntimeClassName)(void* This, HSTRING* className);
    HRESULT(STDMETHODCALLTYPE* GetTrustLevel)(void* This, TrustLevel* trustLevel);
    HRESULT(STDMETHODCALLTYPE* GetTokenSilentlyAsync)(void* This, void* request, void** asyncInfo);
    HRESULT(STDMETHODCALLTYPE* GetTokenSilentlyWithWebAccountAsync)(void* This, void* request, void* webAccount, void** asyncInfo);
    HRESULT(STDMETHODCALLTYPE* RequestTokenAsync)(void* This, void* request, void** asyncInfo);
    HRESULT(STDMETHODCALLTYPE* RequestTokenWithWebAccountAsync)(void* This, void* request, void* webAccount, void** asyncInfo);
    HRESULT(STDMETHODCALLTYPE* FindAccountAsync)(void* This, void* provider, HSTRING webAccountId, void** asyncInfo);
    HRESULT(STDMETHODCALLTYPE* FindAccountProviderAsync)(void* This, HSTRING providerId, void** asyncInfo);
     /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAccountProviderWithAuthorityAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStatics * This,
        /* [in] */__RPC__in HSTRING webAccountProviderId,
        /* [in] */__RPC__in HSTRING authority,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CWebAccountProvider * * asyncInfo
        );
    HRESULT(STDMETHODCALLTYPE* FindAllAccountsAsync)(void* This, void* provider, HSTRING clientId, void** asyncInfo);
} __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl;

interface IWebAuthenticationCoreManagerStatics {
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebAuthenticationCoreManagerStaticsVtbl* lpVtbl;
};