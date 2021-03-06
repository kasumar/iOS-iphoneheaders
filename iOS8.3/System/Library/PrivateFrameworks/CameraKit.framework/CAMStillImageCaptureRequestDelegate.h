/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:53:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CAMStillImageCaptureRequestDelegate <NSObject>
@optional
-(void)captureController:(id)arg1 willCaptureStillImageForRequest:(id)arg2;
-(void)captureController:(id)arg1 didCaptureStillImageForRequest:(id)arg2;
-(void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
-(void)captureController:(id)arg1 didCompleteResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
-(void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;

@end

