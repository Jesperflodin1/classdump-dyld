/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, WDDocument;

@interface WDRevisionAuthorTable : NSObject {

	NSMutableArray* mAuthors;
	WDDocument* mDocument;

}
-(void)dealloc;
-(id)initWithDocument:(id)arg1 ;
-(id)authors;
-(unsigned)authorCount;
-(id)authorAt:(unsigned)arg1 ;
-(unsigned)authorAddLookup:(id)arg1 ;
-(void)addAuthor:(id)arg1 ;
@end
