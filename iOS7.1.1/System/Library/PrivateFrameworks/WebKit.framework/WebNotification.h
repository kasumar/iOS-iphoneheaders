/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebNotificationPrivate;

@interface WebNotification : NSObject {

	WebNotificationPrivate* _private;

}
-(id)init;
-(id)tag;
-(id)origin;
-(id)title;
-(id)body;
-(id)iconURL;
-(id)dir;
-(id)lang;
-(unsigned long long)notificationID;
-(void)dispatchShowEvent;
-(void)dispatchCloseEvent;
-(void)dispatchClickEvent;
-(void)dispatchErrorEvent;
@end

