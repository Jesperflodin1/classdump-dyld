/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SiriUISnippetPlugin;
@class NSBundle, ;

@interface SVSSnippetPluginBundle : NSObject {

	NSBundle* _bundle;
	<SiriUISnippetPlugin>* _snippetPlugin;

}

@property (nonatomic,retain) NSBundle * bundle;                                  //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) <SiriUISnippetPlugin> * snippetPlugin;              //@synthesize snippetPlugin=_snippetPlugin - In the implementation block
+(id)snippetPluginWithBundle:(id)arg1 ;
-(id)bundle;
-(void)setBundle:(id)arg1 ;
-(id)snippetPlugin;
-(void)setSnippetPlugin:(id)arg1 ;
-(void).cxx_destruct;
@end
