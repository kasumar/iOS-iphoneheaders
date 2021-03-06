/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOSnappedRouteEdge : NSObject {

	SCD_Struct_GE51 _localBounds;
	shared_ptr<geo::MapEdgeRoad>* _mapEdge;
	vector<GEOVectorTilePoint, std::__1::allocator<GEOVectorTilePoint> >* _points;
	vector<geo::PolylineCoordinate, std::__1::allocator<geo::PolylineCoordinate> >* _routeOffsets;
	unsigned long long _mapEdgeOffset;
	BOOL _clippedFront;
	BOOL _clippedBack;

}

@property (nonatomic,readonly) shared_ptr<geo::MapEdgeRoad>* mapEdge;              //@synthesize mapEdge=_mapEdge - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE94* feature; 
@property (nonatomic,readonly) SCD_Struct_GE90* points; 
@property (nonatomic,readonly) unsigned long long pointCount; 
@property (nonatomic,readonly) PolylineCoordinate routeOffsetA; 
@property (nonatomic,readonly) PolylineCoordinate routeOffsetB; 
@property (nonatomic,readonly) PolylineCoordinate* routeOffsets; 
@property (nonatomic,readonly) unsigned long long mapEdgeOffset;                   //@synthesize mapEdgeOffset=_mapEdgeOffset - In the implementation block
@property (nonatomic,readonly) BOOL clippedFront;                                  //@synthesize clippedFront=_clippedFront - In the implementation block
@property (nonatomic,readonly) BOOL clippedBack;                                   //@synthesize clippedBack=_clippedBack - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithRoadPath:(const RoadPathElement<std::__1::shared_ptr<geo::MapEdge> >*)arg1 sectionRect:(const SCD_Struct_GE51*)arg2 ;
-(void)calculateRouteOffsetsBetweenA:(PolylineCoordinate)arg1 andB:(PolylineCoordinate)arg2 overLength:(float)arg3 onRoute:(id)arg4 ;
-(SCD_Struct_GE94*)feature;
-(SCD_Struct_GE90*)points;
-(unsigned long long)pointCount;
-(shared_ptr<geo::MapEdgeRoad>*)mapEdge;
-(PolylineCoordinate)routeOffsetB;
-(PolylineCoordinate)routeOffsetA;
-(unsigned long long)mapEdgeOffset;
-(PolylineCoordinate*)routeOffsets;
-(BOOL)clippedFront;
-(BOOL)clippedBack;
@end

