/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSAttributedString;

@interface _UILabelScaledMetrics : NSObject {

	float _actualScaleFactor;
	float _baselineOffset;
	float _scaledBaselineOffset;
	float _scaledLineHeight;
	NSAttributedString* _scaledAttributedText;
	CGSize _targetSize;
	CGSize _scaledSize;

}

@property (assign,nonatomic) CGSize targetSize;                                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGSize scaledSize;                                      //@synthesize scaledSize=_scaledSize - In the implementation block
@property (assign,nonatomic) float actualScaleFactor;                                //@synthesize actualScaleFactor=_actualScaleFactor - In the implementation block
@property (assign,nonatomic) float baselineOffset;                                   //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) float scaledBaselineOffset;                             //@synthesize scaledBaselineOffset=_scaledBaselineOffset - In the implementation block
@property (assign,nonatomic) float scaledLineHeight;                                 //@synthesize scaledLineHeight=_scaledLineHeight - In the implementation block
@property (nonatomic,retain) NSAttributedString * scaledAttributedText;              //@synthesize scaledAttributedText=_scaledAttributedText - In the implementation block
-(void)dealloc;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(CGSize)scaledSize;
-(void)setScaledSize:(CGSize)arg1 ;
-(float)actualScaleFactor;
-(void)setActualScaleFactor:(float)arg1 ;
-(float)baselineOffset;
-(void)setBaselineOffset:(float)arg1 ;
-(float)scaledBaselineOffset;
-(void)setScaledBaselineOffset:(float)arg1 ;
-(float)scaledLineHeight;
-(void)setScaledLineHeight:(float)arg1 ;
-(NSAttributedString *)scaledAttributedText;
-(void)setScaledAttributedText:(NSAttributedString *)arg1 ;
@end

