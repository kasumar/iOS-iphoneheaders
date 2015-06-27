/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {

	WDTableProperties* mTableProperties;
	WDCharacterProperties* mCharacterProperties;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD101 mOriginalProperties;
	SCD_Struct_WD101 mTrackedProperties;

}
-(void)addProperties:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long)height;
-(id)initWithDocument:(id)arg1 ;
-(void)setHeight:(long)arg1 ;
-(void)setHeader:(char)arg1 ;
-(char)header;
-(id)characterProperties;
-(char)isHeightOverridden;
-(id)tableProperties;
-(void)setResolveMode:(int)arg1 ;
-(int)resolveMode;
-(void)setWidthBefore:(short)arg1 ;
-(void)setWidthBeforeType:(int)arg1 ;
-(void)setWidthAfter:(short)arg1 ;
-(void)setWidthAfterType:(int)arg1 ;
-(void)setHeightType:(int)arg1 ;
-(char)isWidthBeforeOverridden;
-(short)widthBefore;
-(char)isWidthBeforeTypeOverridden;
-(int)widthBeforeType;
-(char)isWidthAfterOverridden;
-(short)widthAfter;
-(char)isWidthAfterTypeOverridden;
-(int)widthAfterType;
-(char)isHeaderOverridden;
-(char)isHeightTypeOverridden;
-(int)heightType;
-(void)addPropertiesValues:(SCD_Struct_WD101*)arg1 to:(SCD_Struct_WD101*)arg2 ;
@end
