/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarEditItem.h>
#import <EventKitUI/CalendarPublishingActivityDelegate.h>

@class UIView, UILabel, UIActivityIndicatorView, NSString;

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate> {

	char _published;
	UIView* _footerView;
	UILabel* _descriptionLabel;
	UILabel* _publishingLabel;
	UIActivityIndicatorView* _spinner;

}

@property (assign,nonatomic) char published;                        //@synthesize published=_published - In the implementation block
@property (nonatomic,readonly) UIView * footerView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPublished:(char)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(unsigned)numberOfSubitems;
-(char)configureWithCalendar:(id)arg1 ;
-(id)footerViewForSection;
-(float)footerHeightForSection;
-(void)layoutForWidth:(float)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned)arg2 ;
-(void)_applyStyleToUILabel:(id)arg1 ;
-(id)pubishURL;
-(id)calendarTitle;
-(void)_publishChanged:(id)arg1 ;
-(char)published;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)reset;
-(UIView *)footerView;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
@end

