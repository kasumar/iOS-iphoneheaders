/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIColor, NSNumber;

@interface CIColorBalance : CIFilter {

	CIImage* inputImage;
	CIColor* inputColor;
	NSNumber* inputStrength;
	NSNumber* inputWarmth;
	NSNumber* inputDamping;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputStrength; 
@property (nonatomic,retain) NSNumber * inputWarmth; 
@property (nonatomic,retain) NSNumber * inputDamping; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernel;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(void)setInputWarmth:(NSNumber *)arg1 ;
-(NSNumber *)inputWarmth;
-(void)setInputDamping:(NSNumber *)arg1 ;
-(NSNumber *)inputDamping;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end

