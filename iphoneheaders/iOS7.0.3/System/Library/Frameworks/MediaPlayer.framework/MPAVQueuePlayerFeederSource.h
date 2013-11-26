/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MPAVQueuePlayerFeederSource <NSObject>
@required
-(id)queuePlayerFeeder:(id)arg1 itemToFollowItem:(id)arg2;
-(void)queuePlayerFeeder:(id)arg1 willRemoveItem:(id)arg2;
-(BOOL)queuePlayerFeeder:(id)arg1 willInsertItem:(id)arg2;
-(void)queuePlayerFeederDidUpdateQueue:(id)arg1 queuedItems:(id)arg2 dequeuedItems:(id)arg3;
-(void)queuePlayerFeederFailedToQueueAnyItems:(id)arg1;
@end
