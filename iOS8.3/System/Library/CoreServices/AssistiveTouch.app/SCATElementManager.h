/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:17:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATElementProvider.h>

@class SCATElementManagerViewController, NSString;

@interface SCATElementManager : NSObject <SCATElementProvider> {

	SCATElementManagerViewController* _viewController;

}

@property (nonatomic,retain) SCATElementManagerViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char providesElements; 
-(void)redisplayIfNeeded:(char)arg1 ;
-(void)driver:(id)arg1 willFocusOnContext:(id)arg2 ;
-(void)driver:(id)arg1 willUnfocusFromContext:(id)arg2 ;
-(void)driver:(id)arg1 didFocusOnContext:(id)arg2 ;
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)firstElementWithOptions:(int*)arg1 ;
-(id)siblingOfElement:(id)arg1 inDirection:(int)arg2 didWrap:(char*)arg3 options:(int*)arg4 ;
-(char)handleInputAction:(int)arg1 withElement:(id)arg2 ;
-(char)shouldKeepScannerAwake;
-(id)numberOfItemsInCurrentScanCycle;
-(char)providesElements;
-(char)isMenuElementManager;
-(void)closeCurrentScanningContext;
-(char)canBeActiveElementManager;
-(void)didFetchElements:(id)arg1 foundNewElements:(char)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(char)arg4 ;
-(id)elementAfter:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(id)elementBefore:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(void)scannerWillMakeManagerActive:(id)arg1 ;
-(void)scannerWillMakeManagerInactive:(id)arg1 ;
-(void)firstResponderDidChange:(id)arg1 ;
-(void)appTransitionDidOccur:(id)arg1 ;
-(void)screenDidChange:(id)arg1 ;
-(void)alertDidAppear:(id)arg1 ;
-(void)screenChangingButtonWasPressed:(id)arg1 ;
-(void)scannerManager:(id)arg1 didActivateElement:(id)arg2 ;
-(id)nextFocusContextAfterDismissingMenuForElement:(id)arg1 ;
-(char)containsElement:(id)arg1 ;
-(void)willBeginProvidingElements;
-(void)didFinishProvidingElements;
-(void)hideIfNeeded:(char)arg1 ;
-(char)isElementNavElementManager;
-(char)isPointPickerElementManager;
-(char)isGestureProviderElementManager;
-(char)isGestureDrawingElementManager;
-(void)dealloc;
-(NSString *)identifier;
-(void)setViewController:(SCATElementManagerViewController *)arg1 ;
-(SCATElementManagerViewController *)viewController;
-(void)orientationDidChange:(id)arg1 ;
@end
