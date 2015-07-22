/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Nike/STRootViewController.h>
#import <Nike/STEmpedLinkingManagerDelegate.h>
#import <Nike/STLinkingViewDelegate.h>

@class STEmpedLinkingManager, STLinkingView, UILabel, NSString;

@interface STLinkingController : STRootViewController <STEmpedLinkingManagerDelegate, STLinkingViewDelegate> {

	id _delegate;
	STEmpedLinkingManager* _linkingManager;
	STLinkingView* _linkingView;
	char _didDismiss;
	UILabel* _messageLabel;

}

@property (assign,nonatomic) id<STModalLinkingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setLinkingType:(int)arg1 animated:(char)arg2 ;
-(char)_dismissIfLinked;
-(void)dealloc;
-(void)setDelegate:(id<STModalLinkingDelegate>)arg1 ;
-(id)init;
-(id<STModalLinkingDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)linkingViewRequestsEmpedSearch:(id)arg1 ;
-(void)empedLinkingManager:(id)arg1 linkedStateChanged:(char)arg2 ;
-(void)cancelLinking;
@end
