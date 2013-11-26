/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIActivityItemsSource.h>

@class NSMutableDictionary, RadioStation;

@interface RUStationActivityItemsProvider : NSObject <UIActivityItemsSource> {

	NSMutableDictionary* _shareInformationByShareType;
	RadioStation* _station;

}

@property (nonatomic,readonly) RadioStation * station;              //@synthesize station=_station - In the implementation block
-(id)station;
-(id)initWithRadioStation:(id)arg1 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(BOOL)_hasLoadedSharingInformationForActivityType:(id)arg1 ;
-(void)_loadSharingInformationForActivityType:(id)arg1 ;
-(id)_shareInformationForActivityType:(id)arg1 ;
-(int)_shareTypeForActivityType:(id)arg1 ;
-(void).cxx_destruct;
@end
