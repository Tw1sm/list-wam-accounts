# pragma once

typedef struct IAsyncInfo IAsyncInfo;

typedef /* [v1_enum] */ 
enum AsyncStatus
    {
        Started	= 0,
        Completed	= ( Started + 1 ) ,
        Canceled	= ( Completed + 1 ) ,
        Error	= ( Canceled + 1 ) 
    } 	AsyncStatus;

typedef struct IAsyncInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in IAsyncInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( 
        __RPC__in IAsyncInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( 
        __RPC__in IAsyncInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( 
        __RPC__in IAsyncInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in IAsyncInfo * This,
        /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in IAsyncInfo * This,
        /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
        __RPC__in IAsyncInfo * This,
        /* [retval][out] */ __RPC__out unsigned __int32 *id);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
        __RPC__in IAsyncInfo * This,
        /* [retval][out] */ __RPC__out AsyncStatus *status);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )( 
        __RPC__in IAsyncInfo * This,
        /* [retval][out] */ __RPC__out HRESULT *errorCode);

    HRESULT ( STDMETHODCALLTYPE *Cancel )( 
        __RPC__in IAsyncInfo * This);

    HRESULT ( STDMETHODCALLTYPE *Close )( 
        __RPC__in IAsyncInfo * This);

    END_INTERFACE
} IAsyncInfoVtbl;

interface IAsyncInfo
{
    CONST_VTBL struct IAsyncInfoVtbl *lpVtbl;
};