/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MailboxContentTableEntry <NSObject>
@required
-(void)setHighlightedTerms:(id)arg1;
-(void)setShowsBestMatchedAddress:(BOOL)arg1;
-(void)setMessage:(id)arg1 threaded:(BOOL)arg2;
-(void)setThreadMessageCount:(unsigned)arg1 hasUnreadMessages:(BOOL)arg2 hasAttachments:(BOOL)arg3 hasFlagged:(BOOL)arg4 hasVIP:(BOOL)arg5 receivedInterval:(double)arg6;
-(void)updateFlagsFromMessage:(id)arg1;
-(void)setMailboxName:(id)arg1;
@end
