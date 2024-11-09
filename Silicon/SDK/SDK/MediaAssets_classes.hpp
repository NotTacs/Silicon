#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaAssets

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AudioMixer_classes.hpp"
#include "MediaAssets_structs.hpp"


namespace SDK
{

// Class MediaAssets.MediaSource
// 0x0008 (0x0030 - 0x0028)
class UMediaSource : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FString GetUrl() const;
	bool Validate() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaSource">();
	}
	static class UMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaSource>();
	}
};
static_assert(alignof(UMediaSource) == 0x000008, "Wrong alignment on UMediaSource");
static_assert(sizeof(UMediaSource) == 0x000030, "Wrong size on UMediaSource");

// Class MediaAssets.BaseMediaSource
// 0x0008 (0x0038 - 0x0030)
class UBaseMediaSource : public UMediaSource
{
public:
	class FName                                   PlayerName;                                        // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseMediaSource">();
	}
	static class UBaseMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseMediaSource>();
	}
};
static_assert(alignof(UBaseMediaSource) == 0x000008, "Wrong alignment on UBaseMediaSource");
static_assert(sizeof(UBaseMediaSource) == 0x000038, "Wrong size on UBaseMediaSource");
static_assert(offsetof(UBaseMediaSource, PlayerName) == 0x000030, "Member 'UBaseMediaSource::PlayerName' has a wrong offset!");

// Class MediaAssets.FileMediaSource
// 0x0018 (0x0050 - 0x0038)
class UFileMediaSource final : public UBaseMediaSource
{
public:
	class FString                                 FilePath;                                          // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PrecacheFile;                                      // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetFilePath(const class FString& Path);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileMediaSource">();
	}
	static class UFileMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileMediaSource>();
	}
};
static_assert(alignof(UFileMediaSource) == 0x000008, "Wrong alignment on UFileMediaSource");
static_assert(sizeof(UFileMediaSource) == 0x000050, "Wrong size on UFileMediaSource");
static_assert(offsetof(UFileMediaSource, FilePath) == 0x000038, "Member 'UFileMediaSource::FilePath' has a wrong offset!");
static_assert(offsetof(UFileMediaSource, PrecacheFile) == 0x000048, "Member 'UFileMediaSource::PrecacheFile' has a wrong offset!");

// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMediaBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
	static void EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
	static void EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaBlueprintFunctionLibrary">();
	}
	static class UMediaBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UMediaBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UMediaBlueprintFunctionLibrary");
static_assert(sizeof(UMediaBlueprintFunctionLibrary) == 0x000028, "Wrong size on UMediaBlueprintFunctionLibrary");

