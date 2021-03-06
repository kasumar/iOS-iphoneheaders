/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSString, _UILegibilityLabel, _UILegibilityView, UIImageView, PTIconSettings;

@interface PTIcon : UIView {

	UIImage* _image;
	NSString* _title;
	_UILegibilityLabel* _label;
	_UILegibilityView* _iconLegibilityView;
	UIImageView* _imageView;
	PTIconSettings* _iconSettings;
	CFRunLoopObserverRef _runLoopObserver;
	SCD_Struct_PT1 _imageStatistics;

}

@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _UILegibilityLabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) _UILegibilityView * iconLegibilityView;              //@synthesize iconLegibilityView=_iconLegibilityView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) PTIconSettings * iconSettings;                       //@synthesize iconSettings=_iconSettings - In the implementation block
@property (assign,nonatomic) SCD_Struct_PT1 imageStatistics;                      //@synthesize imageStatistics=_imageStatistics - In the implementation block
@property (assign,nonatomic) CFRunLoopObserverRef runLoopObserver;                //@synthesize runLoopObserver=_runLoopObserver - In the implementation block
+(id)iconWithImage:(id)arg1 title:(id)arg2 ;
+(id)iconWithImageName:(id)arg1 title:(id)arg2 ;
-(CGRect)labelFrame;
-(void)setImage:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)image;
-(id)title;
-(id)imageView;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)setImageView:(id)arg1 ;
-(CFRunLoopObserverRef)runLoopObserver;
-(void)setRunLoopObserver:(CFRunLoopObserverRef)arg1 ;
-(void)setImageStatistics:(SCD_Struct_PT1)arg1 ;
-(SCD_Struct_PT1)imageStatistics;
-(id)iconLegibilityView;
-(void)setIconLegibilityView:(id)arg1 ;
-(id)iconSettings;
-(void)setIconSettings:(id)arg1 ;
-(void).cxx_destruct;
@end

