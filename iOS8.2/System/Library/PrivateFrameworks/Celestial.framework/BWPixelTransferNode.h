/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWPixelBufferPool;

@interface BWPixelTransferNode : BWNode {

	int _cropMode;
	int _liveCropMode;
	CGRect _inputCropRect;
	CGRect _liveInputCropRect;
	char _haveLiveInputCropRect;
	char _passesBuffersThroughWhenPossible;
	char _livePassesBuffersThroughWhenPossible;
	int _rotationDegrees;
	int _liveRotationDegrees;
	char _flipHorizontal;
	char _liveFlipHorizontal;
	char _flipVertical;
	char _liveFlipVertical;
	char _liveZeroFillBuffers;
	char _lowSpeed;
	char _liveLowSpeed;
	unsigned long _outputWidth;
	unsigned long _outputHeight;
	unsigned long _outputPixelFormat;
	OpaqueVTImageRotationSessionRef _rotationSession;
	int _rotationSessionRotationDegrees;
	char _rotationSessionFlipHorizontal;
	char _rotationSessionFlipVertical;
	char _rotationSessionZeroFillBuffers;
	char _rotationSessionLowSpeed;
	OpaqueVTPixelTransferSessionRef _transferSession;
	BWPixelBufferPool* _intermediateBufferPool;
	SCD_Struct_BW29 _intermediatePoolDimensions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	char _makeCurrentConfigurationLiveOnNextRenderCallback;

}
+(void)initialize;
-(void)setOutputWidth:(unsigned long)arg1 ;
-(void)setOutputHeight:(unsigned long)arg1 ;
-(unsigned long)outputWidth;
-(unsigned long)outputHeight;
-(void)dealloc;
-(id)init;
-(int)rotationDegrees;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setPassesBuffersThroughWhenPossible:(char)arg1 ;
-(char)passesBuffersThroughWhenPossible;
-(void)setCropMode:(int)arg1 ;
-(void)setOutputPixelFormat:(unsigned long)arg1 ;
-(void)setRotationDegrees:(int)arg1 ;
-(void)setFlipHorizontal:(char)arg1 ;
-(void)setFlipVertical:(char)arg1 ;
-(unsigned long)outputPixelFormat;
-(void)setInputCropRect:(CGRect)arg1 ;
-(void)setLowSpeed:(char)arg1 ;
-(void)makeCurrentConfigurationLive;
-(char)hasNonLiveConfigurationChanges;
-(void)_updateOutputRequirements;
-(char)_zeroFillBuffers;
-(void)_makeCurrentConfigurationLive;
-(char)_emitIfMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_BW29)_intermediateBufferDimensionsForInputDimensions:(SCD_Struct_BW29)arg1 outputDimensions:(SCD_Struct_BW29)arg2 ;
-(long)_ensureIntermediatePoolWithDimensions:(SCD_Struct_BW29)arg1 ;
-(void)_ensureTransferSession;
-(void)_ensureRotationSession;
-(id)_preferredPixelFormats;
-(id)_preferredPixelFormatsWithInputPixelFormatFirst;
-(int)cropMode;
-(CGRect)inputCropRect;
-(char)flipHorizontal;
-(char)flipVertical;
-(char)lowSpeed;
@end

