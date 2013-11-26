/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (nonatomic,retain) NSString * personID; 
+(id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(BOOL)arg3 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)keyPathsForValuesAffectingPersonID;
-(BOOL)shouldDeleteWhenEmpty;
-(id)personID;
-(void)addAssetOrderedByDataTaken:(id)arg1 ;
-(void)enforceImageLimitIfNecessary;
-(void)awakeFromInsert;
-(void)setPersonID:(id)arg1 ;
@end
