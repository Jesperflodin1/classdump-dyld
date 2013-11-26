/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/MusicLibrary.syncBundle/MusicLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicLibrary/ML3ImportItem.h>

@class NSDictionary, NSNumber;

@interface ML3SyncImportItem : ML3ImportItem {

	NSDictionary* _currentStep;
	NSDictionary* _currentStepAVFormatInfo;
	NSDictionary* _currentStepItem;
	NSDictionary* _currentStepItemStats;
	NSDictionary* _currentStepPodcastInfo;
	NSDictionary* _currentStepRentalInfo;
	NSDictionary* _currentStepStoreInfo;
	NSDictionary* _currentStepVideoInfo;
	NSNumber* _syncId;
	NSNumber* _storeItemId;

}
-(id)currentTrackIsAudibleAudioBook;
-(id)currentTrackContentRating;
-(id)currentTrackRatingLevel;
-(id)currentTrackMediaType;
-(id)currentTrackDiscNumber;
-(id)description;
-(id)valueForProperty:(unsigned)arg1 ;
-(id)currentTrackChapterData;
-(BOOL)hasValueForProperty:(unsigned)arg1 ;
-(id)deduplicationPredicates;
-(id)initWithPropertyValues:(id)arg1 ;
-(void).cxx_destruct;
@end
