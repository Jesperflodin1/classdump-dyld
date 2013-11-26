/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/DetailViewController.h>
#import <MobileMail/LoadRequestManagerDelegate.h>
#import <MobileMail/StackDataSource.h>
#import <MobileMail/StackDelegate.h>
#import <MobileMail/MFMessageViewingContextDelegate.h>

@class NSArray, UIView, UIBarButtonItem, StackController, LoadRequestManager, NSMutableDictionary, MessageViewController;

@interface MailDetailViewController : DetailViewController <LoadRequestManagerDelegate, StackDataSource, StackDelegate, MFMessageViewingContextDelegate> {

	NSArray* _selectionToolbarItems;
	NSArray* _currentMessageTransferToolbarItems;
	NSArray* _singleMessageTransferToolbarItems;
	NSArray* _multiMessageTransferToolbarItems;
	UIView* _currentMessageSnapshotView;
	UIView* _messageSuperview;
	UIBarButtonItem* _toolbarTransferCancelButton;
	unsigned _toolbarState;
	unsigned _lastSelectionToolbarState;
	StackController* _stackController;
	LoadRequestManager* _loadRequestManager;
	NSMutableDictionary* _messageViews;
	BOOL _shouldScrollCurrentMessageToTop;
	BOOL _shouldResnapshotMessageForStack;
	BOOL _useStackViewForTransfer;
	BOOL _usingLandscapeToolbarItems;

}

@property (nonatomic,retain) MessageViewController * messageViewController; 
@property (assign,nonatomic) unsigned toolbarState;                                      //@synthesize toolbarState=_toolbarState - In the implementation block
-(void)setMessageViewController:(id)arg1 ;
-(id)messageViewController;
-(id)mailDetailViewController;
-(void)animateMessageToPoint:(CGPoint)arg1 inView:(id)arg2 didFinishDelegate:(id)arg3 selector:(SEL)arg4 context:(id)arg5 ;
-(void)suspendLoadManager;
-(void)rescheduleLoadManager;
-(void)becomePreparedForTransferOfMessages:(id)arg1 options:(int)arg2 animated:(BOOL)arg3 ;
-(void)resignPreparedForTransferOfMessages:(BOOL)arg1 ;
-(void)showTransferNavigationController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)hideTransferNavigationControllerFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeStackedViews:(BOOL)arg1 ;
-(void)fadeBackInAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)setToolbarState:(unsigned)arg1 animated:(BOOL)arg2 ;
-(id)snapshotOfCurrentMessageWithType:(int)arg1 snapshotInsets:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)edgeInsetsForToolbar;
-(void)displayStackedViewsForMessages:(id)arg1 options:(int)arg2 animated:(BOOL)arg3 ;
-(id)stackControllerCreateIfNeeded:(BOOL)arg1 ;
-(id)_itemsToStackFromMessages:(id)arg1 options:(int)arg2 withStackController:(id)arg3 ;
-(id)keyForItem:(id)arg1 ;
-(id)loadRequestManager;
-(void)takeSnapshotOfCurrentMessage;
-(void)removeSnapshotOfCurrentMessage;
-(id)defaultViewForStackController:(id)arg1 ;
-(void)updateSnapshotOfCurrentMessage;
-(id)_toolbarFixedSpaceWithWidth:(float)arg1 ;
-(unsigned)toolbarState;
-(id)_toolbarFlexibleSpace;
-(id)_toolbarLabelWithTitle:(id)arg1 ;
-(id)_toolbarPortraitLeftFixedSpace;
-(id)_toolbarTransferCancelButton;
-(void)loadRequestManager:(id)arg1 loadItem:(id)arg2 userInfo:(id)arg3 ;
-(id)stackContainerViewForStackController:(id)arg1 ;
-(UIEdgeInsets)stackContainerViewEdgeInsetsForStackController:(id)arg1 ;
-(id)defaultItemForStackController:(id)arg1 ;
-(id)stackController:(id)arg1 viewForItem:(id)arg2 ;
-(BOOL)stackController:(id)arg1 isDataLoadedForItem:(id)arg2 inView:(id)arg3 ;
-(void)stackController:(id)arg1 loadDataForItem:(id)arg2 inView:(id)arg3 ;
-(void)stackControllerWillStartStackingViews:(id)arg1 ;
-(void)stackControllerDidStopStackingViews:(id)arg1 ;
-(void)stackController:(id)arg1 dataLoadTimedOutInView:(id)arg2 forItem:(id)arg3 ;
-(void)stackController:(id)arg1 willStackView:(id)arg2 forItem:(id)arg3 ;
-(void)stackController:(id)arg1 willDisplayView:(id)arg2 forItem:(id)arg3 ;
-(void)stackController:(id)arg1 willRemoveViewForItem:(id)arg2 ;
-(void)setToolbarState:(unsigned)arg1 ;
-(void)displayStackedViewsForMessages:(id)arg1 animated:(BOOL)arg2 ;
-(void)bufferedMessageViewDidCreateImage:(id)arg1 ;
-(id)_toolbarPopupButton;
-(void)messageViewingContextContentLoadCompleted:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)toolbarItems;
@end
