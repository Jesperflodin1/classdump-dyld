/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableSet, NSLock;

@interface SBTransactionManager : NSObject {

	NSMutableSet* _openTransactions;
	NSMutableSet* _keepAliveTransactions;
	BOOL _keepAliveClearable;
	NSLock* _lock;

}
+(id)sharedInstance;
-(void)setKeepAliveClearable:(BOOL)arg1 ;
-(BOOL)isKeepAliveEnabled;
-(void)beginTransaction:(id)arg1 ;
-(void)endTransaction:(id)arg1 ;
-(void)clearKeepAliveIfNecessary:(BOOL)arg1 ;
-(id)openTransactions;
-(void)beginTransaction:(id)arg1 keepAlive:(BOOL)arg2 ;
-(BOOL)hasOpenTransactionForName:(id)arg1 ;
-(void)_toggleKeepAliveStatus;
-(BOOL)_isKeepAliveEnabled:(id*)arg1 ;
-(void)_setKeepAlive:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
@end
