/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSTimer.h>

@interface NSCFTimer : NSTimer
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(void)fire;
-(id)retain;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(void)invalidate;
-(BOOL)isValid;
-(void)setFireDate:(id)arg1 ;
-(id)userInfo;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6 ;
-(double)timeInterval;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(id)fireDate;
-(oneway void)release;
-(void)finalize;
@end

