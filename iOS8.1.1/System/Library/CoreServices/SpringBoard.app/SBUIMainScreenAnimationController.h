/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationController.h>

@interface SBUIMainScreenAnimationController : SBUIAnimationController {

	BOOL _needsToClearBulletinWindowOrientation;

}
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)_noteAnimationDidCommit:(BOOL)arg1 withDuration:(double)arg2 afterDelay:(double)arg3 ;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(void)_dismissBannerAnimated:(BOOL)arg1 ;
-(void)_removeWallpaperAnimationPriorityWithFactory:(id)arg1 ;
-(BOOL)_shouldDismissBanner;
-(void)__startAnimation;
-(void)_clearBulletinWindowOverrideOrientationIfNecessary;
-(void)dealloc;
-(void)beginAnimation;
@end

