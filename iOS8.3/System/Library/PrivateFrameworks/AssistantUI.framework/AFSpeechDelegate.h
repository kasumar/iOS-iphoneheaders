/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:47:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFSpeechDelegate <NSObject>
@optional
-(void)assistantConnectionDidChangeAudioRecordingPower:(id)arg1;
-(void)assistantConnectionSpeechRecordingWillBegin:(id)arg1;
-(void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
-(void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2;
-(void)assistantConnectionSpeechRecordingDidEnd:(id)arg1;
-(void)assistantConnectionSpeechRecordingDidCancel:(id)arg1;
-(void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
-(void)assistantConnection:(id)arg1 speechRecognized:(id)arg2;
-(void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2;
-(void)assistantConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;

@end
