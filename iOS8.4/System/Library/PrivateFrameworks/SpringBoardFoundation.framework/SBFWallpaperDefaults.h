/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@interface SBFWallpaperDefaults : NSObject
+(id)defaults;
-(id)description;
-(BOOL)supportsCroppingForVariant:(long long)arg1 ;
-(CGRect)cropRectForVariant:(long long)arg1 ;
-(double)parallaxFactorForVariant:(long long)arg1 ;
-(double)zoomScaleForVariant:(long long)arg1 ;
-(BOOL)isPortraitForVariant:(long long)arg1 ;
-(void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2 ;
-(void)setCropRect:(CGRect)arg1 forLocations:(long long)arg2 ;
-(void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2 ;
-(BOOL)magnifyEnabledForVariant:(long long)arg1 ;
-(void)setMagnifyEnabled:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setZoomScale:(double)arg1 forLocations:(long long)arg2 ;
-(void)resetParallaxFactorDefaults;
-(void)resetZoomScaleDefaults;
-(void)resetCroppingDefaults;
-(void)resetMagnifyDefaults;
-(void)setSupportsCropping:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setPortrait:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setName:(id)arg1 forLocations:(long long)arg2 ;
-(void)resetDefaults;
-(void)resetPortraitDefaults;
-(void)resetNameDefaults;
-(id)nameForVariant:(long long)arg1 ;
@end

