/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHScatterElementBuilder.h>

@interface TSCHLineElementBuilder : TSCHScatterElementBuilder
-(void)p_addKnobsForPoint:(CGPoint)arg1 strokedUnitSymbolRect:(CGRect)arg2 toKnobSet:(id)arg3 symbolsShowing:(BOOL)arg4 ;
-(CGPoint)labelPointForPosition:(unsigned)arg1 rect:(CGRect)arg2 stringSize:(CGSize)arg3 symbolType:(int)arg4 ;
-(BOOL)needsSeparateHitTestingPaths;
@end
