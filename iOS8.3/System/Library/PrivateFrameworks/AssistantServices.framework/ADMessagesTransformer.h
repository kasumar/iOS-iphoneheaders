/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:46:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADAceRequestTransformer.h>
#import <assistantd/ADAceResponseTransformer.h>

@class NSString;

@interface ADMessagesTransformer : NSObject <ADAceRequestTransformer, ADAceResponseTransformer>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getSiriRequestForClientBoundAceCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)aceCommandForSiriResponse:(id)arg1 responseError:(id)arg2 forRequestCommand:(id)arg3 ;
@end

