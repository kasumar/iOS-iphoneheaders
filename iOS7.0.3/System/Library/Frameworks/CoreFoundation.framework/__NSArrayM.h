/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface __NSArrayM : NSMutableArray {

	unsigned _used;
	unsigned _doHardRetain : 1;
	unsigned _doWeakAccess : 1;
	unsigned _size : 30;
	unsigned _hasObjects : 1;
	unsigned _hasStrongReferences : 1;
	unsigned _offset : 30;
	unsigned long _mutations;
	id* _list;

}
+(id)__new:(const id*)arg1 :(unsigned)arg2 :(BOOL)arg3 :(BOOL)arg4 :(BOOL)arg5 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_mutate;
-(BOOL)_hasObjects;
-(BOOL)_hasStrongReferences;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)indexOfObjectIdenticalTo:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)exchangeObjectAtIndex:(unsigned)arg1 withObjectAtIndex:(unsigned)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)finalize;
@end
