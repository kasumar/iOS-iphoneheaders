/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/ICSLoggingDelegate.h>

@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>
+(id)sharedLogger;
-(void)logICSMessage:(id)arg1 atLevel:(int)arg2 ;
-(void)registerWithiCalendar;
@end
