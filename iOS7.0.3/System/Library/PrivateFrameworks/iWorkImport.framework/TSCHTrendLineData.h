/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCHChartSeries, TSURegressionModel, TSDBezierPath, NSString;

@interface TSCHTrendLineData : NSObject <TSCHUnretainedParent> {

	TSCHChartSeries* mSeries;
	int mLineType;
	BOOL mShowTrendLine;
	TSURegressionModel* mRegression;
	double mMaxYValue;
	double mMinYValue;
	double mMaxXValue;
	double mMinXValue;
	int mInputAxisType;
	int mOutputAxisType;
	BOOL mTrendLineInvalid;
	TSDBezierPath* mCachedTrendLinePath;
	CGRect mCachedChartFrame;
	double mOffsetInBody;
	BOOL mCachedChartVertical;

}

@property (nonatomic,readonly) BOOL showTrendLine; 
@property (nonatomic,readonly) BOOL showTrendLineLegendText; 
@property (nonatomic,readonly) BOOL showEquation; 
@property (nonatomic,readonly) BOOL showRSquared; 
@property (nonatomic,readonly) NSString * trendLineLegendText; 
@property (nonatomic,readonly) NSString * rSquaredText; 
@property (nonatomic,readonly) float equationTextOpacity; 
@property (nonatomic,readonly) float rSquaredTextOpacity; 
-(void)clearParent;
-(id)initWithSeries:(id)arg1 ;
-(BOOL)showTrendLineLegendText;
-(id)trendLineLegendText;
-(void)invalidateData;
-(BOOL)showTrendLine;
-(double)minValueForAxisID:(id)arg1 ;
-(double)maxValueForAxisID:(id)arg1 ;
-(void)p_releaseCache;
-(void)p_updateTrendLineData;
-(void)trendLineUnitSpacePoints:(/*function pointer*/ void**)arg1 count:(unsigned*)arg2 drawCurve:(BOOL*)arg3 maxPoints:(unsigned)arg4 ;
-(SCD_Struct_TS447)p_unitPoint:(SCD_Struct_TS447)arg1 toScreenFrame:(CGRect)arg2 offset:(double)arg3 vertical:(BOOL)arg4 ;
-(void)p_calcBoundsWithRange:(double)arg1 maxXValue:(double)arg2 ;
-(void)p_calcBoundsForMovingAverage;
-(id)p_dataPointValues;
-(unsigned)p_fillArrayX:(id)arg1 andY:(id)arg2 fromPoints:(id)arg3 ;
-(void)p_calcMARegression:(unsigned)arg1 xData:(id)arg2 yData:(id)arg3 ;
-(unsigned)p_fillArrayX:(double*)arg1 andY:(double*)arg2 fromPoints:(id)arg3 hasNegativeX:(BOOL*)arg4 ;
-(void)p_calcRegression:(unsigned)arg1 xData:(double*)arg2 yData:(double*)arg3 ;
-(int)p_getTrendLineType;
-(void)p_generateRegression;
-(BOOL)showEquation;
-(BOOL)showRSquared;
-(id)rSquaredText;
-(float)equationTextOpacity;
-(float)rSquaredTextOpacity;
-(CFAttributedStringRef)newEquationAttributedString;
-(id)trendLinePathForChartRect:(CGRect)arg1 offsetInBody:(double)arg2 vertical:(BOOL)arg3 ;
-(id)p_equationStorageWithText:(id)arg1 ;
-(void)dealloc;
-(void)updateIfNeeded;
@end

