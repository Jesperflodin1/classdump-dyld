/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <StoreServices/SSXPCCoding.h>

@class CLLocation, NSMutableDictionary, NSString;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {

	CLLocation* _location;
	int _localizationStyle;
	NSMutableDictionary* _requestParameters;

}

@property (nonatomic,copy) NSString * keyProfile; 
@property (assign,nonatomic) int localizationStyle;              //@synthesize localizationStyle=_localizationStyle - In the implementation block
@property (nonatomic,copy) CLLocation * location;                //@synthesize location=_location - In the implementation block
-(void)setKeyProfile:(id)arg1 ;
-(void)setLocalizationStyle:(int)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)location;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)copyRequestParameters;
-(void)setLocation:(id)arg1 ;
-(id)valueForRequestParameter:(id)arg1 ;
-(id)keyProfile;
-(int)localizationStyle;
@end
