/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CameraKit/CameraKit-Structs.h>
@interface CAMCameraSpec : NSObject

@property (nonatomic,readonly) int bottomBarOrientation; 
@property (nonatomic,readonly) int modeDialOrientation; 
@property (nonatomic,readonly) char shouldCreateBottomBar; 
@property (nonatomic,readonly) char shouldCreateTopBar; 
@property (nonatomic,readonly) char shouldCreateFlashButton; 
@property (nonatomic,readonly) char shouldCreateElapsedTimeView; 
@property (nonatomic,readonly) char shouldCreateFlipButton; 
@property (nonatomic,readonly) char shouldCreateStillDuringVideo; 
@property (nonatomic,readonly) char shouldCreateImageWell; 
@property (nonatomic,readonly) char shouldCreateShutterButton; 
@property (nonatomic,readonly) char shouldCreateFiltersButton; 
@property (nonatomic,readonly) char shouldCreateModeDial; 
@property (nonatomic,readonly) char shouldCreateHDRButton; 
@property (nonatomic,readonly) char shouldCreatePanoramaView; 
@property (nonatomic,readonly) char shouldCreateZoomSlider; 
@property (nonatomic,readonly) char shouldCreateAvalancheIndicator; 
@property (nonatomic,readonly) char shouldCreateSlalomIndicator; 
@property (nonatomic,readonly) char shouldCreateTimerButton; 
+(id)specForCurrentPlatform;
+(id)specForPhone;
+(id)specForPad;
-(int)rotationStyle;
-(int)bottomBarOrientation;
-(int)modeDialOrientation;
-(char)shouldCreateBottomBar;
-(char)shouldCreateTopBar;
-(char)shouldCreateFlashButton;
-(char)shouldCreateElapsedTimeView;
-(char)shouldCreateFlipButton;
-(char)shouldCreateStillDuringVideo;
-(char)shouldCreateImageWell;
-(char)shouldCreateShutterButton;
-(char)shouldCreateFiltersButton;
-(char)shouldCreateModeDial;
-(char)shouldCreateHDRButton;
-(char)shouldCreatePanoramaView;
-(char)shouldCreateZoomSlider;
-(char)isCameraApp;
-(char)shouldCreateAvalancheIndicator;
-(char)shouldCreateTimerButton;
-(char)shouldCreateSlalomIndicator;
-(CGRect)initialFrameForOrientation:(int)arg1 ;
-(char)isPhone;
-(char)isPad;
@end

