/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLocking.h>

@interface NSLock : NSObject <NSLocking> {

	void* _priv;

}
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(void)mf_waitForLock;
-(BOOL)tryLock;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)lock;
-(void)unlock;
-(void)finalize;
@end

