/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSTimer;

@interface MTTimedOperation : NSOperation {

	NSTimer* _optimer;
	/*^block*/id _mainBlock;
	char _executing;
	char _finished;
	int _operationType;
	double _timeout;

}

@property (nonatomic,readonly) char isExecuting;              //@synthesize executing=_executing - In the implementation block
@property (nonatomic,readonly) char isFinished;               //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) double timeout;                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) int operationType;               //@synthesize operationType=_operationType - In the implementation block
-(void)performMain:(id)arg1 ;
-(void)cancel;
-(id)init;
-(void)start;
-(void)main;
-(char)isFinished;
-(char)isExecuting;
-(void)finish;
-(char)isConcurrent;
-(void)setMainBlock:(/*^block*/id)arg1 ;
-(void)scheduleTimer;
-(void)setTimeout:(double)arg1 ;
-(void)setOperationType:(int)arg1 ;
-(int)operationType;
-(double)timeout;
@end

