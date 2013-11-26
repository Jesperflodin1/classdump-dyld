/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class CFXPreferencesPropertyListSource;

@interface CFXPreferencesPropertyListSourceSynchronizer : NSObject {

	unsigned short _mode;
	unsigned _owner;
	CFXPreferencesPropertyListSource* _source;
	CFDictionaryRef _dict;
	CFArrayRef _dirtyKeys;
	CFDictionaryRef _pendingMutations;
	CFURLRef _url;
	long _formatToWrite;
	CFXPreferencesStatInfo _statInfo;
	unsigned _group;
	long _generationCount;

}
-(id)initWithPropertyListSource:(id)arg1 forLockedSynchronize:(BOOL)arg2 ;
-(unsigned char)_backingPlistChangedSinceLastSync;
-(void*)createPlistFromDisk;
-(unsigned char)writePlistToDisk;
-(unsigned char)synchronizeAlreadyFlocked;
-(void)dealloc;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(unsigned char)synchronize;
-(void)finalize;
@end
