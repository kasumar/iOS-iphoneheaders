/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _UILegibilitySettings, UIImage;

@interface _UILegibilityCachedShadow : NSObject {

	_UILegibilitySettings* _settings;
	double _strength;
	UIImage* _shadow;

}

@property (nonatomic,retain) _UILegibilitySettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) double strength;                               //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) UIImage * shadow;                              //@synthesize shadow=_shadow - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(void)setSettings:(id)arg1 ;
-(id)settings;
-(double)strength;
-(bool)matchesSettings:(id)arg1 strength:(double)arg2 ;
-(void)setStrength:(double)arg1 ;
-(id)shadow;
-(void)setShadow:(id)arg1 ;
@end
