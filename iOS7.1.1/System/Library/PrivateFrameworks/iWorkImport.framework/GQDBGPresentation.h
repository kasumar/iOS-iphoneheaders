/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDRoot.h>

@interface GQDBGPresentation : GQDRoot {

	CFArrayRef mThemes;
	CGSize mSlideSize;

}
+(id)parseNumberOutOfBasename:(id)arg1 returningNumber:(int*)arg2 ;
+(xmlNs*)appNamespace;
+(void)initialize;
-(CFStringRef)createUpgradedAppBundleResourcePath:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(void)loadAppBundleResourceToColorMap;
-(void)addTheme:(id)arg1 ;
-(id)colorForMissingAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(void)initializeAppBundleResourcesUrl;
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(CGSize)slideSize;
-(CFArrayRef)themes;
@end

