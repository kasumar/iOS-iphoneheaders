/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSCache, NSDictionary, NSMutableDictionary;

@interface VKShieldArtwork : NSObject {

	float _scale;
	NSCache* _imageCache;
	NSDictionary* _stringAttributes;
	CGColorRef _shadowColor;
	CGSize _shadowOffset;
	float _shadowRadius;
	float _textCenterOffsetX;
	float _textBaseline;
	CTFontRef _nonDigitFont;
	CGPoint _center;
	NSMutableDictionary* _textSpecificArtworks;
	CGContextRef _templateContext;
	/*^block*/id _newContext;
	CGImageRef _backgroundImage;
	VKEdgeInsets _resizableInfo;
	char _resizable;
	float _lineHeight;
	float _lineSpacing;

}

@property (nonatomic,readonly) float scale;              //@synthesize scale=_scale - In the implementation block
-(void)dealloc;
-(float)scale;
-(id)_initWithBackgroundImage:(CGImageRef)arg1 contentScale:(float)arg2 resizableInfo:(VKEdgeInsets*)arg3 font:(CTFontRef)arg4 nonDigitFont:(CTFontRef)arg5 textColor:(CGColorRef)arg6 textCenterOffsetX:(float)arg7 textBaseline:(float)arg8 textStrokeWidth:(float)arg9 textStrokeColor:(CGColorRef)arg10 textShadowOffset:(CGSize)arg11 textShadowRadius:(float)arg12 textShadowColor:(CGColorRef)arg13 lineSpacing:(float)arg14 ;
-(id)imageWithShieldText:(id)arg1 allowMultiline:(char)arg2 ;
-(CGImageRef)newImageWithShieldText:(id)arg1 allowMultiline:(char)arg2 centerPoint:(CGPoint*)arg3 ;
-(id)initWithPackedVariant:(id)arg1 backgroundImage:(CGImageRef)arg2 scale:(float)arg3 colors:(SCD_Struct_VK81*)arg4 ;
-(id)initWithBackgroundImage:(CGImageRef)arg1 contentScale:(float)arg2 font:(CTFontRef)arg3 nonDigitFont:(CTFontRef)arg4 textColor:(CGColorRef)arg5 textCenterOffsetX:(float)arg6 textBaseline:(float)arg7 textStrokeWidth:(float)arg8 textStrokeColor:(CGColorRef)arg9 textShadowOffset:(CGSize)arg10 textShadowRadius:(float)arg11 textShadowColor:(CGColorRef)arg12 ;
-(id)initWithResizableBackgroundImage:(CGImageRef)arg1 resizableInfo:(VKEdgeInsets*)arg2 contentScale:(float)arg3 font:(CTFontRef)arg4 nonDigitFont:(CTFontRef)arg5 textColor:(CGColorRef)arg6 textCenterOffsetX:(float)arg7 textBaseline:(float)arg8 textStrokeWidth:(float)arg9 textStrokeColor:(CGColorRef)arg10 textShadowOffset:(CGSize)arg11 textShadowRadius:(float)arg12 textShadowColor:(CGColorRef)arg13 lineSpacing:(float)arg14 ;
-(void)setTextSpecificArtwork:(id)arg1 forStrings:(id)arg2 ;
-(id)imageWithShieldText:(id)arg1 ;
@end

