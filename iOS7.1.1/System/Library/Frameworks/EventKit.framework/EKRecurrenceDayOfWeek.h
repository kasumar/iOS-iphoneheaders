/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface EKRecurrenceDayOfWeek : NSObject <NSCopying> {

	long long _dayOfTheWeek;
	long long _weekNumber;

}

@property (nonatomic,readonly) long long dayOfTheWeek;              //@synthesize dayOfTheWeek=_dayOfTheWeek - In the implementation block
@property (nonatomic,readonly) long long weekNumber;                //@synthesize weekNumber=_weekNumber - In the implementation block
+(id)dayOfWeek:(long long)arg1 ;
+(id)dayOfWeek:(long long)arg1 weekNumber:(long long)arg2 ;
-(id)iCalendarDescription;
-(id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1 ;
-(id)initWithDayOfTheWeek:(long long)arg1 weekNumber:(long long)arg2 ;
-(long long)dayOfTheWeek;
-(long long)weekNumber;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
@end
