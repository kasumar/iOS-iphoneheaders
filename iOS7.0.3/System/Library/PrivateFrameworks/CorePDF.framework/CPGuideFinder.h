/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPZone, CPCluster, NSMutableArray;

@interface CPGuideFinder : NSObject <CPDisposable> {

	CPZone* contentZone;
	unsigned countOfWordsInZone;
	double* anchorArray;
	double* rightHandSideArray;
	SCD_Struct_CP29* crossingWordArray;
	CPCluster* anchors;
	CPCluster* rightHandSides;
	float medianFontSizeOfFirstCharacter;
	float medianFontSizeOfLastCharacter;
	NSMutableArray* gutters;
	NSMutableArray* leftGuides;
	NSMutableArray* rightGuides;

}
+(BOOL)gutterSeparates:(id)arg1 from:(id)arg2 ;
+(void)reclusterPreservingAlignment:(id)arg1 ;
+(void)reclusterBetweenGuides:(id)arg1 ;
+(BOOL)guideSeparates:(id)arg1 from:(id)arg2 ;
-(void)dealloc;
-(void)dispose;
-(id)leftGuides;
-(id)rightGuides;
-(id)gutters;
-(id)initWithContentZone:(id)arg1 ;
-(void)findGutters;
-(void)findGuides;
-(void)markTextLines;
-(void)splitTextLines;
-(BOOL)addStripTo:(id)arg1 bottom:(float)arg2 left:(float)arg3 top:(float)arg4 right:(float)arg5 ;
-(void)setAlignForWordWithExtent:(SCD_Struct_CP29*)arg1 stripArray:(id)arg2 stripMax:(double)arg3 ;
-(void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(SCD_Struct_CP29*)arg4 ofCount:(unsigned)arg5 crossedBy:(SCD_Struct_CP29*)arg6 ofCount:(unsigned)arg7 ;
-(void)getWordEdges;
-(void)findWordEdgeClusters;
-(void)subdivideGutterFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)subdivideLeftGuideAt:(unsigned)arg1 ;
-(void)subdivideRightGuideAt:(unsigned)arg1 ;
-(BOOL)hasGutters;
-(BOOL)hasLeftGuides;
-(BOOL)hasRightGuides;
-(void)splitTextLinesAtBorderWords;
-(void)splitTextLinesBetweenBorderWords;
-(float)medianFontSizeOfFirstCharacter;
-(float)medianFontSizeOfLastCharacter;
-(void)finalize;
@end

