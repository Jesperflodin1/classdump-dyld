/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UITargetedProxy.h>
#import <UIKit/_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface.h>

@class _UIViewAnimationAttributes;

@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {

	SEL _implicitAnimationSelector;
	_UIViewAnimationAttributes* _animationAttributes;

}
+(id)proxyDecodingAnimationsForTarget:(id)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2 ;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
@end
