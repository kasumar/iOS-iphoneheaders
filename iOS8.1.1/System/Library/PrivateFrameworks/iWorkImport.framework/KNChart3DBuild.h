/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNCustomFrameBuildAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>
#import <iWorkImport/TSCH3DChartAnimationPlugin.h>

@class TSDGLLayer, NSString;

@interface KNChart3DBuild : KNAnimationEffect <KNCustomFrameBuildAnimator, KNAnimationPluginArchiving, TSCH3DChartAnimationPlugin> {

	CGRect mDrawingFrame;
	TSDGLLayer* mGLLayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(BOOL)requiresSingleTexturePerStage;
+(id)defaultAttributes;
+(id)animationName;
-(int)chartAnimationType;
-(double)animationFPS;
-(id)GLLayer;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(id)animationInfoForAnimatedBuild:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(int)p_buildTypeForAnimatedBuild:(id)arg1 ;
-(CGAffineTransform)p_transformByApplyingTransform:(CGAffineTransform)arg1 centeredAtPoint:(CGPoint)arg2 ;
-(id)p_repFromContext:(id)arg1 ;
-(unsigned long long)p_deliveryStyleFromAnimatedBuild:(id)arg1 ;
-(CGAffineTransform)p_transformForAttributes:(id)arg1 rep:(id)arg2 ;
-(double)p_scaleForAttributes:(id)arg1 ;
-(void)p_applyAttributes:(id)arg1 forRep:(id)arg2 animationLayer:(id)arg3 ;
-(id)layerWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(void)dealloc;
@end

