/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIClientContext, SKUIDeveloperInfo, UIView, SKUIProductInformationView, NSMutableArray;

@interface SKUIDeveloperInfoView : UIView {

	SKUIClientContext* _clientContext;
	SKUIDeveloperInfo* _developerInfo;
	UIView* _infoSeparatorView;
	SKUIProductInformationView* _infoView;
	NSMutableArray* _lineViews;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUIDeveloperInfo * developerInfo;              //@synthesize developerInfo=_developerInfo - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)clientContext;
-(id)initWithDeveloperInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)developerInfo;
-(void).cxx_destruct;
@end
