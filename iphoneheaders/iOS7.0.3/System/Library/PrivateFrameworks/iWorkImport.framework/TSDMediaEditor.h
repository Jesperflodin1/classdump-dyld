/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSDStyledDrawableEditor.h>
#import <iWorkImport/TSDInfoImporterDelegate.h>

@class NSSet, TSDMediaInfo;

@interface TSDMediaEditor : TSDStyledDrawableEditor <TSDInfoImporterDelegate>

@property (nonatomic,readonly) NSSet * mediaInfos; 
@property (nonatomic,readonly) TSDMediaInfo * firstMediaInfo; 
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)selectedObjectsSupportingOpacity;
-(void)takePatternFromStroke:(id)arg1 withDefaultStroke:(id)arg2 ;
-(void)endChangingStrokeWidth:(id)arg1 ;
-(id)strokeSwatches;
-(id)strokeColorPickerTitle;
-(void)resetSelectionToInsertedSize:(id)arg1 ;
-(void)resetSelectionToNaturalDataSize:(id)arg1 ;
-(void)makeCurrentSelectionPlaceholder:(id)arg1 ;
-(void)replaceSelectedMediaWithFileAtURL:(id)arg1 ;
-(void)showMediaReplaceUI:(id)arg1 ;
-(void)p_resetSelectionToInsertedSize:(int)arg1 ;
-(id)p_commandsToSwapConnectionsFromInfo:(id)arg1 infoMap:(id)arg2 ;
-(BOOL)p_allSelectedInfosArePlaceholders;
-(void)infoImporter:(id)arg1 needsMoviePlayabilityOnAllDevicesRequirementUsingBlock:(/*^block*/ id)arg2 ;
-(id)mediaInfos;
-(id)firstMediaInfo;
-(id)stroke;
-(void)setStrokeColor:(id)arg1 ;
-(void)setStroke:(id)arg1 ;
@end
