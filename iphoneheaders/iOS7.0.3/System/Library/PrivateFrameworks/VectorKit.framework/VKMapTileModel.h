/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKMapLayer.h>
#import <VectorKit/VKStylesheetObserver.h>

@class VKStylesheet, NSMutableSet, VKMapModel, NSSet;

@interface VKMapTileModel : VKModelObject <VKMapLayer, VKStylesheetObserver> {

	NSMutableSet* _tilesWillEnterScene;
	NSMutableSet* _tilesInScene;
	NSMutableSet* _tilesInScenePlusExitingTiles;
	NSMutableSet* _tilesWillExitScene;
	NSMutableSet* _tilesExitingScene;
	NSMutableSet* _previousTilesInScene;
	VKMapModel* _mapModel;
	unsigned char _minimumZ;
	unsigned char _maximumZ;

}

@property (assign,nonatomic) VKMapModel * mapModel;                    //@synthesize mapModel=_mapModel - In the implementation block
@property (nonatomic,readonly) NSSet * tilesInScene;                   //@synthesize tilesInScene=_tilesInScene - In the implementation block
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
+(BOOL)reloadOnStylesheetChange;
+(BOOL)reloadOnActiveTileGroupChange;
-(void)dealloc;
-(id)init;
-(void)reset;
-(unsigned)mapLayerPosition;
-(id)stylesheet;
-(void)setMapModel:(id)arg1 ;
-(void)didMoveToSupermodel;
-(void)stylesheetWillChange;
-(void)stylesheetDidChange;
-(void)activeTileGroupChanged;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(void)updateTilesInScene:(id)arg1 withContext:(id)arg2 categorize:(BOOL)arg3 ;
-(id)mapModel;
-(void)createCollections;
-(void)clearCollections;
-(void)createCollectionsIfNecessary;
-(void)removePersistingExitingTiles:(id)arg1 ;
-(void)willStartDrawingTiles:(id)arg1 ;
-(void)willStopDrawingTiles:(id)arg1 ;
-(id)tilesInScene;
@end
