/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBAppSwitcherPageContentView.h>

@protocol OS_dispatch_queue;
@class SBApplication, UIView, SBWallpaperEffectView, SBSnapshotImageInfo, UIImageView, SBFakeStatusBarViewCache, SBFakeStatusBarView, NSString, NSObject;

@interface SBAppSliderSnapshotView : UIView <SBAppSwitcherPageContentView> {

	SBApplication* _application;
	UIView* _containerView;
	SBWallpaperEffectView* _wallpaperEffectView;
	SBSnapshotImageInfo* _snapshotImageInfo;
	UIImageView* _snapshotImage;
	CGSize _imageSize;
	SBFakeStatusBarViewCache* _statusBarCache;
	SBFakeStatusBarView* _statusBar;
	NSString* _statusBarCacheKey;
	BOOL _isVisible;
	BOOL _invalidated;
	BOOL _needsZoomFilter;
	BOOL _loadedImage;
	NSObject<OS_dispatch_queue>* _snapshotQueue;
	int _orientation;

}

@property (assign,nonatomic) int orientation;                                      //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) SBApplication * application;                          //@synthesize application=_application - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                     //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,retain) SBSnapshotImageInfo * snapshotImageInfo;              //@synthesize snapshotImageInfo=_snapshotImageInfo - In the implementation block
+(id)appSliderSnapshotViewForApplication:(id)arg1 orientation:(int)arg2 loadAsync:(BOOL)arg3 withQueue:(id)arg4 statusBarCache:(id)arg5 ;
+(id)_fallbackDefaultBackgroundColor;
-(void)setApplication:(id)arg1 ;
-(void)_viewPresenting:(id)arg1 ;
-(void)_viewDismissing:(id)arg1 ;
-(void)prepareToBecomeVisibleIfNecessary;
-(void)respondToBecomingInvisibleIfNecessary;
-(void)setOrientation:(int)arg1 orientationBehavior:(int)arg2 ;
-(void)_layoutStatusBar;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(id)initWithApplication:(id)arg1 orientation:(int)arg2 async:(BOOL)arg3 withQueue:(id)arg4 statusBarCache:(id)arg5 ;
-(int)_containerOrientation;
-(id)snapshotImageInfo;
-(id)_statusBarCacheKeyForStyleRequest:(id)arg1 ;
-(void)_updateStatusbarTranslucency;
-(CGRect)_snapshotFrame;
-(void)_layoutContainer;
-(CGAffineTransform)_rotationTransformForOrientation;
-(void)_loadSnapshotAsync;
-(void)_loadSnapshotSync;
-(id)_snapshotInfos;
-(id)_cachedImageForImageInfos:(id)arg1 foundInfo:(out id*)arg2 ;
-(id)_snapshotInfoForSnapshotFromInfos:(id)arg1 ;
-(id)_snapshotImageForImageInfo:(id)arg1 ;
-(id)_snapshotInfoForDefaultPNG;
-(void)setSnapshotImageInfo:(id)arg1 ;
-(void)_updateTranslucency;
-(void)_loadImageAsyncFromSnapshotInfo:(id)arg1 ;
-(id)_snapshotName;
-(id)_cachedSnapshotForSnapshotInfos:(id)arg1 foundInfo:(out id*)arg2 ;
-(BOOL)_queue_keepGoing;
-(CGImageRef)_queue_createDecodedImageIfPossible:(CGImageRef)arg1 ;
-(void)_snapshotImageLoaded:(CGImageRef)arg1 withInfo:(id)arg2 ;
-(CGImageRef)_cgImageForSnapshotInfo:(id)arg1 ;
-(id)_imageAtPath:(id)arg1 preferredScale:(float)arg2 orientation:(out int*)arg3 ;
-(id)_defaultImageforImageInfo:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidate;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(id)_snapshotImage;
-(id)application;
@end
