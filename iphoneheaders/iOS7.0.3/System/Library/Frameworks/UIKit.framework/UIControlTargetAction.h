/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface UIControlTargetAction : NSObject {

	id _target;
	SEL _action;
	int _eventMask;
	BOOL _cancelled;

}

@property (assign,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
@end
