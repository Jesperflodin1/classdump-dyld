/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <UIKit/UIActivityItemSource.h>

@class AVItem, NSString, NSDate, NSURL;

@interface RCSavedRecording : NSManagedObject <UIActivityItemSource> {

	AVItem* _avItem;
	NSString* _path;

}

@property (nonatomic,@dynamic,copy) NSDate * date; 
@property (nonatomic,@dynamic,copy) NSString * path; 
@property (nonatomic,readonly) NSURL * url; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) int labelPreset; 
@property (nonatomic,@dynamic,copy) NSString * customLabel; 
@property (assign,nonatomic) long long iTunesPersistentID; 
@property (assign,getter=isSynced,nonatomic) BOOL synced; 
@property (assign,getter=isPendingRestore,nonatomic,@dynamic) BOOL pendingRestore; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * detailLabel; 
@property (nonatomic,readonly) AVItem * avItem; 
@property (assign,getter=isBeingMade,nonatomic,@dynamic) BOOL beingMade; 
+(id)localizedStringForRecordingLabel:(int)arg1 ;
-(id)detailLabel;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)path;
-(id)label;
-(void)setPath:(id)arg1 ;
-(id)url;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)avItem;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
-(void)willSave;
-(BOOL)isBeingMade;
-(void)setLabelPreset:(int)arg1 ;
-(long long)iTunesPersistentID;
-(void)setITunesPersistentID:(long long)arg1 ;
-(int)labelPreset;
-(id)_activityURLCreateIfNecessary:(BOOL)arg1 ;
-(BOOL)isPendingRestore;
-(void)setPendingRestore:(BOOL)arg1 ;
-(BOOL)isSynced;
-(void)setSynced:(BOOL)arg1 ;
-(void)setBeingMade:(BOOL)arg1 ;
-(void).cxx_destruct;
@end
