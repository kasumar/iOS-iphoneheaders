/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/RTF_CMArchiveManager.h>

@class NSMutableDictionary, NSMutableString;

@interface RTF_CMProgressiveArchiveManager : RTF_CMArchiveManager {

	const void* mClient;
	SCD_Struct_RT1* mCallBacks;
	NSMutableDictionary* mDataCache;
	NSMutableDictionary* mStyleCache;
	NSMutableString* mCssString;
	bool mMainDataInited;
	NSMutableString* mHtmlLogString;

}
-(id)newResourceWithName:(id)arg1 ;
-(void)dealloc;
-(void)pushText:(id)arg1 toPath:(id)arg2 ;
-(void)pushCssToPath:(id)arg1 ;
-(void)commitDataAtPath:(id)arg1 ;
-(void)closeResourceAtPath:(id)arg1 ;
-(void)pushData:(id)arg1 toPath:(id)arg2 ;
-(id)addCssStyle:(id)arg1 ;
-(void)addCssStyle:(id)arg1 withName:(id)arg2 ;
-(id)cssStylesheetString;
-(bool)isProgressive;
-(id)initWithClient:(const void*)arg1 andCallBacks:(SCD_Struct_RT1*)arg2 ;
@end

