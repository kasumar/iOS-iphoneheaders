/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class UINavigationController, SUScriptNavigationBar, SUScriptViewController;

@interface SUScriptNavigationController : SUScriptViewController {

	UINavigationController* _navController;

}

@property (readonly) SUScriptNavigationBar * navigationBar; 
@property (assign) BOOL navigationBarHidden; 
@property (copy) id toolbarHidden; 
@property (readonly) SUScriptViewController * topViewController; 
@property (retain) id viewControllers; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(BOOL)navigationBarHidden;
-(void)dealloc;
-(id)navigationBar;
-(id)topViewController;
-(void)popViewControllerAnimated:(BOOL)arg1 ;
-(void)setNavigationBar:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)viewControllers;
-(void)setViewControllers:(id)arg1 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(void)setToolbarHidden:(id)arg1 ;
-(void)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithRootScriptViewController:(id)arg1 clientInterface:(id)arg2 ;
-(id)newNativeViewController;
-(void)didPerformBatchedInvocations;
-(id)_navigationController;
-(void)willPerformBatchedInvocations;
-(void)_popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)_popViewControllerAnimated:(BOOL)arg1 ;
-(void)_pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)_filteredViewControllers;
-(id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1 ;
-(void)setTopViewController:(id)arg1 ;
-(id)toolbarHidden;
@end

