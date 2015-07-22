/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLToolsRenderCommandEncoder.h>

@protocol MTLDevice, MTLRenderPipelineState, MTLDepthStencilState;
@class MTLDebugFunctionArgument, MTLRenderPassDescriptor, MTLDepthStencilDescriptor;

@interface MTLDebugRenderCommandEncoder : MTLToolsRenderCommandEncoder {

	MTLDebugFunctionArgument* _vertexBuffers[31];
	MTLDebugFunctionArgument* _vertexTextures[31];
	MTLDebugFunctionArgument* _vertexSamplers[16];
	MTLDebugFunctionArgument* _fragmentBuffers[31];
	MTLDebugFunctionArgument* _fragmentTextures[31];
	MTLDebugFunctionArgument* _fragmentSamplers[16];
	const SCD_Struct_MT4* _limits;
	unsigned _encoderState;
	float _lineWidth;
	float _depthBias;
	float _depthBiasSlopeScale;
	float _depthBiasClamp;
	unsigned _stencilRef;
	float _blendColorRed;
	float _blendColorGreen;
	float _blendColorBlue;
	float _blendColorAlpha;
	id<MTLDevice> _cachedDevice;
	MTLRenderPassDescriptor* _descriptor;
	unsigned long long _frontFacingWinding;
	unsigned long long _cullMode;
	unsigned long long _triangleFillMode;
	id<MTLRenderPipelineState> _renderPipelineState;
	id<MTLDepthStencilState> _depthStencilState;
	MTLDepthStencilDescriptor* _defaultDepthStencilDescriptor;
	unsigned long long _visibilityResultMode;
	unsigned long long _visibilityResultOffset;
	unsigned long long _width;
	unsigned long long _height;
	SCD_Struct_MT5 _scissorRect;
	SCD_Struct_MT6 _viewport;

}

@property (nonatomic,readonly) id<MTLDevice> cachedDevice;                                             //@synthesize cachedDevice=_cachedDevice - In the implementation block
@property (nonatomic,copy,readonly) MTLRenderPassDescriptor * descriptor;                              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MT6 viewport;                                                //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) unsigned long long frontFacingWinding;                                  //@synthesize frontFacingWinding=_frontFacingWinding - In the implementation block
@property (nonatomic,readonly) unsigned long long cullMode;                                            //@synthesize cullMode=_cullMode - In the implementation block
@property (nonatomic,readonly) float lineWidth;                                                        //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,readonly) float depthBias;                                                        //@synthesize depthBias=_depthBias - In the implementation block
@property (nonatomic,readonly) float depthBiasSlopeScale;                                              //@synthesize depthBiasSlopeScale=_depthBiasSlopeScale - In the implementation block
@property (nonatomic,readonly) float depthBiasClamp;                                                   //@synthesize depthBiasClamp=_depthBiasClamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MT5 scissorRect;                                             //@synthesize scissorRect=_scissorRect - In the implementation block
@property (nonatomic,readonly) unsigned long long triangleFillMode;                                    //@synthesize triangleFillMode=_triangleFillMode - In the implementation block
@property (nonatomic,readonly) id<MTLRenderPipelineState> renderPipelineState;                         //@synthesize renderPipelineState=_renderPipelineState - In the implementation block
@property (nonatomic,readonly) id<MTLDepthStencilState> depthStencilState;                             //@synthesize depthStencilState=_depthStencilState - In the implementation block
@property (nonatomic,readonly) MTLDepthStencilDescriptor * defaultDepthStencilDescriptor;              //@synthesize defaultDepthStencilDescriptor=_defaultDepthStencilDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned stencilRef;                                                    //@synthesize stencilRef=_stencilRef - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityResultMode;                                //@synthesize visibilityResultMode=_visibilityResultMode - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityResultOffset;                              //@synthesize visibilityResultOffset=_visibilityResultOffset - In the implementation block
@property (nonatomic,readonly) float blendColorRed;                                                    //@synthesize blendColorRed=_blendColorRed - In the implementation block
@property (nonatomic,readonly) float blendColorGreen;                                                  //@synthesize blendColorGreen=_blendColorGreen - In the implementation block
@property (nonatomic,readonly) float blendColorBlue;                                                   //@synthesize blendColorBlue=_blendColorBlue - In the implementation block
@property (nonatomic,readonly) float blendColorAlpha;                                                  //@synthesize blendColorAlpha=_blendColorAlpha - In the implementation block
@property (readonly) unsigned long long width;                                                         //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                                                        //@synthesize height=_height - In the implementation block
-(void)setViewport:(SCD_Struct_MT6)arg1 ;
-(void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setFrontFacingWinding:(unsigned long long)arg1 ;
-(void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3 ;
-(void)setTriangleFillMode:(unsigned long long)arg1 ;
-(void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setDepthStencilState:(id<MTLDepthStencilState>)arg1 ;
-(void)setStencilReferenceValue:(unsigned)arg1 ;
-(void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 ;
-(void)_setDefaults;
-(void)validateFramebufferWithRenderPipelineState:(id)arg1 ;
-(void)validateCommonDrawErrors:(unsigned long long)arg1 instanceCount:(unsigned long long)arg2 maxVertexID:(unsigned long long)arg3 ;
-(void)_validateAllFunctionArguments;
-(void)enumerateVertexBuffersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateVertexTexturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateVertexSamplersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFragmentBuffersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFragmentTexturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFragmentSamplersUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
-(id<MTLDevice>)cachedDevice;
-(SCD_Struct_MT6)viewport;
-(unsigned long long)frontFacingWinding;
-(float)depthBias;
-(float)depthBiasSlopeScale;
-(float)depthBiasClamp;
-(SCD_Struct_MT5)scissorRect;
-(unsigned long long)triangleFillMode;
-(id<MTLRenderPipelineState>)renderPipelineState;
-(id<MTLDepthStencilState>)depthStencilState;
-(MTLDepthStencilDescriptor *)defaultDepthStencilDescriptor;
-(unsigned)stencilRef;
-(unsigned long long)visibilityResultMode;
-(unsigned long long)visibilityResultOffset;
-(float)blendColorRed;
-(float)blendColorGreen;
-(float)blendColorBlue;
-(float)blendColorAlpha;
-(void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setScissorRect:(SCD_Struct_MT5)arg1 ;
-(void)setRenderPipelineState:(id<MTLRenderPipelineState>)arg1 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 ;
-(void)endEncoding;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)cullMode;
-(void)setCullMode:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(MTLRenderPassDescriptor *)descriptor;
@end
