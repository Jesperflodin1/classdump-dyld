/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMAP/IMAP-Structs.h>
#import <Message/MFSASLAuthenticator.h>

@class YahooAccount, NSData;

@interface _MFXYMPKIAuthenticator : MFSASLAuthenticator {

	BOOL sentInitialResponse;
	YahooAccount* _yahooAccount;
	NSData* _cachedSignature;
	BOOL _usedCachedSignature;

}
-(void)dealloc;
-(id)_XYMPKISignatureData;
-(CFDataRef)_copyDeviceCertificate;
-(CFDataRef)_copyDevicePrivateKey;
-(id)saslName;
-(BOOL)base64EncodeResponseData;
-(void)setAuthenticationState:(int)arg1 ;
-(id)responseForServerData:(id)arg1 ;
-(BOOL)couldRetry;
@end
