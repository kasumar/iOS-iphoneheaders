/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIViewController, SUOverlayTransition;

@interface SUOverlayAction : NSObject {

	long long _animationCount;
	UIViewController* _otherViewController;
	SUOverlayTransition* _transition;
	int _type;
	UIViewController* _viewController;

}

@property (assign,nonatomic) int actionType;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long animationCount;                            //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,retain) UIViewController * otherViewController;              //@synthesize otherViewController=_otherViewController - In the implementation block
@property (nonatomic,retain) SUOverlayTransition * transition;                    //@synthesize transition=_transition - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                   //@synthesize viewController=_viewController - In the implementation block
-(void)dealloc;
-(long long)animationCount;
-(void)setAnimationCount:(long long)arg1 ;
-(void)setViewController:(id)arg1 ;
-(void)setTransition:(id)arg1 ;
-(id)transition;
-(id)viewController;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(id)otherViewController;
-(void)setOtherViewController:(id)arg1 ;
@end

