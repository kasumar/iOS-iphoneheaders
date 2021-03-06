/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView;

@interface MusicNowPlayingAtmosphericEffectView : UIView {

	long long _effect;
	_UIBackdropView* _backdropView;
	UIView* _blendModeTintView;
	UIView* _colorTintView;

}

@property (assign,nonatomic) long long effect;                            //@synthesize effect=_effect - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * blendModeTintView;                  //@synthesize blendModeTintView=_blendModeTintView - In the implementation block
@property (nonatomic,retain) UIView * colorTintView;                      //@synthesize colorTintView=_colorTintView - In the implementation block
+(Class)tintViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)effect;
-(void)setEffect:(long long)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(UIView *)colorTintView;
-(void)setColorTintView:(UIView *)arg1 ;
-(void)_updateEffect;
-(UIView *)blendModeTintView;
-(void)setBlendModeTintView:(UIView *)arg1 ;
@end

