/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SIMToolkitUI/STKBaseAlertViewController.h>

@class UITextView;

@interface STKTextAlertViewController : STKBaseAlertViewController {

	UITextView* _textView;

}
-(void)dealloc;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)dismiss;
-(void)accept:(id)arg1 ;
-(id)newTopBar;
-(id)newBottomBar;
-(void)dismiss:(id)arg1 ;
-(void)_adjustTextFrame;
-(void)rightNavigationButtonPressed;
-(void)leftNavigationButtonPressed;
-(id)alertText;
@end

