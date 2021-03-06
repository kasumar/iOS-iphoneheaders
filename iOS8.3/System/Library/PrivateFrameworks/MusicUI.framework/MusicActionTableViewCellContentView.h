/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:47:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicTableViewCellContentView.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface MusicActionTableViewCellContentView : MusicTableViewCellContentView {

	char _displayAsDisabled;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIOffset _imageOffset;

}

@property (assign,getter=isDisplayingAsDisabled,nonatomic) char displayAsDisabled;              //@synthesize displayAsDisabled=_displayAsDisabled - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) UIOffset imageOffset;                                              //@synthesize imageOffset=_imageOffset - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) UIImageView * imageView;                                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(UIOffset)imageOffset;
-(void)setImageOffset:(UIOffset)arg1 ;
-(char)isDisplayingAsDisabled;
-(void)setDisplayAsDisabled:(char)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
@end

