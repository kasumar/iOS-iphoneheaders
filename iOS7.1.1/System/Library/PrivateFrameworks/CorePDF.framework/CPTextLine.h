/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPTextObject.h>
#import <CorePDF/CPDisposable.h>

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable> {

	CPCharSequence* charSequence;
	SCD_Struct_CP16* wordArray;
	unsigned wordCount;
	CPInlineContainer* inlineList;
	int lineNumber;
	int columnNumber;
	double baseline;
	bool baseLineIsNull;
	bool hasBeenSplit;
	bool hasBeenProcessed;
	bool maySplit;
	bool hasTabs;
	NSArray* columnBreaks;
	NSArray* xsegments;
	int levels;
	float maximumLetterGap;
	float maximumWordGap;
	int tabsBefore;
	bool irregular;
	unsigned leftSpacerIndex;
	unsigned rightSpacerIndex;
	bool isListItem;
	unsigned listSpacerIndex;
	bool lineBreakAfter;
	CPPDFStyle* uniformStyle;
	unsigned short uniformStyleFlags;
	double monospaceWidth;
	unsigned* spacesBefore;
	bool disposed;

}

@property (assign,nonatomic) unsigned leftSpacerIndex; 
@property (assign,nonatomic) unsigned rightSpacerIndex; 
@property (assign,nonatomic) bool isListItem; 
@property (assign,nonatomic) unsigned listSpacerIndex; 
@property (assign,nonatomic) bool lineBreakAfter; 
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)properties;
-(CGPoint)anchor;
-(id)attributes;
-(long long)zOrder;
-(void)fitBoundsToChildren;
-(void)accept:(id)arg1 ;
-(void)translateObjectYBy:(double)arg1 ;
-(void)dispose;
-(bool)isIndivisible;
-(bool)isMonospaced;
-(unsigned)inlineCount;
-(bool)styleIsUniform:(CPPDFStyle*)arg1 styleFlags:(unsigned short)arg2 ;
-(id)charSequence;
-(double)monospaceWidth;
-(bool)hasDropCap;
-(SCD_Struct_CP16*)wordAtIndex:(unsigned)arg1 ;
-(CPInlineContainer*)inlineList;
-(unsigned)spacesBeforeWordAtIndex:(unsigned)arg1 ;
-(bool)lineBreakAfter;
-(SCD_Struct_CP16*)firstWord;
-(SCD_Struct_CP16*)lastWord;
-(void)setCharSequence:(id)arg1 ;
-(SCD_Struct_CP16*)wordArrayOfSize:(unsigned)arg1 ;
-(void)recomputeLevels;
-(id)newTextLineFromWordAt:(unsigned)arg1 lengthInWords:(unsigned)arg2 ;
-(void)recomputeBaseline;
-(bool)overlapsHorizontally:(CGRect)arg1 ;
-(bool)mapToWordsWithIndex:(/*function pointer*/ void*)arg1 passing:(void*)arg2 ;
-(SCD_Struct_CP16*)wordArray;
-(CGRect)boundsOfWordAtIndex:(unsigned)arg1 ;
-(void)anchorChunk:(id)arg1 atWordIndex:(unsigned)arg2 ;
-(bool)hasJustifiedAlignment;
-(bool)changesFontAt:(id)arg1 ;
-(bool)removeTextLines:(id)arg1 whereTrue:(/*function pointer*/ void*)arg2 passing:(void*)arg3 ;
-(bool)mapToWords:(/*function pointer*/ void*)arg1 passing:(void*)arg2 ;
-(bool)mapToWordPairs:(/*function pointer*/ void*)arg1 passing:(void*)arg2 ;
-(bool)mapToWordPairsWithIndex:(/*function pointer*/ void*)arg1 passing:(void*)arg2 ;
-(void)setHasBeenSplit:(bool)arg1 ;
-(bool)hasBeenSplit;
-(void)setHasBeenProcessed:(bool)arg1 ;
-(bool)hasBeenProcessed;
-(id)columnBreaks;
-(void)setColumnBreaks:(id)arg1 ;
-(void)setHasTabs:(bool)arg1 ;
-(bool)hasTabs;
-(void)setTabsBefore:(int)arg1 ;
-(int)tabsBefore;
-(long long)baseLineAscending:(id)arg1 ;
-(long long)baseLineDescending:(id)arg1 ;
-(bool)overlapsWith:(id)arg1 ;
-(bool)hyphenated;
-(void)setBaselineToNull;
-(void)setSpaces:(unsigned)arg1 beforeWordAtIndex:(unsigned)arg2 ;
-(int)levels;
-(void)setLevels:(int)arg1 ;
-(float)maximumLetterGap;
-(void)setMaximumLetterGap:(float)arg1 ;
-(float)maximumWordGap;
-(void)setMaximumWordGap:(float)arg1 ;
-(bool)irregular;
-(void)setIrregular:(bool)arg1 ;
-(long long)topIsAbove:(id)arg1 ;
-(double)medianFontSize;
-(unsigned)leftSpacerIndex;
-(void)setLeftSpacerIndex:(unsigned)arg1 ;
-(unsigned)rightSpacerIndex;
-(void)setRightSpacerIndex:(unsigned)arg1 ;
-(void)setIsListItem:(bool)arg1 ;
-(unsigned)listSpacerIndex;
-(void)setListSpacerIndex:(unsigned)arg1 ;
-(void)setLineBreakAfter:(bool)arg1 ;
-(bool)isListItem;
-(double)baseline;
-(void)setBaseline:(double)arg1 ;
-(void)finalize;
-(int)align;
-(unsigned)wordCount;
@end

