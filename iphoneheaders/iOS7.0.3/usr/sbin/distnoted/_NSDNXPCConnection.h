/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/distnoted
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <distnoted/_NSDNXPCObject.h>

@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSString, NSMutableArray;

@interface _NSDNXPCConnection : NSObject <_NSDNXPCObject> {

	NSObject<OS_xpc_object>* _conn;
	NSObject<OS_xpc_object>* _sconn;
	int _lock;
	NSObject<OS_dispatch_queue>* _dq;
	NSObject<OS_dispatch_group>* _dgroup;
	NSString* _serviceName;
	/*^block*/ id _handleMessage;
	long long _mseqno;
	NSMutableArray* _invalidHandlers;
	NSMutableArray* _termImminentHandlers;
	int _started;
	int _invalid;
	int _flavor;

}

@property (@dynamic,readonly) NSString * serviceName; 
@property (nonatomic,@dynamic,readonly) NSObject<OS_xpc_object> * XPCConnection; 
@property (@dynamic,copy) id handleMessage; 
-(id)XPCConnection;
-(void)__invalidate;
-(void)addInvalidationHandler:(/*^block*/ id)arg1 ;
-(id)initWithPeerConnection:(id)arg1 ;
-(void)addTerminationImminentHandler:(/*^block*/ id)arg1 ;
-(void)setHandleMessage:(/*^block*/ id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 type:(int)arg2 ;
-(id)initWithServiceName:(id)arg1 privileged:(BOOL)arg2 ;
-(id)initWithReceivedConnection:(id)arg1 ;
-(/*^block*/ id)handleMessage;
-(void)__terminationImminent;
-(void)sendMessage:(id)arg1 waitForAck:(BOOL)arg2 ;
-(id)dispatchQueue;
-(id)serviceName;
-(void)dealloc;
-(void)invalidate;
-(void)start;
-(void)setDispatchQueue:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
@end
