/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIButton.h>

@interface StarkPanModeButton : UIButton {

	BOOL _updatingImages;
	BOOL _active;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)_updateImages;
@end
