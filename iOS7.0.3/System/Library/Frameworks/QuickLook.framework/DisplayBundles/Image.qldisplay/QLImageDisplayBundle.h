/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Image.qldisplay/Image
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Image/Image-Structs.h>
#import <QuickLook/QLDisplayBundle.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIScrollView, UIImageView;

@interface QLImageDisplayBundle : QLDisplayBundle <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	UIScrollView* _scrollView;
	UIImageView* _imageView;
	UIScrollView* _airplayScrollView;
	UIImageView* _airplayImageView;
	int _lastDisplayedOrientation;
	BOOL _inRotation;
	BOOL _inDoubleTapZoom;
	BOOL _appeared;
	float _minZoomScale;
	float _maxZoomScale;
	float _pinchMaxZoomScale;
	float _fillZoomScale;
	float _airplayMinZoomScale;
	float _airplayMaxZoomScale;
	float _airplayFillZoomScale;
	BOOL _imageIsSmallerThanView;
	BOOL _shouldFillImage;
	int _loadingIndex;

}
+(double)allowedLoadingDelay;
-(void)_setImage:(id)arg1 withError:(id)arg2 ;
-(CGRect)_zoomRectForScale:(float)arg1 withCenter:(CGPoint)arg2 ;
-(void)_synchronizeAirplayView;
-(void)_updateZoomScales;
-(void)_resetZoomScale;
-(CGPoint)_imageCenterPoint;
-(void)_adjustScrollView:(id)arg1 forTargetCenterPoint:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(float)_maxZoomScaleForImageSize:(CGSize)arg1 ;
-(void)_updateAirPlayZoomScales;
-(void)loadWithHints:(id)arg1 ;
-(id)airplayView;
-(BOOL)canCopyToPasteboard;
-(void)setupAirPlayView;
-(void)discardAirPlayView;
-(CGRect)contentFrame;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_doubleTapRecognized:(id)arg1 ;
-(void)setPreviewMode:(int)arg1 ;
-(void)cancelLoad;
@end

