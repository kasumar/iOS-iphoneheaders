/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGeometry.h>

@interface TSCH3DExtrusionGeometry : TSCH3DGeometry {

	vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >* mCrossSection;
	vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >* mSpine;
	vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >* mScale;
	bool mBeginCap;
	bool mEndCap;
	float mCrossSectionCreaseAngle;
	float mSpineCreaseAngle;
	unsigned mEndCapOffset;
	int mEndCapCount;
	unsigned mBeginCapOffset;
	int mBeginCapCount;
	tvec3<float> mNormalBias;
	tvec3<float> mSpineDirectionBias;

}

@property (assign,nonatomic) bool beginCap; 
@property (assign,nonatomic) bool endCap; 
@property (assign,nonatomic) float crossSectionCreaseAngle; 
@property (assign,nonatomic) float spineCreaseAngle; 
@property (assign,nonatomic) tvec3<float> normalBias; 
@property (nonatomic,readonly) unsigned capOffset; 
@property (nonatomic,readonly) int capCount; 
@property (assign,nonatomic) tvec3<float> spineDirectionBias; 
-(unsigned)capOffset;
-(void)generateArrays;
-(int)capCount;
-(void)setCrossSectionCreaseAngle:(float)arg1 ;
-(void)setSpineCreaseAngle:(float)arg1 ;
-(void)setCrossSection:(const vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)arg1 ;
-(const vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)crossSection;
-(void)setSpine:(const vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)arg1 ;
-(const vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)spine;
-(void)debug_dumpGeometryBounds;
-(bool)beginCap;
-(void)setBeginCap:(bool)arg1 ;
-(float)crossSectionCreaseAngle;
-(float)spineCreaseAngle;
-(tvec3<float>)normalBias;
-(void)setNormalBias:(tvec3<float>)arg1 ;
-(tvec3<float>)spineDirectionBias;
-(void)setSpineDirectionBias:(tvec3<float>)arg1 ;
-(void)dealloc;
-(id)init;
-(const vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)scale;
-(void)setScale:(const vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)setEndCap:(bool)arg1 ;
-(bool)endCap;
@end

