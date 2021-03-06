/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMProperty.h>
#import <CoreFoundation/NSCopying.h>

@class EDBorders, TSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {

	EDBorders* edValue;
	TSUColor* mBorderColor;
	TSUColor* mBorderTopColor;
	TSUColor* mBorderLeftColor;
	TSUColor* mBorderBottomColor;
	TSUColor* mBorderRightColor;
	int mBorderStyle[5];
	int mBorderWidth[5];

}
-(id)styleString;
-(id)widthString;
-(id)colorString;
-(id)stringFromStyleEnum:(int)arg1 ;
-(id)stringFromWidthEnum:(int)arg1 ;
-(id)stringFromColor:(id)arg1 ;
-(bool)hasSameColorsAs:(id)arg1 ;
-(bool)hasSameStylesAs:(id)arg1 ;
-(bool)hasSameWidthsAs:(id)arg1 ;
-(void)setBorderStyleAndWidth:(int)arg1 location:(unsigned)arg2 ;
-(id)styleHashNumber;
-(id)widthHashNumber;
-(bool)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)borderColor;
-(id)cssStringForName:(id)arg1 ;
-(id)initWithOADStroke:(id)arg1 ;
-(id)cssString;
-(bool)isNoneAtLocation:(int)arg1 ;
-(void)setNoneAtLocation:(int)arg1 ;
-(id)initWithEDBorders:(id)arg1 ;
-(int*)borderStyles;
-(int*)borderWidths;
@end

