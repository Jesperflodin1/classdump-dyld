/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableSet;

@interface PLMomentListCluster : NSObject {

	unsigned _month;
	unsigned _year;
	unsigned _numberOfMoments;
	unsigned _numberOfAssets;
	NSMutableSet* __moments;

}

@property (nonatomic,readonly) unsigned month;                        //@synthesize month=_month - In the implementation block
@property (nonatomic,readonly) unsigned year;                         //@synthesize year=_year - In the implementation block
@property (nonatomic,readonly) unsigned numberOfMoments;              //@synthesize numberOfMoments=_numberOfMoments - In the implementation block
@property (nonatomic,readonly) unsigned numberOfAssets;               //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _moments;               //@synthesize _moments=__moments - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned)year;
-(unsigned)month;
-(id)initWithMonth:(unsigned)arg1 year:(unsigned)arg2 ;
-(void)addMoment:(id)arg1 ;
-(void)removeMoment:(id)arg1 ;
-(unsigned)peak;
-(unsigned)numberOfMoments;
-(unsigned)numberOfAssets;
-(id)_moments;
@end
