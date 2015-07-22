/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SiriViewService/SVSPagerViewDataSource.h>
#import <SiriViewService/SVSPagerViewDelegate.h>

@protocol SVSPagerViewControllerDelegate;
@class NSMutableArray, UIViewController, NSArray, SVSPagerView, NSString;

@interface SVSPagerViewController : UIViewController <SVSPagerViewDataSource, SVSPagerViewDelegate> {

	NSMutableArray* _viewControllers;
	UIViewController* _activePageViewController;
	id<SVSPagerViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * pageViewControllers; 
@property (nonatomic,retain) UIViewController * activePageViewController;                     //@synthesize activePageViewController=_activePageViewController - In the implementation block
@property (assign,getter=isPagingEnabled,nonatomic) char pagingEnabled; 
@property (nonatomic,readonly) unsigned transitionState; 
@property (assign,nonatomic,__weak) id<SVSPagerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SVSPagerView * view; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)numberOfPageViewsInPagerView:(id)arg1 ;
-(id)pagerView:(id)arg1 pageViewAtIndex:(int)arg2 ;
-(void)pagerView:(id)arg1 didActivatePageView:(id)arg2 oldActivePageView:(id)arg3 ;
-(void)pagerViewDidChangeTransitionState:(id)arg1 ;
-(void)addPageViewController:(id)arg1 ;
-(char)containsPageViewController:(id)arg1 ;
-(void)insertPageViewController:(id)arg1 atIndex:(int)arg2 ;
-(void)removePageViewController:(id)arg1 ;
-(NSArray *)pageViewControllers;
-(UIViewController *)activePageViewController;
-(void)setActivePageViewController:(UIViewController *)arg1 ;
-(id)_viewControllerForPageView:(id)arg1 ;
-(unsigned)transitionState;
-(void)setDelegate:(id<SVSPagerViewControllerDelegate>)arg1 ;
-(id<SVSPagerViewControllerDelegate>)delegate;
-(char)isPagingEnabled;
-(void)setPagingEnabled:(char)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
@end
