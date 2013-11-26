/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SAGKDomainObject.h>

@class SAGKDirectAnswer, NSArray;

@interface SAGKOpenEndedDomainObject : SAGKDomainObject

@property (nonatomic,retain) SAGKDirectAnswer * directAnswer; 
@property (nonatomic,copy) NSArray * image; 
@property (nonatomic,copy) NSArray * linkedAnswerGroups; 
@property (nonatomic,copy) NSArray * structuredAnswers; 
+(id)openEndedDomainObject;
+(id)openEndedDomainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(id)arg1 ;
-(id)image;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)directAnswer;
-(void)setDirectAnswer:(id)arg1 ;
-(id)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(id)arg1 ;
-(id)structuredAnswers;
-(void)setStructuredAnswers:(id)arg1 ;
@end
