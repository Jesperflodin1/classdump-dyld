/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libacmobileshim.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libacmobileshim.dylib/ACMTicketVerificationRequest.h>

@class NSString, NSNumber;

@interface ACMTicketVerificationRequestImpl : NSObject <ACMTicketVerificationRequest> {

	NSString* _userName;
	NSString* _realm;
	NSString* _token;
	NSString* _appIDKey;
	NSNumber* _appID;
	NSNumber* _serverResponseTimeout;
	id _userInfo;

}

@property (retain) NSString * userName;                           //@synthesize userName=_userName - In the implementation block
@property (retain) NSString * realm;                              //@synthesize realm=_realm - In the implementation block
@property (retain) NSString * token;                              //@synthesize token=_token - In the implementation block
@property (retain) NSNumber * appID;                              //@synthesize appID=_appID - In the implementation block
@property (retain) NSString * appIDKey;                           //@synthesize appIDKey=_appIDKey - In the implementation block
@property (retain) NSNumber * serverResponseTimeout;              //@synthesize serverResponseTimeout=_serverResponseTimeout - In the implementation block
@property (retain) id userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
-(id)userName;
-(id)realm;
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(void)setAppID:(id)arg1 ;
-(void)setRealm:(id)arg1 ;
-(void)setUserName:(id)arg1 ;
-(id)token;
-(void)setToken:(id)arg1 ;
-(void)setAppIDKey:(id)arg1 ;
-(id)appID;
-(id)appIDKey;
-(id)serverResponseTimeout;
-(void)setServerResponseTimeout:(id)arg1 ;
@end
