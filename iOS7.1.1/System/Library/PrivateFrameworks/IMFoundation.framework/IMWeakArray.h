/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableArray;

@interface IMWeakArray : NSObject {

	NSMutableArray* _weakArray;

}
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IM8*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)addObject:(id)arg1 ;
-(id)description;
-(id)copyMutableArray;
-(void)addObjectIfNotIdenticalObjectExists:(id)arg1 ;
-(id)copyMutableSet;
@end
