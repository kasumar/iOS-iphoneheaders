/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <SiriUI/SiriUIAceObjectViewController.h>

@class SAUIImageView, UIButton;

@interface SiriGKImageDetailViewController : SiriUIAceObjectViewController {

	SAUIImageView* _imageViewSnippet;
	UIButton* _imageButton;

}
-(void)_hideImageButtonHighlight;
-(id)initWithImageViewSnippet:(id)arg1 ;
-(void)_showImageButtonHighlight;
-(CGSize)_displayedImageSizeForImageSize:(CGSize)arg1 inWidth:(double)arg2 ;
-(void)_configureImageView:(id)arg1 forImageSize:(CGSize)arg2 inWidth:(double)arg3 ;
-(void)_imageButtonTapped;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)loadView;
-(id)navigationTitle;
-(void)setAceObject:(id)arg1 ;
@end

