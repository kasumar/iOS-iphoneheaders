/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartAreaSceneObject.h>

@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject
+(float)depthLimitFactorForSeriesCount:(int)arg1 maxLimitingSeries:(int)arg2 ;
+(float)chartSeriesDepth;
+(char)supportsChartSeriesDepthOffset;
+(id)chartSeriesType;
+(float)chartSeriesPolygonOffset;
-(id)areaClipPlaneEffect;
-(float)depthForScene:(id)arg1 ;
-(void)sortElements:(vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> >*)arg1 pipeline:(id)arg2 ;
-(char)transparencyDepthMask;
@end
