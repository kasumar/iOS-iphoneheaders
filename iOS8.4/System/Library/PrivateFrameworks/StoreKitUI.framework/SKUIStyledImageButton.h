/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class SKUIImageView;

@interface SKUIStyledImageButton : UIControl {

	BOOL _didInitialHighlightForTouch;
	SKUIImageView* _imageView;
	SKUIImageView* _additionalImageView;
	UIEdgeInsets _bigHitInsets;
	BOOL _useBigHitTarget;
	UIEdgeInsets _hitRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets bigHitInsets;                          //@synthesize bigHitInsets=_bigHitInsets - In the implementation block
@property (nonatomic,readonly) SKUIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) SKUIImageView * additionalImageView;              //@synthesize additionalImageView=_additionalImageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                         //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) BOOL useBigHitTarget;                               //@synthesize useBigHitTarget=_useBigHitTarget - In the implementation block
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitRectInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(void)setHighlighted:(BOOL)arg1 ;
-(SKUIImageView *)imageView;
-(UIEdgeInsets)bigHitInsets;
-(void)setBigHitInsets:(UIEdgeInsets)arg1 ;
-(BOOL)useBigHitTarget;
-(void)setUseBigHitTarget:(BOOL)arg1 ;
-(SKUIImageView *)additionalImageView;
@end
