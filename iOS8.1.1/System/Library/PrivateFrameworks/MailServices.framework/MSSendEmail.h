/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailServices/MSMailDefaultService.h>

@interface MSSendEmail : MSMailDefaultService
+(id)sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)sendEmail:(id)arg1 playSound:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_sendEmail:(id)arg1 playSound:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

