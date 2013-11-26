/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class NSCache, NSMutableDictionary, NSObject;

@interface MPStoreCompletionOfferingController : NSObject <MCProfileConnectionObserver> {

	NSCache* _offeringCache;
	NSMutableDictionary* _lookupItemsByStoreLookupID;
	NSMutableDictionary* _lookupItemsByTokenID;
	unsigned _nextTokenID;
	NSObject<OS_dispatch_queue>* _queue;

}
+(void)_getIsCMCDisabled:(BOOL*)arg1 disabledReason:(id*)arg2 ;
+(BOOL)_isCmcEnabled;
+(id)storeOfferingController;
+(void)setWantsArtwork:(BOOL)arg1 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)_storeAccountsDidChangeNotification:(id)arg1 ;
-(void)_dumpCache;
-(id)_sanitizedQuery:(id)arg1 ;
-(id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)arg1 ;
-(void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned)arg1 ;
-(id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(/*^block*/ id)arg2 ;
-(void)_onQueueClearCache;
-(void)_onQueueRemoveLookupItem:(id)arg1 ;
-(void)_onQueueSetCachedCompletionOffering:(id)arg1 forStoreLookupID:(id)arg2 ;
-(void)_onQueueRemoveLookupItemsForStoreLookupID:(id)arg1 ;
-(void)_onQueuePostLookupCompletedForLookupItem:(id)arg1 offering:(id)arg2 error:(id)arg3 ;
-(id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)arg1 requestAlreadyIssued:(BOOL*)arg2 responseBlock:(/*^block*/ id)arg3 ;
-(void)_lookupCompletedWithResponse:(id)arg1 lookupItem:(id)arg2 error:(id)arg3 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)completionOfferingForAlbumItemsQuery:(id)arg1 ;
-(void)cancelCompletionOfferingLookup:(unsigned)arg1 ;
-(unsigned)startCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end
