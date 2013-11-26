/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AppStore.app/AppStore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUICategoryControllerDelegate.h>
#import <StoreKitUI/SKUIMetricsViewController.h>

@class SKUICategoryController, ASLaunchNotificationsController, NSString, SKUIStorePageViewController, NSURL;

@interface ASFeaturedViewController : SKUIViewController <SKUICategoryControllerDelegate, SKUIMetricsViewController> {

	SKUICategoryController* _categoryController;
	ASLaunchNotificationsController* _launchNotificationsController;
	NSString* _overrideTitle;
	SKUIStorePageViewController* _storePageViewController;
	NSURL* _url;

}
-(void)reloadDataWithDefaultURL;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id)activeMetricsController;
-(void)_reloadNavigationItem;
-(id)_categoryController;
-(void)categoryController:(id)arg1 didSelectCategory:(id)arg2 ;
-(void).cxx_destruct;
-(void)_finishLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)_storePageViewController;
-(void)setClientContext:(id)arg1 ;
@end
