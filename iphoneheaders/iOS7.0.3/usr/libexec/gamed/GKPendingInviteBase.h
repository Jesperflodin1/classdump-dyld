/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSNumber, NSString, NSDictionary, NSURL, GKPlayerInternal, NSArray;

@interface GKPendingInviteBase : NSObject <NSSecureCoding> {

	NSNumber* _command;
	NSString* _inviteID;
	NSString* _peerID;
	NSDictionary* _gameDescriptor;
	NSString* _message;
	BOOL _showStoreButton;
	BOOL _compatible;
	NSString* _localizedGameName;
	NSURL* _storeURL;
	BOOL _cancelled;
	GKPlayerInternal* _originatorPlayer;

}

@property (assign,nonatomic) BOOL showStoreButton;                             //@synthesize showStoreButton=_showStoreButton - In the implementation block
@property (assign,nonatomic) BOOL compatible;                                  //@synthesize compatible=_compatible - In the implementation block
@property (nonatomic,retain) NSNumber * command;                               //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSString * inviteID;                              //@synthesize inviteID=_inviteID - In the implementation block
@property (nonatomic,retain) NSString * peerID;                                //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,retain) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDictionary * gameDescriptor;                    //@synthesize gameDescriptor=_gameDescriptor - In the implementation block
@property (nonatomic,retain) NSString * gameBundleID; 
@property (nonatomic,retain) NSString * gameVersion; 
@property (nonatomic,readonly) NSNumber * gameAdamID; 
@property (nonatomic,readonly) NSArray * compatibleVersions; 
@property (nonatomic,retain) GKPlayerInternal * originatorPlayer;              //@synthesize originatorPlayer=_originatorPlayer - In the implementation block
@property (nonatomic,retain) NSString * localizedGameName;                     //@synthesize localizedGameName=_localizedGameName - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                                 //@synthesize storeURL=_storeURL - In the implementation block
@property (assign,nonatomic,@dynamic) BOOL cancelled; 
+(BOOL)supportsSecureCoding;
-(id)localizedGameName;
-(BOOL)showStoreButton;
-(id)gameAdamID;
-(void)loadDisplayNameWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)loadInviteDataWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)initWithInviteDictionary:(id)arg1 ;
-(BOOL)compatible;
-(void)determineCompatibilityIncludingStore:(BOOL)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)setShowStoreButton:(BOOL)arg1 ;
-(void)setCompatible:(BOOL)arg1 ;
-(id)originatorPlayer;
-(void)setLocalizedGameName:(id)arg1 ;
-(id)gameVersion;
-(id)compatibleVersions;
-(void)setGameBundleID:(id)arg1 andVersion:(id)arg2 ;
-(void)loadStoreItemWithGroup:(id)arg1 ;
-(void)setOriginatorPlayer:(id)arg1 ;
-(void)loadGameInfoWithGroup:(id)arg1 ;
-(void)loadOriginatorInfoWithGroup:(id)arg1 ;
-(void)setGameVersion:(id)arg1 ;
-(id)peerID;
-(void)setPeerID:(id)arg1 ;
-(void)setGameBundleID:(id)arg1 ;
-(id)gameBundleID;
-(void)setGameDescriptor:(id)arg1 ;
-(void)setInviteID:(id)arg1 ;
-(id)gameDescriptor;
-(id)inviteID;
-(id)storeURL;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)command;
-(void)setCommand:(id)arg1 ;
-(void)setStoreURL:(id)arg1 ;
@end
