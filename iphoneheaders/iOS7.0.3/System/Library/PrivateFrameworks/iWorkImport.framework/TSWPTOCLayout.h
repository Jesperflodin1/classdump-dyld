/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPShapeLayout.h>

@class TSWPTOCLayoutHint;

@interface TSWPTOCLayout : TSWPShapeLayout {

	TSWPTOCLayoutHint* _hint;
	unsigned _initialCharIndex;
	CGSize _maxSize;

}

@property (assign,nonatomic) CGSize maxSize;                                               //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,readonly) unsigned initialCharIndex;                                  //@synthesize initialCharIndex=_initialCharIndex - In the implementation block
@property (nonatomic,readonly) TSWPTOCLayoutHint * hint; 
@property (getter=isLastLayoutInTOC,nonatomic,readonly) BOOL lastLayoutInTOC; 
-(CGRect)boundsForStandardKnobs;
-(id)computeLayoutGeometry;
-(void)layoutSearchForString:(id)arg1 options:(unsigned)arg2 hitBlock:(/*^block*/ id)arg3 ;
-(id)childSearchTargets;
-(CGSize)adjustedInsets;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(float)widthForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 ;
-(float)gapForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 ;
-(float)positionForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 outWidth:(float*)arg3 outGap:(float*)arg4 ;
-(id)layoutMargins;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(float)maxAutoGrowHeightForTextLayout:(id)arg1 ;
-(unsigned)initialCharIndex;
-(id)initWithInfo:(id)arg1 initialCharIndex:(unsigned)arg2 maxSize:(CGSize)arg3 ;
-(BOOL)isLastLayoutInTOC;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(CGSize)maxSize;
-(void)setMaxSize:(CGSize)arg1 ;
-(id).cxx_construct;
-(unsigned)columnCount;
-(id)hint;
@end
