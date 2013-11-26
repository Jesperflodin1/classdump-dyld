/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIImageView.h>

@protocol SBDarkeningImageViewDelegate;
@class UIImage, ;

@interface SBDarkeningImageView : UIImageView {

	UIImage* _baseImage;
	float _brightness;
	<SBDarkeningImageViewDelegate>* _delegate;

}

@property (assign,nonatomic) <SBDarkeningImageViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float brightness; 
-(void)setImage:(id)arg1 brightness:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)image;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
@end
