# pragma once
#pragma intrinsic(memcmp, memcpy,strcpy,strcmp,_stricmp,strlen)
#include <windows.h>

#ifdef BOF

#define intAlloc(size) KERNEL32$HeapAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, size)
#define intRealloc(ptr, size) (ptr) ? KERNEL32$HeapReAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, ptr, size) : KERNEL32$HeapAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, size)
#define intFree(addr) KERNEL32$HeapFree(KERNEL32$GetProcessHeap(), 0, addr)
#define intZeroMemory(addr,size) MSVCRT$memset((addr),0,size)

// MSVCRT
WINBASEAPI size_t __cdecl MSVCRT$wcslen(const wchar_t *_Str);
WINBASEAPI void * __cdecl MSVCRT$memset(void * _Dest, int _Val, size_t _Size);
WINBASEAPI void *__cdecl MSVCRT$calloc(size_t _NumOfElements, size_t _SizeOfElements);
WINBASEAPI void __cdecl MSVCRT$free(void *_Memory);
WINBASEAPI int __cdecl MSVCRT$vsnprintf(char * __restrict__ d,size_t n,const char * __restrict__ format,va_list arg);
WINBASEAPI void *__cdecl MSVCRT$memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _MaxCount);

// KERNEL32
WINBASEAPI int WINAPI Kernel32$WideCharToMultiByte (UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar);
WINBASEAPI void * WINAPI KERNEL32$HeapAlloc (HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
WINBASEAPI LPVOID WINAPI KERNEL32$HeapReAlloc (HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes);
WINBASEAPI BOOL WINAPI KERNEL32$HeapFree (HANDLE, DWORD, PVOID);
WINBASEAPI HANDLE WINAPI KERNEL32$GetProcessHeap();
WINBASEAPI VOID WINAPI KERNEL32$Sleep(DWORD dwMilliseconds);

// OLE32.DLL
WINBASEAPI HRESULT WINAPI OLE32$CoInitializeEx(LPVOID pvReserved, DWORD dwCoInit);
WINBASEAPI VOID WINAPI OLE32$CoUninitialize(VOID);
WINBASEAPI HRESULT WINAPI OLE32$CoCreateInstance(REFCLSID rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, REFIID riid, LPVOID *ppv);

// COMBASE.DLL 
WINBASEAPI HRESULT WINAPI COMBASE$RoInitialize(RO_INIT_TYPE initType);
WINBASEAPI VOID WINAPI COMBASE$RoUninitialize(VOID);
WINBASEAPI HRESULT WINAPI COMBASE$RoGetActivationFactory(HSTRING classId, REFIID iid, LPVOID *factory);
WINBASEAPI HRESULT WINAPI COMBASE$WindowsCreateString(PCWSTR sourceString, UINT32 length, HSTRING *string);
WINBASEAPI HRESULT WINAPI COMBASE$WindowsDeleteString(HSTRING string);
WINBASEAPI PCWSTR  WINAPI COMBASE$WindowsGetStringRawBuffer(HSTRING string,
          UINT32 *length);

#else

#define intAlloc(size) KERNEL32$HeapAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, size)
#define intRealloc(ptr, size) (ptr) ? KERNEL32$HeapReAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, ptr, size) : KERNEL32$HeapAlloc(KERNEL32$GetProcessHeap(), HEAP_ZERO_MEMORY, size)
#define intFree(addr) KERNEL32$HeapFree(KERNEL32$GetProcessHeap(), 0, addr)
#define intZeroMemory(addr,size) MSVCRT$memset((addr),0,size)

#define MSVCRT$wcslen wcslen
#define MSVCRT$memset memset
#define MSVCRT$calloc calloc
#define MSVCRT$free free
#define MSVCRT$vsnprintf vsnprintf
#define MSVCRT$memcpy memcpy
#define Kernel32$WideCharToMultiByte WideCharToMultiByte
#define KERNEL32$HeapAlloc HeapAlloc
#define KERNEL32$HeapReAlloc HeapReAlloc
#define KERNEL32$HeapFree HeapFree
#define KERNEL32$GetProcessHeap GetProcessHeap
#define KERNEL32$Sleep Sleep
#define OLE32$CoInitializeEx CoInitializeEx
#define OLE32$CoUninitialize CoUninitialize
#define OLE32$CoCreateInstance CoCreateInstance
#define COMBASE$RoInitialize RoInitialize
#define COMBASE$RoUninitialize RoUninitialize
#define COMBASE$RoGetActivationFactory RoGetActivationFactory
#define COMBASE$WindowsCreateString WindowsCreateString
#define COMBASE$WindowsDeleteString WindowsDeleteString
#define COMBASE$WindowsGetStringRawBuffer WindowsGetStringRawBuffer

#endif