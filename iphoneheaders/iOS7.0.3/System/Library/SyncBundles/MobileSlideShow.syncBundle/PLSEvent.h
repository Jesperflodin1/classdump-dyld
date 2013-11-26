/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSlideShow/PLSItem.h>

@class NSString;

@interface PLSEvent : PLSItem {

	NSString* _name;
	NSString* _parentUUID;
	NSString* _keyAssetUUID;

}

@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * parentUUID;                //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,retain) NSString * keyAssetUUID;              //@synthesize keyAssetUUID=_keyAssetUUID - In the implementation block
+(id)eventWithUUID:(id)arg1 ;
+(id)event;
-(id)keyAssetUUID;
-(id)_itemType;
-(void)setParentUUID:(id)arg1 ;
-(id)initWithHostPropertyList:(id)arg1 ;
-(id)mergeWithHostPropertyList:(id)arg1 ;
-(id)parentUUID;
-(id)initFromPropertyList:(id)arg1 ;
-(void)setKeyAssetUUID:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(BOOL)isEqualToEvent:(id)arg1 ;
@end
