/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class NSMutableArray, UIView, NSString;

@interface IMViewControllerNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

	char _transitionIsInFlight;
	NSMutableArray* _alongsideAnimations;
	NSMutableArray* _alongsideCompletions;
	UIView* _containerView;

}

@property (assign,nonatomic) UIView * containerView;                //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(char)isInteractive;
-(float)percentComplete;
-(int)presentationStyle;
-(char)isRotating;
-(char)isAnimated;
-(void)_runAlongsideAnimations;
-(void)setContainerView:(UIView *)arg1 ;
-(void)_runAlongsideCompletionsAfterCommit;
-(char)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(char)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(char)isCancelled;
-(double)transitionDuration;
-(int)completionCurve;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(char)initiallyInteractive;
-(CGAffineTransform)targetTransform;
-(id)_alongsideAnimations:(char)arg1 ;
-(id)_alongsideCompletions:(char)arg1 ;
-(void)_applyBlocks:(id)arg1 releaseBlocks:(/*^block*/id)arg2 ;
-(float)completionVelocity;
@end
