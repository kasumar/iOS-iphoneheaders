/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:08:58 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/NotificationSettings.bundle/NotificationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AlertStyleView : UIView {

	UIImageView* _selectionImage;
	UILabel* _alertName;
	char _isSelected;
	UIImageView* _alertStyleImageContentView;

}

@property (nonatomic,retain) UIImageView * alertStyleImageContentView;              //@synthesize alertStyleImageContentView=_alertStyleImageContentView - In the implementation block
@property (nonatomic,retain) UIImageView * selectionImage;                          //@synthesize selectionImage=_selectionImage - In the implementation block
@property (nonatomic,retain) UILabel * alertName;                                   //@synthesize alertName=_alertName - In the implementation block
@property (assign,nonatomic) char isSelected;                                       //@synthesize isSelected=_isSelected - In the implementation block
+(id)selectionImageForView:(id)arg1 ;
-(UIImageView *)selectionImage;
-(void)setAlertStyleImageContentView:(UIImageView *)arg1 ;
-(void)setSelectionImage:(UIImageView *)arg1 ;
-(void)setAlertName:(UILabel *)arg1 ;
-(UIImageView *)alertStyleImageContentView;
-(UILabel *)alertName;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithType:(id)arg1 ;
-(void)sizeToFit;
-(char)isSelected;
-(void)setIsSelected:(char)arg1 ;
@end

