/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:30 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIStatusBarStyleDelegate.h>

@protocol SBStarkSessionConfiguring, UIStatusBarStyleDelegate;
@class UIStatusBar, NSMutableSet, UIView, NSString;

@interface SBStarkStatusBarViewController : UIViewController <UIStatusBarStyleDelegate> {

	id<SBStarkSessionConfiguring> _configuration;
	UIStatusBar* _statusBarView;
	id<UIStatusBarStyleDelegate> _statusBarStyleDelegate;
	NSMutableSet* _statusBarHideReasons;
	int _requestedStyle;
	char _styleHasBeenRequested;
	float _statusBarWidth;
	UIView* _separatorView;
	char _separatorHidden;

}

@property (assign,nonatomic) id<UIStatusBarStyleDelegate> statusBarStyleDelegate; 
@property (assign,getter=isSeparatorHidden,nonatomic) char separatorHidden; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStatusBarHidden:(char)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3 ;
-(id)newFakeStatusBarWithStyle:(int)arg1 ;
-(char)_isStatusBarHidden;
-(void)_layoutStatusBar:(id)arg1 ;
-(id<UIStatusBarStyleDelegate>)statusBarStyleDelegate;
-(void)setStatusBarStyleDelegate:(id<UIStatusBarStyleDelegate>)arg1 ;
-(void)updateStatusBarWithRequestedStyle:(int)arg1 animationFactory:(id)arg2 ;
-(id)newFakeStatusBar;
-(char)isSeparatorHidden;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3 ;
-(void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(int)arg5 ;
-(void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(int)arg4 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)statusBar:(id)arg1 didTriggerButtonType:(int)arg2 withAction:(int)arg3 ;
-(void)setSeparatorHidden:(char)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
@end

