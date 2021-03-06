/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:42:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CIGaussianGradient : CIFilter {

	CIVector* inputCenter;
	CIColor* inputColor0;
	CIColor* inputColor1;
	NSNumber* inputRadius;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
@property (nonatomic,retain) NSNumber * inputRadius; 
+(id)customAttributes;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(id)_kernel;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(void)setInputColor0:(CIColor *)arg1 ;
-(void)setInputColor1:(CIColor *)arg1 ;
-(CIColor *)inputColor0;
-(CIColor *)inputColor1;
-(void)setDefaults;
-(id)outputImage;
@end

