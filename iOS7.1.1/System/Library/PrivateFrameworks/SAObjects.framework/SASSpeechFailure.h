/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand

@property (assign,nonatomic) long long errorCode; 
@property (assign,nonatomic) int reason; 
@property (nonatomic,copy) NSString * reasonDescription; 
+(id)speechFailure;
+(id)speechFailureWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setReason:(int)arg1 ;
-(int)reason;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)reasonDescription;
-(void)setReasonDescription:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
@end

