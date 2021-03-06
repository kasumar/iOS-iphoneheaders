/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>
#import <TelephonyUI/TPSlidingButtonDelegateProtocol.h>

@protocol TPSuperBottomBarDelegateProtocol;
@class NSArray, UIButton, TPSlidingButton, NSMutableArray;

@interface TPSuperBottomBar : UIView <TPSlidingButtonDelegateProtocol> {

	bool _declineAndRemindIsAvailable;
	bool _declineAndMessageIsAvailable;
	bool _enabled;
	bool _blursBackground;
	bool _usesLowerButtons;
	int _currentState;
	<TPSuperBottomBarDelegateProtocol>* _delegate;
	long long _orientation;
	double _bottomMargin;
	NSArray* _buttonLayoutConstraints;
	NSArray* _horizontalConstraintsForSupplementalButtons;
	UIButton* _supplementalTopLeftButton;
	UIButton* _supplementalTopRightButton;
	UIButton* _mainLeftButton;
	UIButton* _mainRightButton;
	UIButton* _sideButtonLeft;
	UIButton* _sideButtonRight;
	UIButton* _supplementalBottomRightButton;
	UIButton* _supplementalBottomLeftButton;
	TPSlidingButton* _slidingButton;
	NSMutableArray* _hijackedGestureRecognizers;
	NSMutableArray* _stateStack;

}

