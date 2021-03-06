/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDSmartStroke.h>

@interface TSDCalligraphyStroke : TSDSmartStroke
+(Class)mutableClass;
-(void)applyToContext:(CGContextRef)arg1 insideStroke:(bool)arg2 ;
-(CGRect)boundsForLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(CGAffineTransform)arg5 ;
-(id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6 ;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(bool)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(bool)arg4 ;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 useFastDrawing:(bool)arg6 ;
-(bool)canApplyToCAShapeLayer;
-(bool)drawsOutsideStrokeBounds;
-(CGRect)boundsForPath:(id)arg1 ;
-(bool)prefersToApplyToCAShapeLayerDuringManipulation;
-(bool)drawsInOneStep;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7 ;
-(bool)chisel;
-(CGAffineTransform)transformInContext:(CGContextRef)arg1 ;
-(double)scale;
-(id)copyWithZone:(NSZone)arg1 ;
-(double)angle;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
@end

