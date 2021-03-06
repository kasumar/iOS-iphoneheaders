/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface NSThread : NSObject {

	id _private;
	unsigned char _bytes[44];

}

@property (retain,readonly) NSMutableDictionary * threadDictionary; 
@property (assign) double threadPriority; 
@property (assign) int qualityOfService; 
@property (copy) NSString * name; 
@property (assign) unsigned stackSize; 
@property (readonly) char isMainThread; 
@property (getter=isExecuting,readonly) char executing; 
@property (getter=isFinished,readonly) char finished; 
@property (getter=isCancelled,readonly) char cancelled; 
+(id)_mapkit_networkIOThread;
+(void)_mapkit_runThread:(id)arg1 ;
+(void)_im_runBlock:(/*^block*/id)arg1 ;
+(id)callStackReturnAddresses;
+(char)isMultiThreaded;
+(id)mainThread;
+(double)threadPriority;
+(char)setThreadPriority:(double)arg1 ;
+(char)isDying;
+(void)exit;
+(void)sleepForTimeInterval:(double)arg1 ;
+(char)isMainThread;
+(id)currentThread;
+(id)callStackSymbols;
+(void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3 ;
+(void)sleepUntilDate:(id)arg1 ;
-(void)zotRunBlock:(/*^block*/id)arg1 ;
-(void)__im_performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 modes:(id)arg3 ;
-(void)__im_performBlock:(/*^block*/id)arg1 ;
-(void)__im_performBlock:(/*^block*/id)arg1 modes:(id)arg2 ;
-(void)__im_performBlock:(/*^block*/id)arg1 waitUntilDone:(char)arg2 ;
-(void)__im_performBlock:(/*^block*/id)arg1 waitUntilDone:(char)arg2 modes:(id)arg3 ;
-(void)__im_performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(char)shouldStop;
-(void)registerForStopNotification;
-(void)unregisterForStopNotification;
-(double)threadPriority;
-(void)setThreadPriority:(double)arg1 ;
-(char)isDying;
-(void)_nq:(id)arg1 ;
-(unsigned)stackSize;
-(void)setStackSize:(unsigned)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(char)isMainThread;
-(char)isCancelled;
-(NSMutableDictionary *)threadDictionary;
-(void)start;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)main;
-(char)isFinished;
-(char)isExecuting;
-(void)setQualityOfService:(int)arg1 ;
-(int)qualityOfService;
-(id)runLoop;
@end

