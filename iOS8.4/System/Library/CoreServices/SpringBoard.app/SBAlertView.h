/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBAlert;

@interface SBAlertView : UIView {

	SBAlert* _alert;
	unsigned _shouldAnimateIn : 1;

}
-(void)layoutForInterfaceOrientation:(long long)arg1 ;
-(void)alertDisplayWillBecomeVisible;
-(void)alertDisplayBecameVisible;
-(BOOL)isReadyToBeRemovedFromView;
-(BOOL)isAnimatingOut;
-(BOOL)shouldAddClippingViewDuringRotation;
-(void)alertWindowViewControllerResizedFromContentFrame:(CGRect)arg1 toContentFrame:(CGRect)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)dismiss;
-(id)alert;
-(void)setAlert:(id)arg1 ;
-(void)setShouldAnimateIn:(BOOL)arg1 ;
-(BOOL)shouldAnimateIn;
@end

