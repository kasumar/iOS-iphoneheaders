/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UIKeyboardCandidatePocketShadow : UIView {

	BOOL _shadowFadesToBottom;
	BOOL _drawsShadow;
	double _shadowHeightGrowthFactor;

}

@property (assign,nonatomic) double shadowHeightGrowthFactor;              //@synthesize shadowHeightGrowthFactor=_shadowHeightGrowthFactor - In the implementation block
@property (assign,nonatomic) BOOL shadowFadesToBottom;                     //@synthesize shadowFadesToBottom=_shadowFadesToBottom - In the implementation block
@property (assign,nonatomic) BOOL drawsShadow;                             //@synthesize drawsShadow=_drawsShadow - In the implementation block
+(double)width;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setShadowHeightGrowthFactor:(double)arg1 ;
-(void)setShadowFadesToBottom:(BOOL)arg1 ;
-(void)setDrawsShadow:(BOOL)arg1 ;
-(BOOL)shadowFadesToBottom;
-(BOOL)drawsShadow;
-(double)shadowHeightGrowthFactor;
@end

