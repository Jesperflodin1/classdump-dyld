/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIKeyboardCandidateGridCollectionViewControllerDelegate <UIKeyboardCandidateList>
@optional
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(BOOL)padInlineFloatingViewIsExpanded:(id)arg1;
-(void)padInlineFloatingViewExpand:(id)arg1;
-(id)headerViewForCandidateSet:(id)arg1;

@required
-(unsigned)gridCollectionViewNumberOfColumns:(id)arg1;
-(unsigned)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
@end
