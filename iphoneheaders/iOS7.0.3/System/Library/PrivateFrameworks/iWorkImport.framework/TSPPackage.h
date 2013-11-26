/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSPPackage <NSObject>
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) <TSPFileCoordinatorDelegate> * fileCoordinatorDelegate; 
@property (nonatomic,readonly) SFUCryptoKey * decryptionKey; 
@property (nonatomic,readonly) BOOL isClosed; 
@required
-(void)didCloseDocument;
-(id)decryptionKey;
-(unsigned char)packageIdentifier;
-(void)enumerateDatasUsingBlock:(/*^block*/ id)arg1;
-(BOOL)containsData:(id)arg1;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3;
-(id)newDataStorageForFilename:(id)arg1;
-(void)didReferenceData:(id)arg1;
-(id)newDataStorageForFilename:(id)arg1 decryptionKey:(id)arg2;
-(id)newReadChannelForComponent:(id)arg1;
-(void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 completion:(/*^block*/ id)arg6;
-(id)fileCoordinatorDelegate;
-(BOOL)isClosed;
@end
