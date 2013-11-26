/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate {

	void* _group;
	void* _store;
	NSString* _accountIdentifier;

}

@property (assign,nonatomic) void* group;                             //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) void* store;                             //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
-(id)queryWhereString;
-(void)ab_bindStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(void*)store;
-(void)setStore:(void*)arg1 ;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(void)setGroup:(void*)arg1 ;
-(void*)group;
-(id)accountIdentifier;
@end
