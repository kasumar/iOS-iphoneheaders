/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKCoastlineGroup : NSObject {

	shared_ptr<md::StyleQuery>* _styleQuery;
	unsigned _tilePointSize;
	unique_ptr<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonMesh::MeshMesh> > >* _coastlineMeshVendor;
	unique_ptr<ggl::MeshVendor<ggl::Glow::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Glow::MeshMesh> > >* _innerGlowMeshVendor;
	unique_ptr<ggl::MeshVendor<ggl::Glow::MeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Glow::MeshMesh> > >* _outerGlowMeshVendor;

}

@property (nonatomic,readonly) const MeshVendor<ggl::PolygonMesh::MeshMesh>* coastlineMeshVendor; 
@property (nonatomic,readonly) const MeshVendor<ggl::Glow::MeshMesh>* innerGlowMeshVendor; 
@property (nonatomic,readonly) const MeshVendor<ggl::Glow::MeshMesh>* outerGlowMeshVendor; 
@property (nonatomic,readonly) shared_ptr<md::StyleQuery>* styleQuery;                                         //@synthesize styleQuery=_styleQuery - In the implementation block
-(shared_ptr<md::StyleQuery>*)styleQuery;
-(const MeshVendor<ggl::PolygonMesh::MeshMesh>*)coastlineMeshVendor;
-(id)initWithStyleQuery:(shared_ptr<md::StyleQuery>*)arg1 tilePointSize:(unsigned)arg2 ;
-(void)addCoastlineFeature:(SCD_Struct_VK407*)arg1 ;
-(const MeshVendor<ggl::Glow::MeshMesh>*)innerGlowMeshVendor;
-(const MeshVendor<ggl::Glow::MeshMesh>*)outerGlowMeshVendor;
@end

