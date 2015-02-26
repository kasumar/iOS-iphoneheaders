/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class UIColor;


@protocol SBSearchResultDetailsViewController <NSObject>
@property (assign) id<SBSearchResultDetailsViewControllerDelegate> actionDelegate; 
@property (readonly) BOOL wantsInset; 
@property (retain) UIColor * contentBackgroundColor; 
@optional
-(void)setContentBackgroundColor:(id)arg1;
-(UIColor *)contentBackgroundColor;

@required
+(id)viewControllerForResult:(id)arg1 inSection:(id)arg2;
-(BOOL)wantsInset;
-(void)setActionDelegate:(id)arg1;
-(id<SBSearchResultDetailsViewControllerDelegate>)actionDelegate;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1;

@end
