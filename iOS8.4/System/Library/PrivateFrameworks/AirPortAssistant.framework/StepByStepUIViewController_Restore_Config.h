/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController.h>

@class UIView, UILabel;

@interface StepByStepUIViewController_Restore_Config : StepByStepUIViewController {

	UIView* restoreRecommendationContainerView;
	UILabel* restoreRecommendationLabel;
	UIView* dontRestoreRecommendationContainerView;
	UILabel* dontRestoreRecommendationLabel;
	BOOL dontRestore;

}

@property (nonatomic,retain) UIView * restoreRecommendationContainerView; 
@property (nonatomic,retain) UIView * dontRestoreRecommendationContainerView; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setupInitialTableHeaderConfiguration;
-(void)setRestoreRecommendationContainerView:(UIView *)arg1 ;
-(void)setDontRestoreRecommendationContainerView:(UIView *)arg1 ;
-(UIView *)dontRestoreRecommendationContainerView;
-(UIView *)restoreRecommendationContainerView;
@end

