/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface TimerSnippetTimeView : UIView {

	BOOL _running;
	double _remainingTime;
	double _fireTime;
	CFDateFormatterRef _formatter;
	BOOL _formatShowingHours;
	CFStringRef _hmsFormat;
	CFStringRef _msFormat;
	UILabel* _timeLabel;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setRemainingTime:(double)arg1 ;
-(void)setupWithDuration:(double)arg1 ;
-(void)setFireTime:(double)arg1 withTime:(double)arg2 ;
-(BOOL)updateDisplayWithTime:(double)arg1 ;
-(void)markStaleWithTime:(double)arg1 ;
@end