// Class MediaAssets.MediaPlayer
// 0x0168 (0x0190 - 0x0028)
class UMediaPlayer final : public UObject
{
public:
	UMulticastDelegateProperty_                   OnEndReached;                                      // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnMediaClosed;                                     // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnMediaOpened;                                     // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnMediaOpenFailed;                                 // 0x0058(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnPlaybackResumed;                                 // 0x0068(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnPlaybackSuspended;                               // 0x0078(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnSeekCompleted;                                   // 0x0088(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnTracksChanged;                                   // 0x0098(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FTimespan                              CacheAhead;                                        // 0x00A8(0x0008)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                              CacheBehind;                                       // 0x00B0(0x0008)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                              CacheBehindGame;                                   // 0x00B8(0x0008)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          NativeAudioOut;                                    // 0x00C0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PlayOnOpen;                                        // 0x00C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         Shuffle : 1;                                       // 0x00C4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Loop : 1;                                          // 0x00C4(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlaylist*                         Playlist;                                          // 0x00C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         PlaylistIndex;                                     // 0x00D0(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         HorizontalFieldOfView;                             // 0x00D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         VerticalFieldOfView;                               // 0x00D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                               ViewRotation;                                      // 0x00DC(0x000C)(Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_E8[0x88];                                      // 0x00E8(0x0088)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  PlayerGuid;                                        // 0x0170(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_180[0x10];                                     // 0x0180(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPlayUrl(const class FString& URL);
	void Close();
	bool Next();
	bool OpenFile(const class FString& FilePath);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Param_Index);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenUrl(const class FString& URL);
	bool Pause();
	bool Play();
	bool Previous();
	bool Reopen();
	bool Rewind();
	bool Seek(const struct FTimespan& Time);
	bool SelectTrack(EMediaPlayerTrack TrackType, int32 TrackIndex);
	void SetDesiredPlayerName(class FName PlayerName);
	bool SetLooping(bool Looping);
	bool SetRate(float Rate);
	bool SetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
	bool SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);

	bool CanPause() const;
	int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex) const;
	int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex) const;
	class FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex) const;
	class FName GetDesiredPlayerName() const;
	struct FTimespan GetDuration() const;
	float GetHorizontalFieldOfView() const;
	class FText GetMediaName() const;
	int32 GetNumTrackFormats(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	int32 GetNumTracks(EMediaPlayerTrack TrackType) const;
	class FName GetPlayerName() const;
	class UMediaPlaylist* GetPlaylist() const;
	int32 GetPlaylistIndex() const;
	float GetRate() const;
	int32 GetSelectedTrack(EMediaPlayerTrack TrackType) const;
	void GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned) const;
	struct FTimespan GetTime() const;
	class FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	int32 GetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	class FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	class FString GetUrl() const;
	float GetVerticalFieldOfView() const;
	float GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex) const;
	struct FIntPoint GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex) const;
	float GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex) const;
	struct FFloatRange GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex) const;
	class FString GetVideoTrackType(int32 TrackIndex, int32 FormatIndex) const;
	struct FRotator GetViewRotation() const;
	bool HasError() const;
	bool IsBuffering() const;
	bool IsConnecting() const;
	bool IsLooping() const;
	bool IsPaused() const;
	bool IsPlaying() const;
	bool IsPreparing() const;
	bool IsReady() const;
	bool SupportsRate(float Rate, bool Unthinned) const;
	bool SupportsScrubbing() const;
	bool SupportsSeeking() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlayer">();
	}
	static class UMediaPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlayer>();
	}
};
static_assert(alignof(UMediaPlayer) == 0x000008, "Wrong alignment on UMediaPlayer");
static_assert(sizeof(UMediaPlayer) == 0x000190, "Wrong size on UMediaPlayer");
static_assert(offsetof(UMediaPlayer, OnEndReached) == 0x000028, "Member 'UMediaPlayer::OnEndReached' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaClosed) == 0x000038, "Member 'UMediaPlayer::OnMediaClosed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaOpened) == 0x000048, "Member 'UMediaPlayer::OnMediaOpened' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaOpenFailed) == 0x000058, "Member 'UMediaPlayer::OnMediaOpenFailed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnPlaybackResumed) == 0x000068, "Member 'UMediaPlayer::OnPlaybackResumed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnPlaybackSuspended) == 0x000078, "Member 'UMediaPlayer::OnPlaybackSuspended' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnSeekCompleted) == 0x000088, "Member 'UMediaPlayer::OnSeekCompleted' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnTracksChanged) == 0x000098, "Member 'UMediaPlayer::OnTracksChanged' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, CacheAhead) == 0x0000A8, "Member 'UMediaPlayer::CacheAhead' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, CacheBehind) == 0x0000B0, "Member 'UMediaPlayer::CacheBehind' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, CacheBehindGame) == 0x0000B8, "Member 'UMediaPlayer::CacheBehindGame' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, NativeAudioOut) == 0x0000C0, "Member 'UMediaPlayer::NativeAudioOut' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, PlayOnOpen) == 0x0000C1, "Member 'UMediaPlayer::PlayOnOpen' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, Playlist) == 0x0000C8, "Member 'UMediaPlayer::Playlist' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, PlaylistIndex) == 0x0000D0, "Member 'UMediaPlayer::PlaylistIndex' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, HorizontalFieldOfView) == 0x0000D4, "Member 'UMediaPlayer::HorizontalFieldOfView' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, VerticalFieldOfView) == 0x0000D8, "Member 'UMediaPlayer::VerticalFieldOfView' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, ViewRotation) == 0x0000DC, "Member 'UMediaPlayer::ViewRotation' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, PlayerGuid) == 0x000170, "Member 'UMediaPlayer::PlayerGuid' has a wrong offset!");

// Class MediaAssets.MediaPlaylist
// 0x0018 (0x0040 - 0x0028)
class UMediaPlaylist final : public UObject
{
public:
	uint8                                         Loop : 1;                                          // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMediaSource*>                   Items;                                             // 0x0030(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	bool Add(class UMediaSource* MediaSource);
	bool AddFile(const class FString& FilePath);
	bool AddUrl(const class FString& URL);
	class UMediaSource* Get(int32 Param_Index);
	class UMediaSource* GetNext(int32* InOutIndex);
	class UMediaSource* GetPrevious(int32* InOutIndex);
	class UMediaSource* GetRandom(int32* OutIndex);
	void Insert(class UMediaSource* MediaSource, int32 Param_Index);
	int32 Num();
	bool Remove(class UMediaSource* MediaSource);
	bool RemoveAt(int32 Param_Index);
	bool Replace(int32 Param_Index, class UMediaSource* Replacement);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlaylist">();
	}
	static class UMediaPlaylist* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlaylist>();
	}
};
static_assert(alignof(UMediaPlaylist) == 0x000008, "Wrong alignment on UMediaPlaylist");
static_assert(sizeof(UMediaPlaylist) == 0x000040, "Wrong size on UMediaPlaylist");
static_assert(offsetof(UMediaPlaylist, Items) == 0x000030, "Member 'UMediaPlaylist::Items' has a wrong offset!");

