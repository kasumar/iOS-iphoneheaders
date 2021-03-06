/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:53 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIGestureRecognizerDelegate;
#import <UIKit/UIKit-Structs.h>
@class NSMutableArray, UIView, UITouchesEvent, UIPhysicalButtonsEvent, NSMutableSet;

@interface UIGestureRecognizer : NSObject {

	NSMutableArray* _targets;
	NSMutableArray* _delayedTouches;
	UIView* _view;
	UITouchesEvent* _updateEvent;
	UIPhysicalButtonsEvent* _updateButtonEvent;
	id<UIGestureRecognizerDelegate> _delegate;
	NSMutableSet* _friends;
	int _state;
	struct {
		unsigned delegateShouldBegin : 1;
		unsigned delegateCanPrevent : 1;
		unsigned delegateCanBePrevented : 1;
		unsigned delegateShouldRecognizeSimultaneously : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldRequireFailure : 1;
		unsigned delegateShouldBeRequiredToFail : 1;
		unsigned delegateFailed : 1;
		unsigned privateDelegateShouldBegin : 1;
		unsigned privateDelegateCanPrevent : 1;
		unsigned privateDelegateCanBePrevented : 1;
		unsigned privateDelegateShouldRecognizeSimultaneously : 1;
		unsigned privateDelegateShouldReceiveTouch : 1;
		unsigned privateDelegateShouldRequireFailure : 1;
		unsigned privateDelegateShouldBeRequiredToFail : 1;
		unsigned subclassShouldRequireFailure : 1;
		unsigned subclassShouldBeRequiredToFail : 1;
		unsigned privateSubclassShouldRequireFailure : 1;
		unsigned privateSubclassShouldBeRequiredToFail : 1;
		unsigned hasSubclassDynamicFailureRequirements : 1;
		unsigned hasDelegateDynamicFailureRequirements : 1;
		unsigned queriedFailureRequirements : 1;
		unsigned cancelsTouchesInView : 1;
		unsigned delaysTouchesBegan : 1;
		unsigned delaysTouchesEnded : 1;
		unsigned disabled : 1;
		unsigned dirty : 1;
		unsigned delivered : 1;
		unsigned deliveredEndedOrCancelled : 1;
		unsigned continuous : 1;
		unsigned requiresDelayedBegan : 1;
		unsigned willBeginAfterSatisfyingFailureRequirements : 1;
		unsigned requiresSystemGesturesToFail : 1;
		unsigned acceptsFailureRequirements : 1;
	}  _gestureFlags;
	NSMutableSet* _failureRequirements;
	NSMutableSet* _failureDependents;
	NSMutableSet* _dynamicFailureRequirements;
	NSMutableSet* _dynamicFailureDependents;
	id _failureMap;

}

@property (nonatomic,readonly) int state; 
@property (assign,nonatomic) id<UIGestureRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) char cancelsTouchesInView; 
@property (assign,nonatomic) char delaysTouchesBegan; 
@property (assign,nonatomic) char delaysTouchesEnded; 
+(char)_touchesBeganWasDelayedForTouch:(id)arg1 ;
-(id)sb_briefDescription;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIGestureRecognizerDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<UIGestureRecognizerDelegate>)delegate;
-(UIView *)view;
-(void)setDelaysTouchesBegan:(char)arg1 ;
-(int)state;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_setRequiresSystemGesturesToFail:(char)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)_isDirty;
-(void)ignoreTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)_updateGestureStateWithEvent:(id)arg1 buttonEvent:(id)arg2 afterDelay:(char)arg3 ;
-(void)_queueForResetIfFinished;
-(void)_ignorePhysicalButton:(id)arg1 forEvent:(id)arg2 ;
-(void)setView:(UIView *)arg1 ;
-(void)reset;
-(void)setEnabled:(char)arg1 ;
-(void)setCancelsTouchesInView:(char)arg1 ;
-(char)isEnabled;
-(void)_setDirty;
-(char)_requiresSystemGesturesToFail;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDelaysTouchesEnded:(char)arg1 ;
-(void)requireGestureRecognizerToFail:(id)arg1 ;
-(unsigned)numberOfTouches;
-(id)_activeTouchesForEvent:(id)arg1 ;
-(char)_isRecognized;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
-(char)canPreventGestureRecognizer:(id)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(char)_delegateShouldReceiveTouch:(id)arg1 ;
-(void)requireOtherGestureToFail:(id)arg1 ;
-(CGPoint)locationOfTouch:(unsigned)arg1 inView:(id)arg2 ;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(void)_setAcceptsFailureRequiments:(char)arg1 ;
-(void)_resetGestureRecognizer;
-(char)delaysTouchesBegan;
-(id)_briefDescription;
-(char)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)_clearReferencesToRelatedGesture:(id)arg1 ;
-(void)_enqueueDelayedTouchesToSend;
-(void)_clearUpdateTimer;
-(char)_shouldBegin;
-(char)_isFriendWithGesture:(id)arg1 ;
-(void)_enqueueDelayedTouchToSend:(id)arg1 ;
-(void)_delayTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)_clearDelayedTouches;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(void)_delayTouchesForEvent:(id)arg1 ;
-(void)_updateGestureWithEvent:(id)arg1 buttonEvent:(id)arg2 ;
-(char)_shouldReceiveTouch:(id)arg1 ;
-(char)_affectedByGesture:(id)arg1 ;
-(char)_delegateCanPreventGestureRecognizer:(id)arg1 ;
-(void)_addFailureDependent:(id)arg1 ;
-(void)_removeFailureDependent:(id)arg1 ;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 includingDependencies:(char)arg3 ;
-(char)cancelsTouchesInView;
-(char)delaysTouchesEnded;
-(void)_appendSubclassDescription:(id)arg1 ;
-(void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(int)arg4 ;
-(id)_failureMap;
-(void)_setFailureMap:(id)arg1 ;
-(id)_delayedTouches;
-(char)_hasTargets;
-(char)_shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(char)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(char)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(CGPoint)_centroidOfTouches:(id)arg1 excludingEnded:(char)arg2 ;
-(float)_distanceBetweenTouches:(id)arg1 ;
-(void)_touchWasCancelled:(id)arg1 ;
-(char)_requiresGestureRecognizerToFail:(id)arg1 ;
-(void)_delayedUpdateGesture;
-(void)_resetIfFinished;
-(int)_depthFirstViewCompare:(id)arg1 ;
-(void)_addFriendGesture:(id)arg1 ;
-(char)_isExcludedByGesture:(id)arg1 ;
-(void)_cancelRecognition;
-(void)_exclude;
-(void)_addDynamicFailureDependent:(id)arg1 ;
-(void)_addDynamicFailureRequirement:(id)arg1 ;
-(void)removeFailureRequirement:(id)arg1 ;
-(void)_failureRequirementCompleted:(id)arg1 withEvent:(id)arg2 ;
-(char)_acceptsFailureRequirements;
-(void)_invalidate;
-(void)_detach;
@end

