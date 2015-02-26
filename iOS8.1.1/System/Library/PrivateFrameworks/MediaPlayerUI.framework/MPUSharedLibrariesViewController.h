/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _MPUSharedLibrariesViewController, UINavigationController;

@interface MPUSharedLibrariesViewController : UIViewController {

	_MPUSharedLibrariesViewController* _sharedLibariesViewController;
	UINavigationController* _navigationController;
	BOOL _showsCancelButton;

}

@property (assign,nonatomic) BOOL showsCancelButton;              //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic) BOOL showsLocalLibrary; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)presentSharedLibrariesViewController:(BOOL)arg1 ;
-(void)setShowsLocalLibrary:(BOOL)arg1 ;
-(BOOL)showsLocalLibrary;
-(void)dismissSharedLibrariesViewController:(BOOL)arg1 ;
@end