@property (assign) <TPSuperBottomBarDelegateProtocol> * delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool declineAndRemindIsAvailable;                         //@synthesize declineAndRemindIsAvailable=_declineAndRemindIsAvailable - In the implementation block
@property (assign,nonatomic) bool declineAndMessageIsAvailable;                        //@synthesize declineAndMessageIsAvailable=_declineAndMessageIsAvailable - In the implementation block
@property (assign,nonatomic) bool enabled;                                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) bool blursBackground;                                     //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) bool usesLowerButtons;                                    //@synthesize usesLowerButtons=_usesLowerButtons - In the implementation block
@property (assign,nonatomic) int currentState;                                         //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) long long orientation;                                    //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) CGSize effectiveSize; 
@property (assign,nonatomic) double bottomMargin;                                      //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (retain) NSArray * buttonLayoutConstraints;                                  //@synthesize buttonLayoutConstraints=_buttonLayoutConstraints - In the implementation block
@property (retain) NSArray * horizontalConstraintsForSupplementalButtons;              //@synthesize horizontalConstraintsForSupplementalButtons=_horizontalConstraintsForSupplementalButtons - In the implementation block
@property (nonatomic,retain) UIButton * supplementalTopLeftButton;                     //@synthesize supplementalTopLeftButton=_supplementalTopLeftButton - In the implementation block
@property (nonatomic,retain) UIButton * supplementalTopRightButton;                    //@synthesize supplementalTopRightButton=_supplementalTopRightButton - In the implementation block
@property (nonatomic,retain) UIButton * mainLeftButton;                                //@synthesize mainLeftButton=_mainLeftButton - In the implementation block
@property (nonatomic,retain) UIButton * mainRightButton;                               //@synthesize mainRightButton=_mainRightButton - In the implementation block
@property (nonatomic,retain) UIButton * sideButtonLeft;                                //@synthesize sideButtonLeft=_sideButtonLeft - In the implementation block
@property (nonatomic,retain) UIButton * sideButtonRight;                               //@synthesize sideButtonRight=_sideButtonRight - In the implementation block
@property (nonatomic,retain) UIButton * supplementalBottomRightButton;                 //@synthesize supplementalBottomRightButton=_supplementalBottomRightButton - In the implementation block
@property (nonatomic,retain) UIButton * supplementalBottomLeftButton;                  //@synthesize supplementalBottomLeftButton=_supplementalBottomLeftButton - In the implementation block
@property (nonatomic,retain) TPSlidingButton * slidingButton;                          //@synthesize slidingButton=_slidingButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * hijackedGestureRecognizers;              //@synthesize hijackedGestureRecognizers=_hijackedGestureRecognizers - In the implementation block
@property (retain) NSMutableArray * stateStack;                                        //@synthesize stateStack=_stateStack - In the implementation block
+(double)defaultWidth;
+(double)defaultBottomMargin;
+(double)defaultSideMarginForSingleButton;
+(double)defaultSideMarginForDoubleButton;
+(double)defaultInterButtonSpacing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(void)addSubview:(id)arg1 ;
-(id)delegate;
-(long long)orientation;
-(int)currentState;
-(void)setEnabled:(bool)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setOrientation:(long long)arg1 ;
-(bool)enabled;
-(void)buttonPressed:(id)arg1 ;
-(void)setCurrentState:(int)arg1 ;
-(bool)blursBackground;
-(void)setBlursBackground:(bool)arg1 ;
-(void)setUsesLowerButtons:(bool)arg1 ;
-(void)setAction:(int)arg1 enabled:(bool)arg2 ;
-(void)setCurrentState:(int)arg1 animated:(bool)arg2 animationCompletionBlock:(/*^block*/ id)arg3 ;
-(void)setAction:(int)arg1 selected:(bool)arg2 ;
-(CGRect)frameForControlWithActionType:(int)arg1 ;
-(CGSize)effectiveSize;
-(double)bottomMargin;
-(void)setBottomMargin:(double)arg1 ;
-(void)setDeclineAndMessageIsAvailable:(bool)arg1 ;
-(void)setDeclineAndRemindIsAvailable:(bool)arg1 ;
-(void)_clearHijackedGestureRecognizers;
-(id)hijackedGestureRecognizers;
-(void)setStateStack:(id)arg1 ;
-(id)stateStack;
-(id)controlForActionType:(int)arg1 ;
-(id)viewLabels;
-(void)_updateHorizontalConstraintsForSupplementalButtons;
-(bool)animateFromState:(int)arg1 toState:(int)arg2 completion:(/*^block*/ id)arg3 ;
-(void)removeAllButtons;
-(id)makeButtonWithType:(int)arg1 title:(id)arg2 image:(id)arg3 color:(id)arg4 font:(id)arg5 fontColor:(id)arg6 ;
-(void)setMainLeftButton:(id)arg1 ;
-(void)setMainRightButton:(id)arg1 ;
-(void)setSupplementalTopLeftButton:(id)arg1 ;
-(void)setSupplementalTopRightButton:(id)arg1 ;
-(id)makeSlidingButtonWithType:(int)arg1 ;
-(void)setSlidingButton:(id)arg1 ;
-(void)setSupplementalBottomRightButton:(id)arg1 ;
-(void)setSideButtonLeft:(id)arg1 ;
-(void)setSideButtonRight:(id)arg1 ;
-(void)setSupplementalBottomLeftButton:(id)arg1 ;
-(id)mainRightButton;
-(id)mainLeftButton;
-(id)supplementalTopLeftButton;
-(id)supplementalTopRightButton;
-(id)supplementalBottomLeftButton;
-(id)supplementalBottomRightButton;
-(id)slidingButton;
-(id)sideButtonLeft;
-(id)sideButtonRight;
-(bool)declineAndMessageIsAvailable;
-(bool)declineAndRemindIsAvailable;
-(id)buttonLayoutConstraints;
-(void)shrinkButtonFontSizesIfNecessary;
-(id)constraintsForState:(int)arg1 ;
-(void)setButtonLayoutConstraints:(id)arg1 ;
-(bool)usesLowerButtons;
-(id)_horizontalConstraintsForSupplementalButtonsUsingLabels:(id)arg1 ;
-(id)horizontalConstraintsForSupplementalButtons;
-(void)setHorizontalConstraintsForSupplementalButtons:(id)arg1 ;
-(id)customTitleStringForActionType:(int)arg1 givenDefaultTitle:(id)arg2 ;
-(void)buttonLongPressed:(id)arg1 ;
-(void)refreshCustomizedActionTypeTitleForButton:(id)arg1 ;
-(void)prepareButtonsForAnimationEnd;
-(void)animateFromIncomingCallStateToInCallStateWithCompletion:(/*^block*/ id)arg1 ;
-(void)animateInSupplementalBottomRightButton:(id)arg1 WithCompletion:(/*^block*/ id)arg2 ;
-(void)animateOutSupplementalBottomRightButtonWithCompletion:(/*^block*/ id)arg1 ;
-(void)animateFromIncomingCallStateToFaceTimeInCallState:(int)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)animateOutSupplementalBottomLeftButtonWithCompletion:(/*^block*/ id)arg1 ;
-(void)animateFromOutgoingStateToInCallStateWithCompletion:(/*^block*/ id)arg1 ;
-(void)prepareButtonsForAnimationBegin;
-(void)slidingButtonDidFinishSlide;
-(void)slidingButton:(id)arg1 didSlideToProportion:(double)arg2 ;
-(void)pushState:(int)arg1 animated:(bool)arg2 animationCompletionBlock:(/*^block*/ id)arg3 ;
-(bool)popStateAnimated:(bool)arg1 animationCompletionBlock:(/*^block*/ id)arg2 ;
-(void)resetPoppedStates;
-(void)refreshCustomizedActionTypeTitles;
-(void)animateOutMainButtonAndAddNewLeftButton:(id)arg1 newRightButton:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)animateOutMainButtonAndAddNewLeftButton:(id)arg1 newSupplementalBottomRightButton:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)animateOutLeftAndRightMainButtonsAndAddNewMainButton:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setHijackedGestureRecognizers:(id)arg1 ;
@end

