/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVCaptureVideoPreviewLayerInternal_FigRecorder, AVCaptureSession_FigRecorder, AVCaptureConnection_FigRecorder, NSString;

@interface AVCaptureVideoPreviewLayer_FigRecorder : CALayer {

	AVCaptureVideoPreviewLayerInternal_FigRecorder* _internal;

}

@property (nonatomic,retain) AVCaptureSession_FigRecorder * session; 
@property (nonatomic,readonly) AVCaptureConnection_FigRecorder * connection; 
@property (copy) NSString * videoGravity; 
@property (getter=isOrientationSupported,nonatomic,readonly) BOOL orientationSupported; 
@property (assign,nonatomic) long long orientation; 
@property (getter=isMirroringSupported,nonatomic,readonly) BOOL mirroringSupported; 
@property (assign,nonatomic) BOOL automaticallyAdjustsMirroring; 
@property (assign,getter=isMirrored,nonatomic) BOOL mirrored; 
+(id)layerWithSession:(id)arg1 ;
+(void)initialize;
-(id)liveConnections;
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(id)connectionMediaTypes;
-(void)handleEnabledChangedForConnection:(id)arg1 ;
-(void)didStopForSession:(id)arg1 error:(id)arg2 ;
-(void)didStartForSession:(id)arg1 ;
-(int)changeSeed;
-(BOOL)canAddConnectionForMediaType:(id)arg1 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)notReadyError;
-(void)bumpChangeSeed;
-(double)previewRotationDegrees;
-(BOOL)automaticallyAdjustsMirroring;
-(id)initWithSession:(id)arg1 ;
-(long long)_orientation;
-(BOOL)_automaticallyAdjustsMirroring;
-(BOOL)_isMirrored;
-(void)_updateCaptureDeviceTransform;
-(BOOL)isMirroringSupported;
-(BOOL)isChromaNoiseReductionSupported;
-(CGRect)rectForCaptureDeviceFaceRect:(CGRect)arg1 ;
-(BOOL)isOrientationSupported;
-(void)setAutomaticallyAdjustsMirroring:(BOOL)arg1 ;
-(BOOL)isMirrored;
-(void)setMirrored:(BOOL)arg1 ;
-(BOOL)isChromaNoiseReductionEnabled;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(id)activeConnections;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(CGRect)rectForMetadataObject:(id)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 ;
-(void)centerSublayer;
-(void)updateInternalStateForCaptureOptions:(id)arg1 ;
-(id)subLayer;
-(id)connections;
-(NSString *)videoGravity;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(long long)orientation;
-(id)_input;
-(void)setOrientation:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(AVCaptureConnection_FigRecorder *)connection;
-(AVCaptureSession_FigRecorder *)session;
-(void)setSession:(AVCaptureSession_FigRecorder *)arg1 ;
-(BOOL)isPaused;
-(void)setVideoGravity:(NSString *)arg1 ;
@end
