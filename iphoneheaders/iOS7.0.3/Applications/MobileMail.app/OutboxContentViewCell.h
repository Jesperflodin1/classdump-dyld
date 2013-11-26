/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MailboxContentViewCell.h>

@class UIActivityIndicatorView, UIButton;

@interface OutboxContentViewCell : MailboxContentViewCell {

	UIActivityIndicatorView* _activityIndicator;
	UIButton* _errorButton;
	unsigned _inDelivery : 1;

}
+(float)marginWidthEditing:(BOOL)arg1 ;
+(float)contentLeftInsetEditing:(BOOL)arg1 ;
+(id)_exclamationImage;
-(void)updateFlagsFromMessage:(id)arg1 ;
-(void)layoutStatusIndicatorViews;
-(void)_errorButtonPressed:(id)arg1 ;
-(void)dealloc;
@end
