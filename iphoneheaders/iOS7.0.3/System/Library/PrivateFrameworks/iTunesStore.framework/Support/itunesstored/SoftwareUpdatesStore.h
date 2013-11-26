/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <itunesstored/itunesstored-Structs.h>
@class NSObject, ISOperationQueue;

@interface SoftwareUpdatesStore : NSObject {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	ISOperationQueue* _operationQueue;

}
+(void)observeXPCServer:(id)arg1 ;
+(void)clearExpiredHistoryWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)hidePendingUpdatesBadgeWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)migrateWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)reloadWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)removeAllUpdatesBulletinsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)showPendingUpdatesBadgeWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)defaultStore;
-(void)removeAllBulletins;
-(void)noteUpdatesStateChanged;
-(id)_operationQueue;
-(void)_performBackgroundCheckForJob:(id)arg1 jobName:(id)arg2 ;
-(void)_resetBackgroundTaskJobs;
-(id)_nextCheckDateWithInterval:(double)arg1 ;
-(void)_setCheckInterval:(double)arg1 forDefaultsKey:(CFStringRef)arg2 ;
-(void)postBulletinForInstalledUpdates;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(/*^block*/ id)arg3 ;
-(void)showPendingUpdatesBadge;
-(BOOL)_shouldPerformAutomaticUpdates;
-(void)_setSoftwareUpdateCheckInterval:(double)arg1 ;
-(void)_setSoftwareUpdateCheckIntervalCellular:(double)arg1 ;
-(void)_disableForcedBadge;
-(void)_reloadApplicationBadge;
-(void)_sendChangeNotification;
-(id)_updateTitleForStoreItemData:(id)arg1 ;
-(void)_reloadWithRequestStyle:(int)arg1 client:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_performBackgroundSoftwareUpdateCheckIfNeeded;
-(void)hidePendingUpdatesBadge;
-(double)_checkIntervalWithDefault:(double)arg1 bagKeys:(id)arg2 defaultsKey:(CFStringRef)arg3 ;
-(void)_setBadgeWithCount:(int)arg1 ;
-(void)_setLastSoftwareUpdateCheckDate:(id)arg1 ;
-(void)_performBackgroundSoftwareUpdateCheck;
-(void)reloadWithRequestStyle:(int)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(double)_backgroundSoftwareUpdateCheckInterval;
-(double)_backgroundSoftwareUpdateCheckIntervalCellular;
-(BOOL)_shouldShowApplicationBadge;
-(void)_mergeAvailableUpdates:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_addUpdateCheckJobWithDate:(id)arg1 identifier:(id)arg2 allowsCellular:(BOOL)arg3 ;
-(void)_addOperation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)_dispatchAsync:(/*^block*/ id)arg1 ;
@end
