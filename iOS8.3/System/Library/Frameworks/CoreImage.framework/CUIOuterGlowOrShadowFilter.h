/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:43:12 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIOuterGlowOrShadowFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputOffset;
	NSNumber* inputRange;
	NSNumber* inputRadius;
	NSNumber* inputSize;
	NSNumber* inputSpread;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputOffset; 
@property (nonatomic,retain) NSNumber * inputRange; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputSpread; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(id)_kernel;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputSize:(NSNumber *)arg1 ;
-(NSNumber *)inputSize;
-(void)setInputOffset:(CIVector *)arg1 ;
-(void)setInputRange:(NSNumber *)arg1 ;
-(CIVector *)inputOffset;
-(NSNumber *)inputRange;
-(void)setInputSpread:(NSNumber *)arg1 ;
-(NSNumber *)inputSpread;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end
