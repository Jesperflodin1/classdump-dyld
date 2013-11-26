/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, MSAsset, NSArray, NSData;

@interface MSAssetCollection : NSObject <NSSecureCoding> {

	NSString* _assetCollectionID;
	NSString* _ctag;
	MSAsset* _masterAsset;
	NSArray* _derivedAssets;
	NSString* _fileName;
	BOOL _wasDeleted;
	long long _initialFailureDate;

}

@property (nonatomic,retain) NSString * assetCollectionID;              //@synthesize assetCollectionID=_assetCollectionID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                           //@synthesize ctag=_ctag - In the implementation block
@property (nonatomic,retain) MSAsset * masterAsset;                     //@synthesize masterAsset=_masterAsset - In the implementation block
@property (nonatomic,readonly) NSData * masterAssetHash; 
@property (nonatomic,retain) NSArray * derivedAssets; 
@property (nonatomic,retain) NSString * fileName;                       //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                           //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (assign,nonatomic) long long initialFailureDate;              //@synthesize initialFailureDate=_initialFailureDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3 ;
+(id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)assetCollectionID;
-(id)masterAsset;
-(id)derivedAssets;
-(long long)initialFailureDate;
-(void)setInitialFailureDate:(long long)arg1 ;
-(id)masterAssetHash;
-(id)ctag;
-(BOOL)wasDeleted;
-(void)setCtag:(id)arg1 ;
-(void)setDerivedAssets:(id)arg1 ;
-(void)setMasterAsset:(id)arg1 ;
-(void)setWasDeleted:(BOOL)arg1 ;
-(id)fileName;
-(id)initWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3 ;
-(void)setAssetCollectionID:(id)arg1 ;
-(void)setFileName:(id)arg1 ;
-(void).cxx_destruct;
@end
