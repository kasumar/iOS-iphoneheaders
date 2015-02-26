/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class OADStyleMatrixReference, OADFontReference;

@interface OADShapeStyle : NSObject <NSCopying> {

	OADStyleMatrixReference* mLineReference;
	OADStyleMatrixReference* mFillReference;
	OADStyleMatrixReference* mEffectReference;
	OADFontReference* mFontReference;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 ;
-(void)applyToTextBody:(id)arg1 ;
-(void)setLineReference:(id)arg1 ;
-(void)setFillReference:(id)arg1 ;
-(void)setEffectReference:(id)arg1 ;
-(void)setFontReference:(id)arg1 ;
-(void)applyToTextListStyle:(id)arg1 ;
-(void)applyToParagraphProperties:(id)arg1 ;
-(void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 useNull:(BOOL)arg3 strokeWidthMultiplier:(float)arg4 ;
-(id)lineReference;
-(void)setLineMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(id)fillReference;
-(void)setFillMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(id)effectReference;
-(void)setEffectMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(id)fontReference;
@end
