/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBIconProgressViewDelegate.h>
#import <SpringBoard/SBReusableView.h>

@class SBIcon, UIImageView, SBIconProgressView, UIImage;

@interface SBIconImageView : UIView <SBIconObserver, SBIconProgressViewDelegate, SBReusableView> {

	SBIcon* _icon;
	float _brightness;
	int _location;
	UIImageView* _overlayView;
	SBIconProgressView* _progressView;
	BOOL _isPaused;
	UIImage* _cachedSquareContentsImage;
	BOOL _showsSquareCorners;
	float _overlayAlpha;

}

@property (nonatomic,readonly) SBIcon * icon;                      //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) float brightness;                     //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) float overlayAlpha;                   //@synthesize overlayAlpha=_overlayAlpha - In the implementation block
@property (assign,nonatomic) BOOL showsSquareCorners;              //@synthesize showsSquareCorners=_showsSquareCorners - In the implementation block
+(id)viewMap;
+(unsigned)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2 ;
+(id)windowForRecycledViewsInViewMap:(id)arg1 ;
+(void)recycleIconImageView:(id)arg1 ;
+(id)dequeueRecycledIconImageViewOfClass:(Class)arg1 ;
+(float)cornerRadius;
-(id)darkeningOverlayImage;
-(id)_generateSquareContentsImage;
-(id)squareDarkeningOverlayImage;
-(void)setShowsSquareCorners:(BOOL)arg1 ;
-(void)progressViewCanBeRemoved:(id)arg1 ;
-(void)iconImageDidUpdate:(id)arg1 ;
-(void)setOverlayAlpha:(float)arg1 ;
-(void)updateImageAnimated:(BOOL)arg1 ;
-(void)setIcon:(id)arg1 location:(int)arg2 animated:(BOOL)arg3 ;
-(void)setProgressAlpha:(float)arg1 ;
-(void)setProgressState:(int)arg1 paused:(BOOL)arg2 percent:(float)arg3 animated:(BOOL)arg4 ;
-(void)_clearCachedImages;
-(void)_updateOverlayImage;
-(void)_updateOverlayAlpha;
-(void)_updateProgressMask;
-(void)_clearProgressView;
-(id)squareContentsImage;
-(id)_currentOverlayImage;
-(id)_iconBasicOverlayImage;
-(id)_iconSquareOverlayImage;
-(id)_generateIconBasicOverlayImageForFormat:(int)arg1 ;
-(id)_generateIconSquareOverlayImageForFormat:(int)arg1 ;
-(float)overlayAlpha;
-(BOOL)showsSquareCorners;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)snapshot;
-(CGRect)visibleBounds;
-(void)prepareForReuse;
-(id)contentsImage;
-(void)setPaused:(BOOL)arg1 ;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
-(id)icon;
@end

