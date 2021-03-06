/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calculator/Calculator-Structs.h>
#import <UIKit/UIViewController.h>
#import <Calculator/CalculatorKeypadViewDelegate.h>
#import <Calculator/CalcDisplayViewDelegate.h>
#import <Calculator/CalculatorModelDelegate.h>

@class CalculatorKeypadView, CalcDisplayView, CalculatorModel, NSString;

@interface CalculatorController : UIViewController <CalculatorKeypadViewDelegate, CalcDisplayViewDelegate, CalculatorModelDelegate> {

	int _orientation;
	CalculatorKeypadView* _basicKeypad;
	CalculatorKeypadView* _scientificKeypad;
	CalcDisplayView* _displayView;
	CalculatorModel* _model;
	NSString* _soundsPreferencesDomain;
	char _isRotating;
	char _soundsEnabled;
	char _usingCommaForDecimal;
	char _showingCalloutBar;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCalculatorController;
-(void)savePrefs;
-(void)handleStatusBarHeightChange;
-(unsigned)_maxDigitsForCurrentOrientation;
-(void)resetSounds;
-(void)_resetLocale;
-(void)_setShowingAlternate:(char)arg1 forButton:(unsigned)arg2 inKeypad:(id)arg3 ;
-(void)displayCancelCalloutBar;
-(CGSize)_landscapeKeypadSize;
-(void)_showActiveState:(char)arg1 forOperator:(unsigned)arg2 ;
-(void)_showActiveState:(char)arg1 onButton:(unsigned)arg2 ;
-(CGSize)_portraitKeypadSize;
-(void)_setCalcValueViewValues:(id)arg1 userEntered:(char)arg2 ;
-(void)_initLandscape;
-(void)_layoutPortraitSubviews;
-(void)_layoutLandscapeSubviews;
-(void)_finalizeDisplayForCurrentOrientation;
-(float)_displayHeightForOrientation:(int)arg1 maxValueHeight:(float*)arg2 ;
-(void)_prepareForTransitionToSize:(CGSize)arg1 ;
-(void)_animateTransitionToSize:(CGSize)arg1 duration:(double)arg2 ;
-(void)_completeTransitionToSize:(CGSize)arg1 ;
-(void)_setShowingCalloutBar:(char)arg1 ;
-(void)_layoutLandscapeForAnimation;
-(CGSize)_landscapeBasicKeypadSize;
-(id)_formattedPasteboardValue;
-(void)_showCalloutBar;
-(void)touchDownOnKeypad:(id)arg1 ;
-(void)touchUpOnKeypad:(id)arg1 button:(unsigned)arg2 ;
-(id)modeLabelString;
-(char)isShowingCalloutBar;
-(char)displayCanPaste;
-(void)displayCopy;
-(void)displayPaste;
-(void)displayShowCalloutBar;
-(void)displaySwiped;
-(void)calculatorModel:(id)arg1 didUpdateDisplayValue:(id)arg2 userEntered:(char)arg3 ;
-(void)calculatorModel:(id)arg1 didUpdateActiveState:(char)arg2 forOperator:(unsigned)arg3 ;
-(void)calculatorModel:(id)arg1 didUpdateActiveState:(char)arg2 forButton:(unsigned)arg3 ;
-(void)calculatorModel:(id)arg1 didUpdateAlternate:(char)arg2 forButton:(unsigned)arg3 ;
-(void)calculatorModel:(id)arg1 didSwitchToRadians:(char)arg2 ;
-(id)_stringForButton:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(int)orientation;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
@end

