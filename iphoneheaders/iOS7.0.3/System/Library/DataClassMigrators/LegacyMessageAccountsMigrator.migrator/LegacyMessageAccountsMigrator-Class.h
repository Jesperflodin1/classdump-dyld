/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:31:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/LegacyMessageAccountsMigrator.migrator/LegacyMessageAccountsMigrator
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataMigration/DataClassMigrator.h>

@class ACAccountStore, NSArray;

@interface LegacyMessageAccountsMigrator : DataClassMigrator {

	ACAccountStore* _accountStore;
	NSArray* _legacyMessageAccounts;
	unsigned _numberOfAccountsMigrated;

}
+(id)_legacyAccountsPlistPath;
-(id)initWithPath:(id)arg1 accountStore:(id)arg2 ;
-(BOOL)specifyDefaultSendingAccountIfNotSet;
-(BOOL)migrateLegacyAccounts;
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
-(void)dealloc;
-(id)init;
@end
