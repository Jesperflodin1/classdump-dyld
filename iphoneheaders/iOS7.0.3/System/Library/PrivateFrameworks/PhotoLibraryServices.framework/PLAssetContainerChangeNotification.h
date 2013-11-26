/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {

	BOOL _titleDidChange;
	BOOL _keyAssetDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) <PLAssetContainer> * container; 
@property (nonatomic,readonly) NSObject<PLAlbumProtocol> * album; 
@property (nonatomic,readonly) BOOL titleDidChange; 
@property (nonatomic,readonly) BOOL keyAssetDidChange; 
+(id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)userInfo;
-(id)name;
-(id)container;
-(void)_calculateDiffs;
-(id)assetContainer;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(NSObject*)album;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(id)_contentRelationshipName;
@end
