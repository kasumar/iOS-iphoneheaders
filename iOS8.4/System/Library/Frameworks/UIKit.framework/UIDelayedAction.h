/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, NSString;

@interface UIDelayedAction : NSObject {

	id m_target;
	SEL m_action;
	id m_userInfo;
	double m_delay;
	NSTimer* m_timer;
	BOOL m_canceled;
	NSString* m_runLoopMode;

}
-(void)cancel;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(double)delay;
-(id)target;
-(id)userInfo;
-(void)touchWithDelay:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5 ;
-(void)timerFired:(id)arg1 ;
-(void)unschedule;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 ;
-(void)touch;
-(BOOL)scheduled;
@end
