/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSSQLAdapter.h>

@class NSString;

@interface NSSQLiteAdapter : NSSQLAdapter {

	NSString* _dbpath;

}
-(BOOL)supportsCorrelatedSubqueries;
-(Class)statementClass;
-(id)typeStringForColumn:(id)arg1 ;
-(id)typeStringForSQLType:(unsigned)arg1 ;
-(id)initWithSQLCore:(id)arg1 ;
-(id)sqliteVersion;
-(id)pathnameForDatabase;
-(void)dealloc;
-(id)type;
-(id)createConnection;
@end
