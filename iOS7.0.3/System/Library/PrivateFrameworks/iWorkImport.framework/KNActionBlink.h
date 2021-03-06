/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNActionEffectBuildAnimator.h>

@class KNAnimParameterGroup;

@interface KNActionBlink : KNAnimationEffect <KNActionEffectBuildAnimator> {

	KNAnimParameterGroup* _parameterGroup;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(id)actionEffectStyle;
+(id)applyActionEffect:(id)arg1 toAttributes:(id)arg2 ;
+(id)customAttributes;
+(id)defaultAttributes;
+(id)animationName;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)p_addAnimationToLayer:(id)arg1 blinkCount:(float)arg2 duration:(double)arg3 minOpacity:(float)arg4 decreaseOpacityTiming:(id)arg5 increaseOpacityTiming:(id)arg6 result:(id)arg7 ;
-(id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5 ;
-(void)dealloc;
@end

