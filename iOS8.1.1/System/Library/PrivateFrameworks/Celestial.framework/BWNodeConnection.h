/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/BWNodeOutputConsumer.h>

@class BWNodeInput, BWNodeOutput, BWPipelineStage, NSString;

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {

	BWNodeInput* _input;
	BWNodeOutput* _output;
	BWPipelineStage* _pipelineStage;

}

@property (readonly) BWNodeInput * input; 
@property (readonly) BWNodeOutput * output; 
@property (readonly) BWPipelineStage * pipelineStage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_requirementsArrayForInputByResolvingPassthroughTree:(id)arg1 ;
-(BWNodeOutput *)output;
-(void)dealloc;
-(BWNodeInput *)input;
-(BOOL)detach;
-(BOOL)attach;
-(void)consumeMessage:(id)arg1 fromOutput:(id)arg2 ;
-(id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3 ;
-(BWPipelineStage *)pipelineStage;
-(BOOL)resolveCommonBufferFormat;
@end

