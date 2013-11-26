/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EBState.h>

@class ECColumnWidthConvertor, OABReaderState;

@interface EBReaderState : EBState {

	XlBinaryReader* mXlReader;
	XlSheetInfoTable* mXlSheetInfoTable;
	ECColumnWidthConvertor* mColumnWidthConvertor;
	unsigned mTotalCellsWithContentCount;
	unsigned mTotalCellsWithFormulaCount;
	XlEshObjectFactory* mXlEshObjectFactory;
	OABReaderState* mOAState;
	BOOL mImportCSV;

}

@property (assign,nonatomic) BOOL importCSV; 
-(void)dealloc;
-(id)columnWidthConvertor;
-(XlBinaryReader*)xlReader;
-(id)oaState;
-(void)reportWarning:(CPTaggedMessageStructure*)arg1 ;
-(void)incrementCellsWithContentCount;
-(void)incrementCellsWithFormulaCount;
-(id)initWithXlReader:(XlBinaryReader*)arg1 cancelDelegate:(id)arg2 tracing:(id)arg3 ;
-(void)pauseReading;
-(void)resumeReading;
-(void)readGlobalXlObjects;
-(XlSheetInfoTable*)xlSheetInfoTable;
-(unsigned)cellsWithContentCount;
-(BOOL)importCSV;
-(void)setImportCSV:(BOOL)arg1 ;
@end
