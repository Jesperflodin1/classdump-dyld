/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicUI/MusicTableViewController.h>
#import <MusicUI/MPUCompletionQueryDataSourceDelegate.h>
#import <MusicUI/MPUCompletionFooterViewDelegate.h>

@class MPImageCache, NSOperationQueue, MPUCompletionQueryDataSource;

@interface MusicAlbumsDetailViewController : MusicTableViewController <MPUCompletionQueryDataSourceDelegate, MPUCompletionFooterViewDelegate> {

	MPImageCache* _imageCache;
	BOOL _hasEverReceivedWillAppear;
	BOOL _useDownloadAllArtistCellConfig;
	NSOperationQueue* _downloadabilityOperationQueue;
	BOOL _isTransitioning;
	int _shuffleActionRow;
	int _downloadAllActionRow;
	BOOL _isDownloading;
	float _maximumDurationWidth;
	int _downloadableSongCount;

}

@property (nonatomic,readonly) float maximumDurationWidth;                                       //@synthesize maximumDurationWidth=_maximumDurationWidth - In the implementation block
@property (nonatomic,readonly) MPUCompletionQueryDataSource * completionDataSource; 
@property (nonatomic,readonly) int downloadableSongCount;                                        //@synthesize downloadableSongCount=_downloadableSongCount - In the implementation block
@property (nonatomic,readonly) BOOL isDownloading;                                               //@synthesize isDownloading=_isDownloading - In the implementation block
-(BOOL)isDownloading;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)completionDataSource;
-(float)maximumDurationWidth;
-(void)_applyCloudDownloadStateForHeaderView:(id)arg1 withAlbum:(id)arg2 ;
-(int)numberOfPrefixActionRowsInTableView:(id)arg1 ;
-(void)_calculateActionRowIndices;
-(void)_updateDownloadabilityState;
-(Class)tableView:(id)arg1 prefixActionCellConfigurationAtIndex:(int)arg2 ;
-(void)_downloadAllButtonAction:(id)arg1 ;
-(int)downloadableSongCount;
-(id)_createTableView;
-(void)_MPHAlbumsDetailViewController_defaultsDidChangeNotification:(id)arg1 ;
-(void)_MPHAlbumsDetailViewController_canShowCloudDownloadButtonsDidChangeNotification:(id)arg1 ;
-(void)_updateVisibleHeadersCloudDownloadStates;
-(void)_updateTableViewMinimumHeightAdditions;
-(void)_updateVisibleHeadersCloudRightInset;
-(int)_footerStyleForSection:(int)arg1 ;
-(void)_configureFooterView:(id)arg1 forSection:(int)arg2 offer:(id)arg3 ;
-(void)completionQueryDataSource:(id)arg1 didLoadOffer:(id)arg2 forSectionAtIndex:(int)arg3 ;
-(void)completionQueryDataSource:(id)arg1 didRemoveOfferForSectionAtIndex:(int)arg2 ;
-(void)completionQueryDataSource:(id)arg1 didUpdateOffer:(id)arg2 forSectionAtIndex:(int)arg3 ;
-(void)completionFooterView:(id)arg1 showItemsInOffering:(id)arg2 ;
-(void)completionFooterView:(id)arg1 purchaseCollectionFromOffering:(id)arg2 ;
-(void)_updateTitle;
-(id)initWithDataSource:(id)arg1 ;
-(void).cxx_destruct;
@end
