/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <MapKit/VKPuckAnimatorTarget.h>

@class VKAnnotationMarker, CALayer;

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget> {

	VKAnnotationMarker* _marker;
	int _zoomDirection;
	CALayer* _pulseLayer;
	CALayer* _accuracyLayer;
	BOOL _allowsPulse;
	BOOL _shouldPulse;
	BOOL _shouldDisplayHeading;
	double _headingAccuracy;
	CALayer* _headingLayer;
	BOOL _allowsAccuracyRing;
	BOOL _stale;
	BOOL _effectsEnabled;
	int _locationSource;
	double _presentationCourse;
	double _locationAccuracy;

}

@property (getter=isStale,nonatomic,readonly) BOOL stale;                              //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) BOOL allowsPulse;                                         //@synthesize allowsPulse=_allowsPulse - In the implementation block
@property (assign,nonatomic) BOOL allowsAccuracyRing;                                  //@synthesize allowsAccuracyRing=_allowsAccuracyRing - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayHeading;                                //@synthesize shouldDisplayHeading=_shouldDisplayHeading - In the implementation block
@property (assign,nonatomic) double headingAccuracy;                                   //@synthesize headingAccuracy=_headingAccuracy - In the implementation block
@property (nonatomic,readonly) double locationAccuracy;                                //@synthesize locationAccuracy=_locationAccuracy - In the implementation block
@property (assign,nonatomic) int locationSource;                                       //@synthesize locationSource=_locationSource - In the implementation block
@property (assign,nonatomic) float opacity; 
@property (assign,getter=isEffectsEnabled,nonatomic) BOOL effectsEnabled;              //@synthesize effectsEnabled=_effectsEnabled - In the implementation block
@property (assign,nonatomic) int zoomDirection;                                        //@synthesize zoomDirection=_zoomDirection - In the implementation block
@property (assign,nonatomic) double presentationCourse;                                //@synthesize presentationCourse=_presentationCourse - In the implementation block
+(float)accuracyDiameter:(float)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(unsigned)_zIndex;
+(unsigned)_selectedZIndex;
-(void)setShouldDisplayHeading:(BOOL)arg1 ;
-(void)setZoomDirection:(int)arg1 ;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(void)setZoomDirection:(int)arg1 deltaScale:(float)arg2 ;
-(id)_vkMarker;
-(void)updateStateFromLocation:(id)arg1 duration:(double)arg2 ;
-(void)setLocationSource:(int)arg1 ;
-(void)locationManagerFailedToUpdateLocation;
-(void)setHeadingAccuracy:(double)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(void)_updateFromMap;
-(void)_setPresentationCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)_setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(void)_setMapPitchRadians:(float)arg1 ;
-(BOOL)_tracking;
-(float)_accuracyRadius:(double)arg1 ;
-(id)_layerToMatchAccuracyRing;
-(void)_resetLayerToMatchAccuracyRing;
-(id)_pulseLayer;
-(id)_pulseAnimation;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(BOOL)isEffectsEnabled;
-(void)_pausePulse;
-(void)_resumePulse;
-(void)_updatePulse;
-(UIImage*)_headingImageForAccuracy:(double)arg1 anchorPoint:(CGPoint*)arg2 ;
-(void)_updateHeadingLayer;
-(id)_baseLayer;
-(void)setLocationAccuracy:(double)arg1 duration:(double)arg2 ;
-(void)_updateLayers;
-(id)_pulseTintColor;
-(void)setAllowsPulse:(BOOL)arg1 ;
-(void)setAllowsAccuracyRing:(BOOL)arg1 ;
-(id)_accuracyAnimation:(float)arg1 ;
-(int)zoomDirection;
-(BOOL)allowsPulse;
-(BOOL)shouldDisplayHeading;
-(BOOL)allowsAccuracyRing;
-(double)locationAccuracy;
-(int)locationSource;
-(void)dealloc;
-(void)didMoveToWindow;
-(id)init;
-(void)layoutSubviews;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)setPresentationCoordinate:(SCD_Struct_MK1)arg1 ;
-(double)presentationCourse;
-(void)setPresentationCourse:(double)arg1 ;
-(BOOL)isStale;
-(double)headingAccuracy;
@end

