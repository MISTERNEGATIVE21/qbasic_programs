/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef __INC_ENDPOINTVOLUME__
#define __INC_ENDPOINTVOLUME__

#include <objbase.h>

#if (_WIN32_WINNT >= 0x0600)

DEFINE_GUID(CLSID_MMDeviceEnumerator,0xBCDE0395,0xE52F,0x467C,0x8E,0x3D,0xC4,0x57,0x92,0x91,0x69,0x2E);
DEFINE_GUID(IID_IMMDeviceEnumerator,0xA95664D2,0x9614,0x4F35,0xA7,0x46,0xDE,0x8D,0xB6,0x36,0x17,0xE6);
DEFINE_GUID(IID_IAudioEndpointVolume,0x5CDF2C82,0x841E,0x4546,0x97,0x22,0x0C,0xF7,0x40,0x78,0x22,0x9A);
DEFINE_GUID(IID_IAudioEndpointVolumeCallback,0x657804fa,0xd6ad,0x4496,0x8a,0x60,0x35,0x27,0x52,0xaf,0x4f,0x89);
DEFINE_GUID(IID_IAudioEndpointVolumeEx,0x66e11784,0xf695,0x4f28,0xa5,0x05,0xa7,0x08,0x00,0x81,0xa7,0x8f);

typedef struct _AUDIO_VOLUME_NOTIFICATION_DATA {
  GUID  guidEventContext;
  WINBOOL  bMuted;
  float fMasterVolume;
  UINT  nChannels;
  float afChannelVolumes[1];
} AUDIO_VOLUME_NOTIFICATION_DATA, *PAUDIO_VOLUME_NOTIFICATION_DATA;

#ifndef __IAudioEndpointVolume_FWD_DEFINED__
#define __IAudioEndpointVolume_FWD_DEFINED__
typedef struct IAudioEndpointVolume IAudioEndpointVolume;
#endif

#ifndef __IAudioEndpointVolumeCallback_FWD_DEFINED__
#define __IAudioEndpointVolumeCallback_FWD_DEFINED__
typedef struct IAudioEndpointVolumeCallback IAudioEndpointVolumeCallback;
#endif

