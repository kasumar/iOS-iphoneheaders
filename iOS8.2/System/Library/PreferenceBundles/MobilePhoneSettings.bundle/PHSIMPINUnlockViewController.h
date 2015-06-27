/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobilePhoneSettings/TPSetPINViewControllerDelegate.h>

@protocol PHSIMPINUnlockViewControllerDelegate;
@class TPSetPINViewController;

@interface PHSIMPINUnlockViewController : UIViewController <TPSetPINViewControllerDelegate> {

	char _locking;
	id<PHSIMPINUnlockViewControllerDelegate> _delegate;
	TPSetPINViewController* _setPINViewController;

}

@property (assign) id<PHSIMPINUnlockViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) TPSetPINViewController * setPINViewController;                  //@synthesize setPINViewController=_setPINViewController - In the implementation block
@property (assign) char locking;                                                   //@synthesize locking=_locking - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<PHSIMPINUnlockViewControllerDelegate>)arg1 ;
-(id<PHSIMPINUnlockViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setSetPINViewController:(TPSetPINViewController *)arg1 ;
-(TPSetPINViewController *)setPINViewController;
-(id)initForLocking:(char)arg1 ;
-(void)setLocking:(char)arg1 ;
-(void)_simLockChangedAfterSave:(id)arg1 ;
-(char)locking;
-(void)setPINViewControllerFinished:(id)arg1 success:(char)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
@end
