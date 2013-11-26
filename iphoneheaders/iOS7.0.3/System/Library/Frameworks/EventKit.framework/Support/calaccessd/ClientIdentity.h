/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <calaccessd/calaccessd-Structs.h>
@class NSString;

@interface ClientIdentity : NSObject {

	NSString* _bundleIdentifier;
	NSString* _clientName;
	NSString* _codeSigningIdentity;
	int _pid;
	SCD_Struct_Cl2 _auditToken;

}

@property (nonatomic,readonly) SCD_Struct_Cl2 auditToken;                   //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                       //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) NSString * codeSigningIdentity;              //@synthesize codeSigningIdentity=_codeSigningIdentity - In the implementation block
@property (nonatomic,readonly) int pid;                                     //@synthesize pid=_pid - In the implementation block
-(id)codeSigningIdentity;
-(void)dealloc;
-(id)description;
-(id)bundleIdentifier;
-(SCD_Struct_Cl2)auditToken;
-(id)initWithAuditToken:(SCD_Struct_Cl2)arg1 ;
-(int)pid;
-(id)clientName;
@end
