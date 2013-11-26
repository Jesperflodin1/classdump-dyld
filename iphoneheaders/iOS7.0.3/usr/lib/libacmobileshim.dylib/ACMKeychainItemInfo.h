/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libacmobileshim.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableDictionary, NSString, NSDate, NSData;

@interface ACMKeychainItemInfo : NSObject <NSCopying> {

	NSMutableDictionary* _attributeDictionary;

}

@property (retain) id classCode; 
@property (retain) NSString * accessGroup; 
@property (retain) NSDate * creationDate; 
@property (retain) NSDate * modificationDate; 
@property (retain) NSString * description; 
@property (retain) NSString * comment; 
@property (assign) unsigned creator; 
@property (assign) unsigned type; 
@property (retain) NSString * label; 
@property (assign) BOOL isInvisible; 
@property (assign) BOOL isNegative; 
@property (retain) NSString * account; 
@property (retain) NSString * service; 
@property (retain) NSData * generic; 
@property (retain) id valueRef; 
@property (retain) id valueData; 
@property (retain) id valuePersistentRef; 
@property (assign) BOOL isPermanent; 
@property (retain) id keyType; 
@property (retain) NSData * applicationTag; 
@property (copy) NSString * applicationTagString; 
@property (retain) NSString * genericString; 
@property (assign) BOOL returnData; 
@property (assign) BOOL returnAttributes; 
@property (assign) BOOL returnRef; 
@property (assign) BOOL returnPersistentRef; 
@property (assign) unsigned returnLimit; 
@property (retain) NSMutableDictionary * attributeDictionary;              //@synthesize attributeDictionary=_attributeDictionary - In the implementation block
+(id)keychainItemInfoWithAttributes:(id)arg1 ;
+(id)keychainItemInfo;
-(void)setComment:(id)arg1 ;
-(id)service;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)attributes;
-(BOOL)isInvisible;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(void)setService:(id)arg1 ;
-(id)valueData;
-(void)setValueData:(id)arg1 ;
-(unsigned)creator;
-(id)keyType;
-(void)setModificationDate:(id)arg1 ;
-(id)creationDate;
-(id)modificationDate;
-(id)initWithAttributes:(id)arg1 ;
-(void)setCreationDate:(id)arg1 ;
-(id)comment;
-(void)setDescription:(id)arg1 ;
-(BOOL)isNegative;
-(void)setAttributeDictionary:(id)arg1 ;
-(id)attributeDictionary;
-(void)setApplicationTag:(id)arg1 ;
-(id)applicationTag;
-(void)setGeneric:(id)arg1 ;
-(id)classCode;
-(void)setCreator:(unsigned)arg1 ;
-(void)setIsInvisible:(BOOL)arg1 ;
-(void)setIsNegative:(BOOL)arg1 ;
-(void)setIsPermanent:(BOOL)arg1 ;
-(BOOL)isPermanent;
-(void)setKeyType:(id)arg1 ;
-(void)setApplicationTagString:(id)arg1 ;
-(id)applicationTagString;
-(void)setGenericString:(id)arg1 ;
-(id)genericString;
-(void)setValuePersistentRef:(id)arg1 ;
-(id)valuePersistentRef;
-(void)setReturnData:(BOOL)arg1 ;
-(BOOL)returnData;
-(BOOL)returnAttributes;
-(BOOL)returnRef;
-(void)setReturnPersistentRef:(BOOL)arg1 ;
-(BOOL)returnPersistentRef;
-(unsigned)returnLimit;
-(void)setAccessGroup:(id)arg1 ;
-(id)accessGroup;
-(void)setReturnLimit:(unsigned)arg1 ;
-(void)setReturnAttributes:(BOOL)arg1 ;
-(void)setClassCode:(id)arg1 ;
-(void)setReturnRef:(BOOL)arg1 ;
-(id)valueRef;
-(void)setValueRef:(id)arg1 ;
-(id)generic;
@end
