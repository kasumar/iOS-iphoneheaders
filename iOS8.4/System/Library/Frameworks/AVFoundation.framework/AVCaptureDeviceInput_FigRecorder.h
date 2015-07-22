/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureInput_FigRecorder.h>

@class AVCaptureDeviceInputInternal_FigRecorder, AVCaptureDevice_FigRecorder;

@interface AVCaptureDeviceInput_FigRecorder : AVCaptureInput_FigRecorder {

	AVCaptureDeviceInputInternal_FigRecorder* _internal;

}

@property (nonatomic,readonly) AVCaptureDevice_FigRecorder * device; 
+(id)deviceInputWithDevice:(id)arg1 error:(id*)arg2 ;
+(void)initialize;
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(void)didStopForSession:(id)arg1 error:(id)arg2 ;
-(void)didStartForSession:(id)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)notReadyError;
-(id)ports;
-(id)initWithDevice:(id)arg1 error:(id*)arg2 ;
-(BOOL)_authorizedToUseDevice:(id)arg1 ;
-(void)_setDevice:(id)arg1 ;
-(void)willStartForSession:(id)arg1 ;
-(void)_checkForFigCameraAccess;
-(int)_requestCameraRecordPermission;
-(void)dealloc;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSession:(id)arg1 ;
-(OpaqueCMClockRef)clock;
-(AVCaptureDevice_FigRecorder *)device;
@end
