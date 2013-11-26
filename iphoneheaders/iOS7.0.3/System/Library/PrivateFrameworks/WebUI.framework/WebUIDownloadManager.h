/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSURLDownload, NSString;

@interface WebUIDownloadManager : NSObject {

	id _delegate;
	NSURLDownload* _download;
	NSString* _downloadPath;

}
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)downloadDidBegin:(id)arg1 ;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)_cleanUp;
-(void)_downloadDidFail:(id)arg1 ;
@end
