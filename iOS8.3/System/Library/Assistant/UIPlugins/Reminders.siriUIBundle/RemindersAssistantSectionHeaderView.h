/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:07:00 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Reminders.siriUIBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface RemindersAssistantSectionHeaderView : UIView {

	UILabel* _dateLabel;
	UILabel* _countLabel;
	UIView* _dividerLine;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCountString:(id)arg1 ;
-(void)setDateString:(id)arg1 ;
@end

