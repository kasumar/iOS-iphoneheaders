/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class StockPickerViewController;

@interface StocksBackSideViewController : UIViewController {

	StockPickerViewController* _pickerViewController;
	BOOL _isShowing;

}
-(void)showStockPicker;
-(void)cancelPicker;
-(void)dealloc;
-(id)view;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)isLoading;
-(void).cxx_destruct;
-(BOOL)isShowing;
-(void)updateDoneButton;
@end