// Class MediaAssets.MediaSoundComponent
// 0x0080 (0x0650 - 0x05D0)
class UMediaSoundComponent final : public USynthComponent
{
public:
	EMediaSoundChannels                           Channels;                                          // 0x05D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5D4[0x4];                                      // 0x05D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           MediaPlayer;                                       // 0x05D8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5E0[0x70];                                     // 0x05E0(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaSoundComponent">();
	}
	static class UMediaSoundComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaSoundComponent>();
	}
};
static_assert(alignof(UMediaSoundComponent) == 0x000008, "Wrong alignment on UMediaSoundComponent");
static_assert(sizeof(UMediaSoundComponent) == 0x000650, "Wrong size on UMediaSoundComponent");
static_assert(offsetof(UMediaSoundComponent, Channels) == 0x0005D0, "Member 'UMediaSoundComponent::Channels' has a wrong offset!");
static_assert(offsetof(UMediaSoundComponent, MediaPlayer) == 0x0005D8, "Member 'UMediaSoundComponent::MediaPlayer' has a wrong offset!");

// Class MediaAssets.MediaTexture
// 0x0078 (0x0130 - 0x00B8)
class UMediaTexture final : public UTexture
{
public:
	ETextureAddress                               AddressX;                                          // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressY;                                          // 0x00B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoClear;                                         // 0x00BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_BB[0x1];                                       // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ClearColor;                                        // 0x00BC(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           MediaPlayer;                                       // 0x00D0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_D8[0x58];                                      // 0x00D8(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);

	float GetAspectRatio() const;
	int32 GetHeight() const;
	class UMediaPlayer* GetMediaPlayer() const;
	int32 GetWidth() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaTexture">();
	}
	static class UMediaTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaTexture>();
	}
};
static_assert(alignof(UMediaTexture) == 0x000008, "Wrong alignment on UMediaTexture");
static_assert(sizeof(UMediaTexture) == 0x000130, "Wrong size on UMediaTexture");
static_assert(offsetof(UMediaTexture, AddressX) == 0x0000B8, "Member 'UMediaTexture::AddressX' has a wrong offset!");
static_assert(offsetof(UMediaTexture, AddressY) == 0x0000B9, "Member 'UMediaTexture::AddressY' has a wrong offset!");
static_assert(offsetof(UMediaTexture, AutoClear) == 0x0000BA, "Member 'UMediaTexture::AutoClear' has a wrong offset!");
static_assert(offsetof(UMediaTexture, ClearColor) == 0x0000BC, "Member 'UMediaTexture::ClearColor' has a wrong offset!");
static_assert(offsetof(UMediaTexture, MediaPlayer) == 0x0000D0, "Member 'UMediaTexture::MediaPlayer' has a wrong offset!");

// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0038 - 0x0030)
class UPlatformMediaSource final : public UMediaSource
{
public:
	class UMediaSource*                           MediaSource;                                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlatformMediaSource">();
	}
	static class UPlatformMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformMediaSource>();
	}
};
static_assert(alignof(UPlatformMediaSource) == 0x000008, "Wrong alignment on UPlatformMediaSource");
static_assert(sizeof(UPlatformMediaSource) == 0x000038, "Wrong size on UPlatformMediaSource");
static_assert(offsetof(UPlatformMediaSource, MediaSource) == 0x000030, "Member 'UPlatformMediaSource::MediaSource' has a wrong offset!");

// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0048 - 0x0038)
class UStreamMediaSource final : public UBaseMediaSource
{
public:
	class FString                                 StreamUrl;                                         // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StreamMediaSource">();
	}
	static class UStreamMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStreamMediaSource>();
	}
};
static_assert(alignof(UStreamMediaSource) == 0x000008, "Wrong alignment on UStreamMediaSource");
static_assert(sizeof(UStreamMediaSource) == 0x000048, "Wrong size on UStreamMediaSource");
static_assert(offsetof(UStreamMediaSource, StreamUrl) == 0x000038, "Member 'UStreamMediaSource::StreamUrl' has a wrong offset!");

}

