/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDFrameSpec;

@interface TSDFrameImageCacheEntry : NSObject {

	TSDFrameSpec* mFrameSpec;
	double mAssetScale;
	CGSize mSize;
	double mViewScale;
	CGImage* mImages[4];

}

@property (assign,nonatomic) TSDFrameSpec * frameSpec; 
@property (assign,nonatomic) double assetScale; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double viewScale; 
-(double)viewScale;
-(void)setAssetScale:(double)arg1 ;
-(id)frameSpec;
-(double)assetScale;
-(CGImageRef)newImageForCALayer:(bool)arg1 mask:(bool)arg2 ;
-(void)setImage:(CGImageRef)arg1 forCALayer:(bool)arg2 mask:(bool)arg3 ;
-(void)setFrameSpec:(id)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setViewScale:(double)arg1 ;
@end

