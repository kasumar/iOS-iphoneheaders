/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, OADDrawable;

@interface WDOfficeArt : WDRun {

	WDCharacterProperties* mProperties;
	OADDrawable* mDrawable;
	BOOL mFloating;

}
+(int)textBoxTextTypeForRegularTextType:(int)arg1 ;
-(void)checkForFloating:(id)arg1 ;
-(BOOL)isFloating;
-(void)clearProperties;
-(void)dealloc;
-(void)setFloating:(BOOL)arg1 ;
-(void)setProperties:(id)arg1 ;
-(id)properties;
-(id)imageData;
-(BOOL)isDrawableOverridden;
-(id)drawable;
-(int)runType;
-(void)setDrawable:(id)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2 ;
-(id)overrideDrawable;
-(void)clearDrawable;
-(id)imageBlipRef;
-(void)setImageBlipRef:(id)arg1 ;
-(void)propagateTextTypeToDrawables;
-(id)imageName;
@end
