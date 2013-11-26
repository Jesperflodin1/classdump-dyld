/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol GKBubbleFlowableViewController <NSObject>
@optional
-(void)viewDidDisappearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
-(id)bubbleAnimatorForTransitionFromViewController:(id)arg1;
-(id)bubbleAnimatorForTransitionToViewController:(id)arg1;
-(id)bubbleAnimatorForRotation;
-(CGRect*)finalScreenFrameInViewCoordinatesForBubbleOfType:(int)arg1;
-(id)containerViewForBubbleOfType:(int)arg1;
-(id)bubblesUsedForAnyTransition;
-(void)configureControlForBubble:(id)arg1;
-(double)bubbleFlowAnimateOutDuration;
-(double)bubbleFlowAnimateInDuration;
-(double)bubbleFlowSubviewFadeOutDuration;
-(double)bubbleFlowSubviewFadeOutDelay;
-(double)bubbleFlowSubviewFadeInDuration;
-(double)bubbleFlowSubviewFadeInDelay;
-(void)viewWillAppearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
-(void)viewDidAppearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
-(void)viewWillDisappearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
-(id)viewsToAnimateInWhileAppearingWithBubbleFlow;
-(id)viewsToAnimateOutWhileDisappearingWithBubbleFlow;
-(void)willAnimateAppearingWithBubbleFlow;
-(void)willAnimateDisappearingWithBubbleFlow;
-(void)willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3;
-(void)willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3;
-(BOOL)updateBubbleTextImmediatelyForTransitionFromViewController:(id)arg1;
-(BOOL)readyToDisappearWithBubbleFlow;
-(void)delayDisappearingWithBubbleFlowUntil:(/*^block*/ id)arg1;
-(BOOL)readyToAppearWithBubbleFlow;
-(void)delayAppearingWithBubbleFlowUntil:(/*^block*/ id)arg1;
@end
