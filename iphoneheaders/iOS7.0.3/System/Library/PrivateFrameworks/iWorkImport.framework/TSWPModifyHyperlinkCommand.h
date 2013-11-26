/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextBaseCommand.h>

@class TSWPHyperlinkField, NSURL, NSString, TSWPChangeSession, TSWPStorage;

@interface TSWPModifyHyperlinkCommand : TSWPTextBaseCommand {

	TSWPHyperlinkField* _hyperlinkField;
	NSURL* _url;
	NSString* _displayText;
	TSWPStorageTransaction* _undoRedoTransaction;
	unsigned _hyperlinkUISessionID;
	TSWPChangeSession* _changeSession;
	NSString* _language;

}

@property (nonatomic,readonly) TSWPStorage * storage; 
+(NSRange)p_modifyHyperlink:(id)arg1 displayText:(id)arg2 changeSession:(id)arg3 language:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(id)storage;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ModifyHyperlinkCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ModifyHyperlinkCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(void)p_undoRedo;
-(id)initWithHyperlinkField:(id)arg1 displayText:(id)arg2 url:(id)arg3 hyperlinkUISession:(unsigned)arg4 changeSession:(id)arg5 language:(id)arg6 ;
-(void)p_swapURLs;
-(id)initWithHyperlinkField:(id)arg1 displayText:(id)arg2 url:(id)arg3 hyperlinkUISession:(unsigned)arg4 language:(id)arg5 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(BOOL)process;
@end
