/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface _SLSheetMaskLayer : CALayer {

	float _clipCornerRadius;
	UIColor* _clipBackgroundColor;

}

@property (assign,nonatomic) float clipCornerRadius;                     //@synthesize clipCornerRadius=_clipCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * clipBackgroundColor;              //@synthesize clipBackgroundColor=_clipBackgroundColor - In the implementation block
-(float)clipCornerRadius;
-(UIColor *)clipBackgroundColor;
-(void)setClipCornerRadius:(float)arg1 ;
-(void)setClipBackgroundColor:(UIColor *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

