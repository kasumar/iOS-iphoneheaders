/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds : NSObject {

	int mLabelType;
	int mKnobsMode;
	NSMutableArray* mLabelsBounds;

}

@property (nonatomic,readonly) int labelType; 
@property (nonatomic,readonly) int knobsMode; 
+(id)boundsWithLabelType:(int)arg1 knobsMode:(int)arg2 ;
-(int)labelType;
-(void)mergeBoundsIntoProjectedPoints:(id)arg1 ;
-(void)addNewBoundsArray;
-(void)addBounds:(CGRect)arg1 ;
-(int)knobsMode;
-(id)initWithLabelType:(int)arg1 knobsMode:(int)arg2 ;
-(BOOL)p_isHorizontal;
-(CGPoint)p_minPoint:(CGPoint)arg1 otherPoint:(CGPoint)arg2 ;
-(CGPoint)p_maxPoint:(CGPoint)arg1 otherPoint:(CGPoint)arg2 ;
-(BOOL)p_hasExtentPointsForBounds:(id)arg1 returningMinPoint:(CGPoint*)arg2 maxPoint:(CGPoint*)arg3 ;
-(void)dealloc;
@end

