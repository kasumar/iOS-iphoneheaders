/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSDictionary, CUIPSDGradient;

@interface CUIThemeSchemaRendition : CUIThemeRendition {

	NSDictionary* cuiInfo;
	unsigned long long _nimages;
	CGImage* _image[9];
	CGRect _layoutRects[9];
	CGSize _intrinsicSize;
	CGRect _elementRect;
	long long _columnSlices;
	long long _rowSlices;
	psdGradientColor _contentInsets;
	CUIPSDGradient* _gradient;

}

@property (nonatomic,readonly) unsigned long long numberOfSlices; 
@property (nonatomic,readonly) CGRect* sliceRects; 
@property (nonatomic,readonly) CUIPSDGradient * gradient; 
-(void)dealloc;
-(unsigned short)size;
-(unsigned short)layer;
-(id)description;
-(unsigned short)state;
-(unsigned short)identifier;
-(double)scale;
-(unsigned short)value;
-(unsigned short)direction;
-(id)stringForState:(unsigned short)arg1 ;
-(psdGradientColor)contentInsets;
-(CUIPSDGradient *)gradient;
-(id)slices;
-(unsigned long long)numberOfSlices;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)referenceImage;
-(unsigned short)dimension1;
-(unsigned short)dimension2;
-(unsigned short)drawingLayer;
-(unsigned short)keyScale;
-(unsigned short)previousState;
-(unsigned short)previousValue;
-(CGRect*)sliceRects;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(CGRect)alignmentRectangle;
-(CGRect)edgeInsets:(BOOL)arg1 ;
-(id)coreUIOptions;
-(id)defaultTemplateName;
-(long long)columnSlices;
-(long long)rowSlices;
-(CGPoint)renditionCoordinatesForPartFeatures:(long long)arg1 ;
-(id)typeLocalizedString;
-(id)stateLocalizedString;
-(id)previousStateLocalizedString;
-(id)directionLocalizedString;
-(id)valueLocalizedString;
-(id)previousValueLocalizedString;
-(id)sizeLocalizedString;
-(id)presentationStateLocalizedString;
-(id)dimension1LocalizedString;
-(id)dimension2LocalizedString;
-(id)drawingLayerLocalizedString;
-(id)lookLocalizedString;
-(id)scaleLocalizedString;
-(id)stringForValue:(unsigned short)arg1 ;
-(unsigned short)look;
-(unsigned short)presentationState;
@end

