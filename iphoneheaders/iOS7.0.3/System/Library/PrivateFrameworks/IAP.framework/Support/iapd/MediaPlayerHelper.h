/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <iapd/iapd-Structs.h>
@class NSMutableDictionary, NSString, NSObject, NSDate;

@interface MediaPlayerHelper : NSObject {

	NSMutableDictionary* _nowPlayingInfo;
	opaque_pthread_mutex_t _nowPlayingInfoLock;
	NSString* _nowPlayingAppIdentifier;
	NSString* _nowPlayingAppName;
	unsigned char _nowPlayingAppChanged;
	unsigned char _nowPlayingAppIsIPod;
	unsigned char _nowPlayingAppIsIPodRadio;
	unsigned char _nowPlayingAppIsIPodIsValid;
	unsigned char _nowPlayingAppIsPlaying;
	NSObject<OS_dispatch_queue>* nowPlayingHandlerQueue;
	int repeatModeCache;
	int shuffleModeCache;
	NSDate* _nowPlayingAppIsPlayingTimestamp;
	unsigned _fakeStreamTrackIndex;
	unsigned _fakeStreamTrackCount;
	bool _fakeStreamTrackIndexSet;
	unsigned _lastTimeNowPlayingPBRateChangeToPauseOrStop;
	bool _explicitControlOccurred;
	bool _lastWasStreamPlayback;

}

@property (assign,nonatomic) int repeatModeCache; 
@property (assign,nonatomic) int shuffleModeCache; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * nowPlayingHandlerQueue; 
-(void)_mediaLibraryChanged:(id)arg1 ;
-(void)_nowPlayingInfoChanged:(id)arg1 ;
-(void)_printNowPlayingInfo:(id)arg1 forName:(id)arg2 ;
-(void)_handleNowPlayingInfo:(CFDictionaryRef)arg1 ;
-(void)_handleNowPlayingAppIsPlayingDidChange:(unsigned char)arg1 ;
-(void)_nowPlayingAppIsPlayingChanged:(id)arg1 ;
-(void)_setNowPlayingApp:(id)arg1 ;
-(void)_nowPlayingAppChanged:(id)arg1 ;
-(void)_playbackQueueDidChangeNotification:(id)arg1 ;
-(void)_shuffleModeChanged:(id)arg1 ;
-(void)_nowPlayingItemChanged:(id)arg1 ;
-(unsigned char)nowPlayingAppIsIPodApp;
-(unsigned)currentNowPlayingInfoNumber:(id)arg1 ;
-(void)_calcNewFakeStreamIndexCount;
-(int)nowPlayingAppPlaybackState;
-(void)_handlePlaybackQueueDidChange;
-(void)_handleNowPlayingAppDidChange:(id)arg1 ;
-(void)_resetFakeStreamTrackCount;
-(void)_setFakeStreamTrackIndex:(unsigned)arg1 fromPlay:(bool)arg2 ;
-(void)postFakeShuffleModeChanged;
-(void)_repeatModeChanged:(id)arg1 ;
-(unsigned char)nowPlayingAppIsValid;
-(unsigned char)nowPlayingAppIsiTunesRadio;
-(unsigned char)nowPlayingAppIsVideosApp;
-(id)nowPlayingAppName;
-(double)nowPlayingAppPlaybackRate;
-(double)currentNowPlayingInfoDuration;
-(unsigned long long)currentNowPlayingInfoPID;
-(id)currentNowPlayingInfoString:(id)arg1 ;
-(unsigned)currentNowPlayingInfoTrack;
-(unsigned)currentNowPlayingInfoTrackCount;
-(unsigned)currentNowPlayingInfoChapter;
-(unsigned)currentNowPlayingInfoChapterCount;
-(unsigned)currentNowPlayingInfoDisc;
-(unsigned)currentNowPlayingInfoDiscCount;
-(unsigned)currentNowPlayingInfoAlbumTrack;
-(unsigned)currentNowPlayingInfoAlbumTrackCount;
-(int)currentShuffleMode;
-(int)currentRepeatMode;
-(id)currentNowPlayingInfoArtwork;
-(bool)currentNowPlayingInfoArtworkExists;
-(bool)currentNowPlayingInfoTrackCountExists;
-(void)notifyExplicitControlOccurred;
-(int)repeatModeCache;
-(void)setRepeatModeCache:(int)arg1 ;
-(int)shuffleModeCache;
-(void)setShuffleModeCache:(int)arg1 ;
-(id)nowPlayingHandlerQueue;
-(double)currentPlaybackTime;
-(void)_itemPlaybackDidEnd:(id)arg1 ;
-(void)_canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
@end
