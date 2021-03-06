/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CoreUI : NSObject
+(void)_changeToLookGradation:(long long)arg1 forceRedraw:(BOOL)arg2 ;
+(void)changeToLookGradation:(long long)arg1 ;
+(long long)currentLookGradation;
+(long long)maximumLookGradation;
+(void)changeToLook:(themelook*)arg1 ;
+(themelook*)currentSystemThemeLook;
+(void)_setCurrentSystemThemeLook:(themelook*)arg1 ;
+(void)_updateMenuBarDrawingStyleForLook:(themelook*)arg1 ;
+(BOOL)_isCurrentLook:(themelook*)arg1 ;
+(long long)lookCongruencyForObject:(id)arg1 ;
+(void)_invalidateVisibleWindows;
+(id)_themeLookDelegate;
+(void)_setThemeLookDelegate:(id)arg1 ;
+(BOOL)_hasDarkMenuBarForLook:(themelook*)arg1 ;
+(BOOL)defaultExistsForKey:(id)arg1 ;
+(id)stringForDefaultsKey:(id)arg1 ;
+(void)_determineCompatibilityMode;
+(void)setValue:(id)arg1 forDefaultsKey:(id)arg2 ;
+(id)defaultsDomainName;
+(long long)integerForDefaultsKey:(id)arg1 ;
+(void)_setCustomLookDelegate:(id)arg1 ;
+(BOOL)boolForDefaultsKey:(id)arg1 ;
+(void)setBool:(BOOL)arg1 forDefaultsKey:(id)arg2 ;
+(BOOL)_isInIBCocoaSimulator;
+(void)install;
+(id)_customLookDelegate;
+(void)installForCustomLook:(id)arg1 ;
+(id)versionCreditsString;
+(BOOL)isSharedCacheSizeTestEnabled;
@end

