/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView;

@interface SKUISegmentedTableHeaderView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	UIView* _segmentedControl;

}

@property (assign,nonatomic) char hidesBorderView; 
@property (nonatomic,retain) UIView * segmentedControl;                     //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)segmentedControl;
-(_UIBackdropView *)backdropView;
-(id)_borderView;
-(char)hidesBorderView;
-(void)setHidesBorderView:(char)arg1 ;
-(void)setSegmentedControl:(UIView *)arg1 ;
@end

