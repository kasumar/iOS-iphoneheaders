/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class VGLResource, VGLContext, VGLVertexShader, VGLFragmentShader;

@interface VGLProgram : NSObject <NSCopying> {

	VGLResource* _resource;
	VGLContext* _context;
	int _uMatrix;
	SCD_Union_VG35 _matrix;
	VGLVertexShader* _vert;
	VGLFragmentShader* _frag;
	vector<UniformHandle, vk_allocator<UniformHandle> >* _handlesVector;
	VGLContext* _lastUsedContext;

}

@property (nonatomic,readonly) unsigned token; 
@property (assign,nonatomic) ? matrix;                          //@synthesize matrix=_matrix - In the implementation block
@property (assign,nonatomic) VGLContext * context;              //@synthesize context=_context - In the implementation block
+(id)vertName;
+(id)fragName;
+(id)programWithContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id).cxx_construct;
-(BOOL)link;
-(unsigned)token;
-(void)setup;
-(void)willBeUsedWithContext:(id)arg1 ;
-(void)dirtyUniformCaches;
-(void)bindAttributes;
-(int)uniformLocation:(const char*)arg1 ;
-(BOOL)_attachBindLink;
-(void)printInfoLog;
-(void)setUniformMat4:(int)arg1 curr:(/*function pointer*/ void**)arg2 next:(const /*function pointer*/ void**)arg3 ;
-(id)initWithResourceFactory:(id)arg1 ;
-(void)setMatrix:(/*function pointer*/ void*)arg1 ;
-(void)setUniformColor:(int)arg1 curr:(VGLColor*)arg2 next:(const VGLColor*)arg3 ;
-(void)setUniformVec2:(int)arg1 curr:(Vec2Imp<float>*)arg2 next:(const Vec2Imp<float>*)arg3 ;
-(void)setUniformVec3:(int)arg1 curr:(SCD_Struct_VG29*)arg2 next:(const SCD_Struct_VG29*)arg3 ;
-(void)setUniformVec4:(int)arg1 curr:(VGLColor*)arg2 next:(const VGLColor*)arg3 ;
-(void)setUniformMat2:(int)arg1 curr:(/*function pointer*/ void**)arg2 next:(const /*function pointer*/ void**)arg3 ;
-(void)setUniformMat3:(int)arg1 curr:(/*function pointer*/ void**)arg2 next:(const /*function pointer*/ void**)arg3 ;
-(void)setUniformInt:(int)arg1 curr:(int*)arg2 next:(int)arg3 ;
-(void)setUniformIntVec:(int)arg1 curr:(int*)arg2 next:(const int*)arg3 count:(int)arg4 ;
-(void)setUniformFloat:(int)arg1 curr:(float*)arg2 next:(float)arg3 ;
-(void)setUniformFloatVec:(int)arg1 curr:(float*)arg2 next:(const float*)arg3 count:(int)arg4 ;
-(/*function pointer*/ void*)matrix;
-(void).cxx_destruct;
@end

