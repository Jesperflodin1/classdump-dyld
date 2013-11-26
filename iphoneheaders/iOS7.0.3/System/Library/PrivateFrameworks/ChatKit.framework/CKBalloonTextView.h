/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITextView.h>
#import <UIFoundation/NSLayoutManagerDelegate.h>

@class NSAttributedString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate> {

	BOOL _singleLine;
	NSAttributedString* _attributedText;
	float _capOffsetFromBoundsTop;
	float _lastLineBaselineOffsetFromBoundsTop;

}

@property (assign,nonatomic) float capOffsetFromBoundsTop;                           //@synthesize capOffsetFromBoundsTop=_capOffsetFromBoundsTop - In the implementation block
@property (assign,nonatomic) float lastLineBaselineOffsetFromBoundsTop;              //@synthesize lastLineBaselineOffsetFromBoundsTop=_lastLineBaselineOffsetFromBoundsTop - In the implementation block
@property (assign,getter=isSingleLine,nonatomic) BOOL singleLine;                    //@synthesize singleLine=_singleLine - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                      //@synthesize attributedText=_attributedText - In the implementation block
-(void)didMoveToWindow;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
-(id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(BOOL)isSingleLine;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(BOOL*)arg3 ;
-(float)capOffsetFromBoundsTop;
-(void)setCapOffsetFromBoundsTop:(float)arg1 ;
-(float)lastLineBaselineOffsetFromBoundsTop;
-(void)setLastLineBaselineOffsetFromBoundsTop:(float)arg1 ;
-(void)setSingleLine:(BOOL)arg1 ;
@end
