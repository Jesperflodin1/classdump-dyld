/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSDictionary, NSSet;

@interface DownloadPolicyChangeset : NSObject <NSCopying> {

	int _changesetType;
	NSDictionary* _downloadProperties;
	int _networkType;
	NSSet* _policyIDs;

}

@property (nonatomic,copy) NSSet * policyIdentifiers;                                         //@synthesize policyIDs=_policyIDs - In the implementation block
@property (assign,nonatomic) int changesetType;                                               //@synthesize changesetType=_changesetType - In the implementation block
@property (nonatomic,copy) NSDictionary * downloadPropertiesForStoppedDownloads;              //@synthesize downloadProperties=_downloadProperties - In the implementation block
@property (assign,nonatomic) int networkType;                                                 //@synthesize networkType=_networkType - In the implementation block
-(id)policyIdentifiers;
-(id)downloadPropertiesForStoppedDownloads;
-(int)changesetType;
-(id)initWithPolicyIdentifiers:(id)arg1 ;
-(void)setChangesetType:(int)arg1 ;
-(void)setDownloadPropertiesForStoppedDownloads:(id)arg1 ;
-(void)setPolicyIdentifiers:(id)arg1 ;
-(int)networkType;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setNetworkType:(int)arg1 ;
@end
