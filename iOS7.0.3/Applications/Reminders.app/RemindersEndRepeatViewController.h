/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RemindersEndRepeatControllerDelegate;
@class NSDate, UITableViewCell, UIDatePicker;

@interface RemindersEndRepeatViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSDate* _endRepeatDate;
	NSDate* _originalEndRepeatDate;
	NSDate* _alertDate;
	int _repeatType;
	BOOL _isShowingDatePickerCell;
	UITableViewCell* _datePickerCell;
	UIDatePicker* _datePicker;
	<RemindersEndRepeatControllerDelegate>* _delegate;

}

@property (retain) <RemindersEndRepeatControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)pickerChanged:(id)arg1 ;
-(void)repeatForeverTapped;
-(id)initWithEndDate:(id)arg1 repeatType:(int)arg2 firstAlertDate:(id)arg3 ;
-(id)endRepeatDate;
-(id)defaultDate;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)cancel;
-(void)done;
-(void).cxx_destruct;
@end

