/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarIndicatorItemView.h>

@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView {

	BOOL _hideForAction;
	BOOL _registeredForNotifications;
	BOOL _inactive;

}
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(void)_triggerAction:(id)arg1 ;
-(float)_visibleAlpha;
@end
