/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <MapKit/VKPuckAnimatorTarget.h>

@class VKAnnotationMarker, CALayer, CLLocation, NSString;

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget> {

	VKAnnotationMarker* _marker;
	int _zoomDirection;
	CALayer* _pulseLayer;
	CALayer* _accuracyLayer;
	char _allowsPulse;
	char _shouldPulse;
	char _allowsHeadingIndicator;
	char _shouldDisplayHeading;
	double _headingAccuracy;
	CALayer* _headingLayer;
	char _allowsAccuracyRing;
	char _stale;
	char _effectsEnabled;
	double _presentationCourse;
	double _locationAccuracy;
	CLLocation* _lastLocation;

}

@property (getter=isStale,nonatomic,readonly) char stale;                              //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) char allowsPulse;                                         //@synthesize allowsPulse=_allowsPulse - In the implementation block
@property (assign,nonatomic) char allowsAccuracyRing;                                  //@synthesize allowsAccuracyRing=_allowsAccuracyRing - In the implementation block
@property (assign,nonatomic) char allowsHeadingIndicator;                              //@synthesize allowsHeadingIndicator=_allowsHeadingIndicator - In the implementation block
@property (assign,nonatomic) char shouldDisplayHeading;                                //@synthesize shouldDisplayHeading=_shouldDisplayHeading - In the implementation block
@property (assign,nonatomic) double headingAccuracy;                                   //@synthesize headingAccuracy=_headingAccuracy - In the implementation block
@property (nonatomic,readonly) double locationAccuracy;                                //@synthesize locationAccuracy=_locationAccuracy - In the implementation block
@property (assign,nonatomic) float opacity; 
@property (assign,getter=isEffectsEnabled,nonatomic) char effectsEnabled;              //@synthesize effectsEnabled=_effectsEnabled - In the implementation block
@property (assign,nonatomic) int zoomDirection;                                        //@synthesize zoomDirection=_zoomDirection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double presentationCourse;                                //@synthesize presentationCourse=_presentationCourse - In the implementation block
+(float)accuracyDiameter:(float)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(unsigned)_zIndex;
+(unsigned)_selectedZIndex;
-(void)setShouldDisplayHeading:(char)arg1 ;
-(void)setZoomDirection:(int)arg1 ;
-(void)setEffectsEnabled:(char)arg1 ;
-(void)setZoomDirection:(int)arg1 deltaScale:(float)arg2 ;
-(void)updateStateFromLocation:(id)arg1 duration:(double)arg2 ;
-(id)_vkMarker;
-(void)locationManagerFailedToUpdateLocation;
-(void)setHeadingAccuracy:(double)arg1 ;
-(void)_updateFromMap;
-(void)_setPresentationCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)_setAnimatingToCoordinate:(char)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(void)_setMapPitchRadians:(float)arg1 ;
-(char)_tracking;
-(id)_layerToMatchAccuracyRing;
-(void)_resetLayerToMatchAccuracyRing;
-(id)_pulseLayer;
-(id)_pulseAnimation;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(char)isEffectsEnabled;
-(void)_pausePulse;
-(void)_resumePulse;
-(void)_updatePulse;
-(UIImage*)_headingImageForAccuracy:(double)arg1 anchorPoint:(CGPoint*)arg2 ;
-(void)_updateHeadingLayer;
-(id)_baseLayer;
-(void)setLocationAccuracy:(double)arg1 duration:(double)arg2 ;
-(void)_updateLayers;
-(id)_pulseTintColor;
-(void)setAllowsPulse:(char)arg1 ;
-(void)setAllowsAccuracyRing:(char)arg1 ;
-(void)setAllowsHeadingIndicator:(char)arg1 ;
-(id)_accuracyAnimation:(float)arg1 ;
-(int)zoomDirection;
-(char)allowsPulse;
-(char)allowsHeadingIndicator;
-(char)shouldDisplayHeading;
-(char)allowsAccuracyRing;
-(double)locationAccuracy;
-(void)_setTracking:(char)arg1 ;
-(void)didMoveToWindow;
-(id)init;
-(void)layoutSubviews;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(double)headingAccuracy;
-(void)setAnimatingToCoordinate:(char)arg1 ;
-(void)setPresentationCoordinate:(SCD_Struct_MK1)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(double)presentationCourse;
-(void)setPresentationCourse:(double)arg1 ;
-(char)isStale;
@end

