/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:17:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIImage, SCATModernMenuItem;

@interface SCATModernMenuItemCell : UICollectionViewCell {

	UIImageView* _backgroundBorderImageView;
	UIImageView* _pressedBackgroundBorderImageView;
	UIImage* _pressedBackgroundImage;
	UIImage* _defaultBackgroundImage;
	UIImage* _dimmedBackgroundImage;
	UIImageView* _iconImageView;
	UIImage* _dimmedIconImage;
	UIImage* _highVisBackgroundAndIconImage;
	SCATModernMenuItem* _menuItem;
	UIImage* _iconImage;
	float _iconImageAngle;

}

@property (nonatomic,retain) UIImage * iconImage;                                         //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) SCATModernMenuItem * menuItem;                               //@synthesize menuItem=_menuItem - In the implementation block
@property (nonatomic,retain) UIImageView * pressedBackgroundBorderImageView;              //@synthesize pressedBackgroundBorderImageView=_pressedBackgroundBorderImageView - In the implementation block
@property (assign,nonatomic) float iconImageAngle;                                        //@synthesize iconImageAngle=_iconImageAngle - In the implementation block
@property (nonatomic,retain) UIImage * defaultBackgroundImage;                            //@synthesize defaultBackgroundImage=_defaultBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * pressedBackgroundImage;                            //@synthesize pressedBackgroundImage=_pressedBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * dimmedBackgroundImage;                             //@synthesize dimmedBackgroundImage=_dimmedBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundBorderImageView;                     //@synthesize backgroundBorderImageView=_backgroundBorderImageView - In the implementation block
@property (nonatomic,retain) UIImage * dimmedIconImage;                                   //@synthesize dimmedIconImage=_dimmedIconImage - In the implementation block
@property (nonatomic,retain) UIImage * highVisBackgroundAndIconImage;                     //@synthesize highVisBackgroundAndIconImage=_highVisBackgroundAndIconImage - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                                 //@synthesize iconImageView=_iconImageView - In the implementation block
-(char)scatIndicatesOwnFocus;
-(char)scatSupportsAction:(int)arg1 ;
-(id)scatSpeakableDescription;
-(char)scatPerformAction:(int)arg1 ;
-(CGRect)scatFrame;
-(void)setMenuItem:(SCATModernMenuItem *)arg1 ;
-(void)didUpdateScatMenuItemStyle;
-(void)setIconImageAngle:(float)arg1 ;
-(void)setPressedBackgroundImage:(UIImage *)arg1 ;
-(void)setDefaultBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)defaultBackgroundImage;
-(void)setDimmedBackgroundImage:(UIImage *)arg1 ;
-(void)setBackgroundBorderImageView:(UIImageView *)arg1 ;
-(void)setPressedBackgroundBorderImageView:(UIImageView *)arg1 ;
-(UIImageView *)pressedBackgroundBorderImageView;
-(UIImage *)pressedBackgroundImage;
-(void)setHighVisBackgroundAndIconImage:(UIImage *)arg1 ;
-(UIImage *)highVisBackgroundAndIconImage;
-(float)iconImageAngle;
-(UIImageView *)backgroundBorderImageView;
-(UIImage *)dimmedBackgroundImage;
-(void)_setBorderDimmed:(char)arg1 focused:(char)arg2 hidden:(char)arg3 ;
-(void)_setIconDimmed:(char)arg1 asDimAsBorder:(char)arg2 focused:(char)arg3 ;
-(char)scatShouldActivateDirectly;
-(void)setIconImage:(UIImage *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)description;
-(void)prepareForReuse;
-(UIImage *)iconImage;
-(void)setDimmedIconImage:(UIImage *)arg1 ;
-(UIImage *)dimmedIconImage;
-(SCATModernMenuItem *)menuItem;
@end

