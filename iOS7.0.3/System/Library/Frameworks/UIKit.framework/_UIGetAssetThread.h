/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSURL, ALAssetsLibrary, NSCondition, ALAsset;

@interface _UIGetAssetThread : NSThread {

	NSURL* _url;
	ALAssetsLibrary* _library;
	NSCondition* _condition;
	ALAsset* _asset;

}

@property (retain) NSCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (retain) ALAsset * asset;                      //@synthesize asset=_asset - In the implementation block
-(void)dealloc;
-(void)main;
-(void)setAsset:(id)arg1 ;
-(id)condition;
-(id)initWithURL:(id)arg1 assetsLibrary:(id)arg2 ;
-(id)asset;
-(void)setCondition:(id)arg1 ;
@end
