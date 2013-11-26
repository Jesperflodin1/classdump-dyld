/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MPAudioDeviceControllerDelegate.h>

@protocol PLAirPlayControllerDelegate;
@class , MPAudioDeviceController, NSMutableArray;

@interface PLAirPlayController : NSObject <MPAudioDeviceControllerDelegate> {

	<PLAirPlayControllerDelegate>* _delegate;
	MPAudioDeviceController* _audioDeviceController;
	NSMutableArray* _pickableRoutes;
	BOOL _routeDiscoverySuspended;
	BOOL _routeDiscoveryEnabled;

}

@property (assign,nonatomic) <PLAirPlayControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)routeIDForAirplayRoute:(id)arg1 ;
+(id)routeNameForAirplayRoute:(id)arg1 ;
-(void)audioDeviceControllerAudioRoutesChanged:(id)arg1 ;
-(void)audioDeviceControllerMediaServerDied:(id)arg1 ;
-(void)setRouteDiscoveryEnabled:(BOOL)arg1 ;
-(unsigned)indexOfPickedRoute;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id)pickableAirplayRoutes;
-(id)pickedAirplayRoute;
-(void)userPickedRoute:(id)arg1 ;
-(BOOL)isDeviceCurrentlyMirroring;
-(id)systemPickedRouteSupportingAirPlayOrMirroring;
-(BOOL)airplayRouteIsAvailable;
@end
