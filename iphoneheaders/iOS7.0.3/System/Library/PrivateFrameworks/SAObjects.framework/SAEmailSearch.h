/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString;

@interface SAEmailSearch : SADomainCommand

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSString * fromEmail; 
@property (nonatomic,copy) NSDate * startDate; 
@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * toEmail; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)groupIdentifier;
-(void)setSubject:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)subject;
-(id)startDate;
-(id)endDate;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)timeZoneId;
-(void)setTimeZoneId:(id)arg1 ;
-(id)fromEmail;
-(void)setFromEmail:(id)arg1 ;
-(id)toEmail;
-(void)setToEmail:(id)arg1 ;
@end
