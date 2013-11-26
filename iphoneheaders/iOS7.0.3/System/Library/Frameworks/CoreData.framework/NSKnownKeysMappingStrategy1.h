/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysMappingStrategy.h>

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {

	int _cd_rc;
	void* _table;
	unsigned long _length;
	id _reserved1;
	id* _keys;

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(Class)classForArchiver;
-(id)initForKeys:(id*)arg1 count:(unsigned)arg2 ;
-(CFArrayRef)_makeBranchTableForKeys:(const char**)arg1 count:(unsigned long)arg2 ;
-(void)_coreCreationForKeys:(const id*)arg1 count:(unsigned long)arg2 ;
-(void)_coreDealloc:(BOOL)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)retainCount;
-(unsigned)length;
-(id)allKeys;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)classForCoder;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id*)keys;
-(id)initForKeys:(id)arg1 ;
-(unsigned)indexForKey:(id)arg1 ;
-(unsigned)fastIndexForKnownKey:(id)arg1 ;
@end
