/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Nike.app/Nike
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <Nike/SWSyncControllerDelegate.h>
#import <SportsWorkout/SWSyncServiceConnectionDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, UILabel, STHistoryHeaderView, NSMutableArray, NSDictionary, UIActionSheet, UIView, SWSyncController, NSTimer;

@interface STHistoryController : UIViewController <SWSyncControllerDelegate, SWSyncServiceConnectionDelegate, UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _historyTableView;
	UILabel* _unsyncedWorkoutsHeaderLabel;
	UILabel* _syncedWorkoutsHeaderLabel;
	STHistoryHeaderView* _historyHeaderView;
	NSMutableArray* _noUnsyncedWorkoutsHeaders;
	NSMutableArray* _unsyncedWorkoutsHeaders;
	NSMutableArray* _noUnsyncedWorkoutsActionItems;
	NSMutableArray* _unsyncedWorkoutsActionItems;
	NSMutableArray* _syncedWorkoutSummaries;
	NSMutableArray* _unsyncedWorkoutSummaries;
	NSDictionary* _bestWorkoutTimes;
	NSDictionary* _workoutTotals;
	UIActionSheet* _confirmationView;
	UIView* _overlayView;
	SWSyncController* _syncController;
	unsigned _syncBackgroundTaskIdentifier;
	BOOL _isSyncing;
	BOOL _syncSucceeded;
	NSTimer* _overlayViewTimer;
	unsigned _isViewingSummary : 1;
	unsigned _isShowingBestsOrTotals : 1;

}
-(void)_visitNikeWebSite;
-(void)_syncAllWorkouts;
-(void)_updateWorkoutSummaries;
-(void)_dataStoreChangedNotification:(id)arg1 ;
-(id)_workoutArrayForSection:(int)arg1 ;
-(id)_headerArrayForSection:(int)arg1 ;
-(id)_actionItemArrayForSection:(int)arg1 ;
-(id)_localizedStringForGoalType:(id)arg1 ;
-(BOOL)_allWorkoutsAreSynced;
-(void)_workoutSummariesChanged;
-(void)_updateWorkoutAchievements;
-(void)_clearAllWorkouts;
-(void)_overlayViewTimerFired:(id)arg1 ;
-(void)_showOverlayWithMessage:(id)arg1 ;
-(void)_removeOverlayView;
-(void)showPersonalBests;
-(void)showWorkoutTotals;
-(void)syncControllerDidFinishSyncing:(id)arg1 success:(BOOL)arg2 loginURL:(id)arg3 ;
-(void)_layoutViews;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
@end
