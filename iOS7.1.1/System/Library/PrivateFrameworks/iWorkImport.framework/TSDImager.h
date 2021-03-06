/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCanvasDelegate.h>

@class NSArray, TSKDocumentRoot, TSDCanvas;

@interface TSDImager : NSObject <TSDCanvasDelegate> {

	NSArray* mInfos;
	CGColorRef mBackgroundColor;
	CGRect mUnscaledClipRect;
	double mViewScale;
	CGSize mScaledImageSize;
	CGSize mMaximumScaledImageSize;
	bool mUseScaledImageSize;
	bool mDistortedToMatch;
	bool mImageMustHaveEvenDimensions;
	bool mShouldReuseBitmapContext;
	UIEdgeInsets mContentInset;
	TSKDocumentRoot* mDocumentRoot;
	TSDCanvas* mCanvas;
	CGRect mActualScaledClipRect;
	bool mDrawingIntoPDF;
	bool mIsPrinting;
	CGContextRef mReusableBitmapContext;
	CGRect mReusableBounds;
	CGRect mReusableIntegralBounds;
	CGRect mReusableActualScaledClipRect;
	CGSize mReusableScaledImageSize;
	/*^block*/ id mPostRenderAction;

}

@property (nonatomic,retain) NSArray * infos; 
@property (assign,nonatomic) CGColorRef backgroundColor; 
@property (assign,nonatomic) CGRect unscaledClipRect; 
@property (assign,nonatomic) double viewScale; 
@property (assign,nonatomic) CGSize scaledImageSize; 
@property (assign,nonatomic) CGSize maximumScaledImageSize; 
@property (assign,nonatomic) bool distortedToMatch; 
@property (assign,nonatomic) bool imageMustHaveEvenDimensions; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (nonatomic,readonly) CGRect actualScaledClipRect; 
@property (assign,nonatomic) bool shouldReuseBitmapContext; 
@property (assign,nonatomic) bool isPrinting; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(double)viewScale;
-(CGRect)unscaledClipRect;
-(void)setInfos:(id)arg1 ;
-(void)setPostRenderAction:(/*^block*/ id)arg1 ;
-(void)setUnscaledClipRect:(CGRect)arg1 ;
-(bool)drawPageInContext:(CGContextRef)arg1 createPage:(bool)arg2 ;
-(bool)isPrinting;
-(id)infos;
-(void)setScaledImageSize:(CGSize)arg1 ;
-(bool)isPrintingCanvas;
-(CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1 ;
-(bool)isCanvasDrawingIntoPDF:(id)arg1 ;
-(bool)p_configureCanvas;
-(bool)shouldReuseBitmapContext;
-(CGImageRef)p_newImageInReusableContext;
-(void)p_drawPageInContext:(CGContextRef)arg1 createPage:(bool)arg2 ;
-(CGSize)scaledImageSize;
-(CGSize)maximumScaledImageSize;
-(void)setMaximumScaledImageSize:(CGSize)arg1 ;
-(id)pdfData;
-(CGRect)actualScaledClipRect;
-(bool)distortedToMatch;
-(void)setDistortedToMatch:(bool)arg1 ;
-(bool)imageMustHaveEvenDimensions;
-(void)setImageMustHaveEvenDimensions:(bool)arg1 ;
-(void)setShouldReuseBitmapContext:(bool)arg1 ;
-(void)setIsPrinting:(bool)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)documentRoot;
-(void)setViewScale:(double)arg1 ;
-(CGImageRef)newImage;
@end

