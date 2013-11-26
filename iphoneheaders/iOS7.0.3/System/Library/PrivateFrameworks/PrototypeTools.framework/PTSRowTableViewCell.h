/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>
#import <PrototypeTools/PTSRowObserver.h>

@protocol PTSRowTableViewCellDelegate;
@class PTSRow, ;

@interface PTSRowTableViewCell : UITableViewCell <PTSRowObserver> {

	PTSRow* _row;
	<PTSRowTableViewCellDelegate>* _delegate;

}

@property (nonatomic,retain) PTSRow * row;                                                 //@synthesize row=_row - In the implementation block
@property (assign,nonatomic,__weak) <PTSRowTableViewCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifierForRow:(id)arg1 ;
+(int)cellStyleForRow:(id)arg1 ;
+(float)cellHeightForRow:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)row;
-(id)delegate;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setRow:(id)arg1 ;
-(void)rowDidChangeValue:(id)arg1 ;
-(void)rowDidChangeTitle:(id)arg1 ;
-(void)rowDidChangeImage:(id)arg1 ;
-(void)updateCellCharacteristics;
-(void)updateDisplayedContent;
-(void)updateDisplayedValue;
-(void).cxx_destruct;
@end
