/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString;

@interface _MKLegendString : CALayer {

	NSAttributedString* string;
	double halfWidth;

}

@property (nonatomic,retain) NSAttributedString * string; 
@property (assign,nonatomic) double halfWidth; 
-(double)halfWidth;
-(void)setHalfWidth:(double)arg1 ;
-(id)init;
-(NSAttributedString *)string;
-(id)actionForKey:(id)arg1 ;
-(void)setString:(NSAttributedString *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

