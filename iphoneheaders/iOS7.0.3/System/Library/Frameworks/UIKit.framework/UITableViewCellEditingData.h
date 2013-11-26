/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UITableViewCellDeleteConfirmationControl_Legacy, UIView;

@interface UITableViewCellEditingData : NSObject {

	UITableViewCell* _cell;
	int _editingStyle;
	UITableViewCellEditControl* _editControl;
	UITableViewCellReorderControl* _reorderControl;
	UITableViewCellDeleteConfirmationControl_Legacy* _deleteConfirmationControl;
	UIView* _reorderSeparatorView;

}

@property (getter=isDataRequired,nonatomic,readonly) BOOL dataRequired; 
-(void)dealloc;
-(id)editControl:(BOOL)arg1 ;
-(id)deleteConfirmationControl:(BOOL)arg1 ;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(int)arg2 ;
-(id)reorderControl:(BOOL)arg1 ;
-(id)reorderSeparatorView:(BOOL)arg1 ;
-(BOOL)isDataRequired;
@end
