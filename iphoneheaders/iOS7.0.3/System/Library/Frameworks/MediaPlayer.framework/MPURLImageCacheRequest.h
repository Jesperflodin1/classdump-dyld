/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MPImageCacheRequest.h>

@class NSURL;

@interface MPURLImageCacheRequest : MPImageCacheRequest {

	NSURL* _url;
	BOOL _usePlaceholderAsFallback;

}

@property (assign,nonatomic) BOOL usePlaceholderAsFallback;              //@synthesize usePlaceholderAsFallback=_usePlaceholderAsFallback - In the implementation block
-(void)setUsePlaceholderAsFallback:(BOOL)arg1 ;
-(id)placeholderImage;
-(id)uniqueKey;
-(id)copyRawImageReturningError:(id*)arg1 ;
-(BOOL)usePlaceholderAsFallback;
-(id)initWithURL:(id)arg1 ;
-(void).cxx_destruct;
@end