#undef  INTERFACE
#define INTERFACE IAudioEndpointVolume
DECLARE_INTERFACE_(IAudioEndpointVolume,IUnknown)
{
    BEGIN_INTERFACE

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IAudioEndpointVolume methods */
    STDMETHOD_(HRESULT,RegisterControlChangeNotify)(THIS_ IAudioEndpointVolumeCallback *pNotify) PURE;
    STDMETHOD_(HRESULT,UnregisterControlChangeNotify)(THIS_ IAudioEndpointVolumeCallback *pNotify) PURE;
    STDMETHOD_(HRESULT,GetChannelCount)(THIS_ UINT *pnChannelCount) PURE;
    STDMETHOD_(HRESULT,SetMasterVolumeLevel)(THIS_ float fLevelDB,LPCGUID pguidEventContext) PURE;
    STDMETHOD_(HRESULT,SetMasterVolumeLevelScalar)(THIS_ float fLevel,LPCGUID pguidEventContext) PURE;
    STDMETHOD_(HRESULT,GetMasterVolumeLevel)(THIS_ float *pfLevelDB) PURE;
    STDMETHOD_(HRESULT,GetMasterVolumeLevelScalar)(THIS_ float *pfLevel) PURE;
    STDMETHOD_(HRESULT,SetChannelVolumeLevel)(THIS_ UINT nChannel,float fLevelDB,LPCGUID pguidEventContext) PURE;
    STDMETHOD_(HRESULT,SetChannelVolumeLevelScalar)(THIS_ UINT nChannel,float fLevel,LPCGUID pguidEventContext) PURE;
    STDMETHOD_(HRESULT,GetChannelVolumeLevel)(THIS_ UINT nChannel,float *pfLevelDB) PURE;
    STDMETHOD_(HRESULT,GetChannelVolumeLevelScalar)(THIS_ UINT nChannel,float *pfLevel) PURE;
    STDMETHOD_(HRESULT,SetMute)(THIS_ WINBOOL bMute,LPCGUID pguidEventContext) PURE;
    STDMETHOD_(HRESULT,GetMute)(THIS_ WINBOOL *pbMute) PURE;
    STDMETHOD_(HRESULT,GetVolumeStepInfo)(THIS_ UINT *pnStep,UINT *pnStepCount) PURE;
    STDMETHOD_(HRESULT,VolumeStepUp)(THIS_ LPCGUID pguidEventContext) PURE;
    STDMETHOD_(HRESULT,VolumeStepDown)(THIS_ LPCGUID pguidEventContext) PURE;
    STDMETHOD_(HRESULT,QueryHardwareSupport)(THIS_ DWORD *pdwHardwareSupportMask) PURE;
    STDMETHOD_(HRESULT,GetVolumeRange)(THIS_ float *pfLevelMinDB,float *pfLevelMaxDB,float *pfVolumeIncrementDB) PURE;

    END_INTERFACE
};
#ifdef COBJMACROS
#define IAudioEndpointVolume_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAudioEndpointVolume_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAudioEndpointVolume_Release(This) (This)->lpVtbl->Release(This)
#define IAudioEndpointVolume_RegisterControlChangeNotify(This,pNotify) (This)->lpVtbl->RegisterControlChangeNotify(This,pNotify)
#define IAudioEndpointVolume_UnregisterControlChangeNotify(This,pNotify) (This)->lpVtbl->UnregisterControlChangeNotify(This,pNotify)
#define IAudioEndpointVolume_GetChannelCount(This,pnChannelCount) (This)->lpVtbl->GetChannelCount(This,pnChannelCount)
#define IAudioEndpointVolume_SetMasterVolumeLevel(This,fLevelDB,pguidEventContext) (This)->lpVtbl->SetMasterVolumeLevel(This,fLevelDB,pguidEventContext)
#define IAudioEndpointVolume_SetMasterVolumeLevelScalar(This,fLevel,pguidEventContext) (This)->lpVtbl->SetMasterVolumeLevelScalar(This,fLevel,pguidEventContext)
#define IAudioEndpointVolume_GetMasterVolumeLevel(This,pfLevelDB) (This)->lpVtbl->GetMasterVolumeLevel(This,pfLevelDB)
#define IAudioEndpointVolume_GetMasterVolumeLevelScalar(This,pfLevel) (This)->lpVtbl->GetMasterVolumeLevelScalar(This,pfLevel)
#define IAudioEndpointVolume_SetChannelVolumeLevel(This,nChannel,fLevelDB,pguidEventContext) (This)->lpVtbl->SetChannelVolumeLevel(This,nChannel,fLevelDB,pguidEventContext)
#define IAudioEndpointVolume_SetChannelVolumeLevelScalar(This,nChannel,fLevel,pguidEventContext) (This)->lpVtbl->SetChannelVolumeLevelScalar(This,nChannel,fLevel,pguidEventContext)
#define IAudioEndpointVolume_GetChannelVolumeLevel(This,nChannel,pfLevelDB) (This)->lpVtbl->GetChannelVolumeLevel(This,nChannel,pfLevelDB)
#define IAudioEndpointVolume_GetChannelVolumeLevelScalar(This,nChannel,pfLevel) (This)->lpVtbl->GetChannelVolumeLevelScalar(This,nChannel,pfLevel)
#define IAudioEndpointVolume_SetMute(This,bMute,pguidEventContext) (This)->lpVtbl->SetMute(This,bMute,pguidEventContext)
#define IAudioEndpointVolume_GetMute(This,pbMute) (This)->lpVtbl->GetMute(This,pbMute)
#define IAudioEndpointVolume_GetVolumeStepInfo(This,pnStep,pnStepCount) (This)->lpVtbl->GetVolumeStepInfo(This,pnStep,pnStepCount)
#define IAudioEndpointVolume_VolumeStepUp(This,pguidEventContext) (This)->lpVtbl->VolumeStepUp(This,pguidEventContext)
#define IAudioEndpointVolume_VolumeStepDown(This,pguidEventContext) (This)->lpVtbl->VolumeStepDown(This,pguidEventContext)
#define IAudioEndpointVolume_QueryHardwareSupport(This,pdwHardwareSupportMask) (This)->lpVtbl->QueryHardwareSupport(This,pdwHardwareSupportMask)
#define IAudioEndpointVolume_GetVolumeRange(This,pfLevelMinDB,pfLevelMaxDB,pfVolumeIncrementDB) (This)->lpVtbl->GetVolumeRange(This,pfLevelMinDB,pfLevelMaxDB,pfVolumeIncrementDB)
#endif /*COBJMACROS*/

#undef  INTERFACE
#define INTERFACE IAudioEndpointVolumeCallback
DECLARE_INTERFACE_(IAudioEndpointVolumeCallback,IUnknown)
{
    BEGIN_INTERFACE

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IAudioEndpointVolumeCallback methods */
    STDMETHOD_(HRESULT,OnNotify)(THIS_ PAUDIO_VOLUME_NOTIFICATION_DATA pNotify) PURE;

    END_INTERFACE
};
#ifdef COBJMACROS
#define IAudioEndpointVolumeCallback_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAudioEndpointVolumeCallback_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAudioEndpointVolumeCallback_Release(This) (This)->lpVtbl->Release(This)
#define IAudioEndpointVolumeCallback_OnNotify(This,pNotify) (This)->lpVtbl->OnNotify(This,pNotify)
#endif /*COBJMACROS*/

#endif /*(_WIN32_WINNT >= 0x0600)*/
#endif /*__INC_ENDPOINTVOLUME__*/
