/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <FTServices/FTMessageQueueDelegate.h>

@class NSNumber, FTMessageQueue, NSString, IMTimer, IDSBaseMessage, NSArray;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {

	unsigned _retries;
	NSNumber* _protocolVersion;
	FTMessageQueue* _queue;
	NSString* _userAgent;
	unsigned _maxConcurrentMessages;
	BOOL _retryInAirplaneMode;
	IMTimer* _timer;

}

@property (copy) NSString * userAgent;                             //@synthesize userAgent=_userAgent - In the implementation block
@property (copy) NSNumber * protocolVersion;                       //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (readonly) BOOL hasQueuedItems; 
@property (readonly) BOOL busy; 
@property (assign) BOOL retryInAirplaneMode;                       //@synthesize retryInAirplaneMode=_retryInAirplaneMode - In the implementation block
@property (readonly) IDSBaseMessage * currentMessage; 
@property (readonly) NSArray * queuedMessages; 
@property (readonly) NSArray * allMessages; 
@property (readonly) int maxMessageSize; 
@property (assign) unsigned maxConcurrentMessages;                 //@synthesize maxConcurrentMessages=_maxConcurrentMessages - In the implementation block
+(id)alloc;
+(id)_errorForTDMessageDeliveryStatus:(int)arg1 userInfo:(id)arg2 ;
+(Class)HTTPMessageDeliveryClass;
+(Class)APNSMessageDeliveryClass;
-(id)protocolVersion;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)_queue;
-(void)networkStateChanged;
-(void)_clearRetryTimer;
-(BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2 ;
-(void)_retryTimerHit:(id)arg1 ;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(int)arg4 ;
-(id)allMessages;
-(BOOL)hasQueuedItems;
-(void)_setRetryTimer:(double)arg1 ;
-(void)_signMessage:(id)arg1 useDataSignatures:(BOOL)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5 ;
-(unsigned)maxConcurrentMessages;
-(BOOL)retryInAirplaneMode;
-(void)setUserAgent:(id)arg1 ;
-(BOOL)sendMessage:(id)arg1 ;
-(void)setProtocolVersion:(id)arg1 ;
-(void)setRetryInAirplaneMode:(BOOL)arg1 ;
-(id)currentMessage;
-(id)queuedMessages;
-(void)cancelMessage:(id)arg1 ;
-(int)maxMessageSize;
-(void)setMaxConcurrentMessages:(unsigned)arg1 ;
-(BOOL)busy;
-(id)userAgent;
@end
