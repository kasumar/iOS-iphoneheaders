/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueMutableSet.h>

@class NSMutableSet;

@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {

	NSMutableSet* _mutableSet;

}
+(SCD_Struct_NS36*)_proxyNonGCPoolPointer;
+(id)_proxyShare;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)unionSet:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)objectEnumerator;
-(id)member:(id)arg1 ;
-(void)setSet:(id)arg1 ;
@end
