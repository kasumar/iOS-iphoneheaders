/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDatePickerMode.h>

@class NSString;

@interface _UIDatePickerMode_Time : _UIDatePickerMode {

	float _timeHourWidth;
	float _timeMinuteWidth;
	float _timeAMPMWidth;
	NSString* _hourFormat;
	NSString* _minuteFormat;

}
+(int)datePickerMode;
+(unsigned)extractableCalendarUnits;
-(void)dealloc;
-(float)rowHeight;
-(id)font;
-(void)noteCalendarChanged;
-(int)displayedCalendarUnits;
-(void)resetComponentWidths;
-(void)_shouldReset:(id)arg1 ;
-(id)dateFormatForCalendarUnit:(unsigned)arg1 ;
-(float)widthForCalendarUnit:(unsigned)arg1 font:(id)arg2 maxWidth:(float)arg3 ;
-(id)localizedFormatString;
-(int)numberOfRowsForCalendarUnit:(unsigned)arg1 ;
-(unsigned)nextUnitSmallerThanUnit:(unsigned)arg1 ;
-(unsigned)nextUnitLargerThanUnit:(unsigned)arg1 ;
-(BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned)arg3 ;
@end

