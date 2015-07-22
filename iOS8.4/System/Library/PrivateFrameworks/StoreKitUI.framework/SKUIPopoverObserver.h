/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, NSString;

@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate> {

	UIPopoverController* _popoverController;
	SEL _selector;
	id _target;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)initWithPopoverController:(id)arg1 ;
-(void)setTarget:(id)arg1 selector:(SEL)arg2 ;
@end
