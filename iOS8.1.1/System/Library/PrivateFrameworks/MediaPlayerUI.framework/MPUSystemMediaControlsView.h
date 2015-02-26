/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>
#import <MediaPlayerUI/SKUIItemOfferButtonDelegate.h>

@protocol MPUSystemMediaControlsViewDelegate;
@class MPUItemOfferButton, MPUSkipLimitView, MPUTransportControlsView, MPUChronologicalProgressView, MPUMediaControlsTitlesView, MPUMediaControlsVolumeView, MPUSystemBuyButtonConfiguration, NSString;

@interface MPUSystemMediaControlsView : UIView <SKUIItemOfferButtonDelegate> {

	MPUItemOfferButton* _buyTrackButton;
	MPUItemOfferButton* _buyAlbumButton;
	int _prefsChangedNotifyToken;
	id<MPUSystemMediaControlsViewDelegate> _delegate;
	long long _style;
	MPUSkipLimitView* _skipLimitView;
	MPUTransportControlsView* _transportControlsView;
	MPUChronologicalProgressView* _timeInformationView;
	MPUMediaControlsTitlesView* _trackInformationView;
	MPUMediaControlsVolumeView* _volumeView;
	MPUSystemBuyButtonConfiguration* _buyTrackConfiguration;
	MPUSystemBuyButtonConfiguration* _buyAlbumConfiguration;

}

@property (assign,nonatomic,__weak) id<MPUSystemMediaControlsViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) MPUSkipLimitView * skipLimitView;                                     //@synthesize skipLimitView=_skipLimitView - In the implementation block
@property (nonatomic,readonly) MPUTransportControlsView * transportControlsView;                     //@synthesize transportControlsView=_transportControlsView - In the implementation block
@property (nonatomic,readonly) MPUChronologicalProgressView * timeInformationView;                   //@synthesize timeInformationView=_timeInformationView - In the implementation block
@property (nonatomic,readonly) MPUMediaControlsTitlesView * trackInformationView;                    //@synthesize trackInformationView=_trackInformationView - In the implementation block
@property (nonatomic,readonly) MPUMediaControlsVolumeView * volumeView;                              //@synthesize volumeView=_volumeView - In the implementation block
@property (nonatomic,readonly) MPUSystemBuyButtonConfiguration * buyTrackConfiguration;              //@synthesize buyTrackConfiguration=_buyTrackConfiguration - In the implementation block
@property (nonatomic,readonly) MPUSystemBuyButtonConfiguration * buyAlbumConfiguration;              //@synthesize buyAlbumConfiguration=_buyAlbumConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPUMediaControlsVolumeView *)volumeView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MPUSystemMediaControlsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MPUSystemMediaControlsViewDelegate>)delegate;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MPUSkipLimitView *)skipLimitView;
-(id)_createBuyButtonWithTitle:(id)arg1 style:(long long)arg2 ;
-(id)_createBuyButtonConfiguration;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(MPUSystemBuyButtonConfiguration *)buyTrackConfiguration;
-(MPUSystemBuyButtonConfiguration *)buyAlbumConfiguration;
-(void)_layoutSubviewsControlCenteriPad;
-(UIEdgeInsets)_controlsInsets;
-(void)_layoutBuyButtons;
-(void)_layoutBuyButtonsControlCenteriPad;
-(id)_buyButtonForConfiguration:(id)arg1 ;
-(void)_setBuyButtonVisibility:(BOOL)arg1 forButton:(id)arg2 ;
-(void)_setProgressType:(unsigned long long)arg1 forBuyButton:(id)arg2 ;
-(void)_setDownloadProgress:(float)arg1 forBuyButton:(id)arg2 ;
-(void)_updateBuyButton:(id)arg1 withOffer:(id)arg2 ;
-(void)_setConfirmationState:(BOOL)arg1 forBuyButton:(id)arg2 ;
-(BOOL)_systemwideBuyButtonsEnabled;
-(void)_buyButtonShowConfirmationAction:(id)arg1 ;
-(void)_buyButtonCancelConfirmationAction:(id)arg1 ;
-(void)_buyButtonPurchaseAction:(id)arg1 ;
-(void)updatePlaybackState:(BOOL)arg1 ;
-(MPUTransportControlsView *)transportControlsView;
-(MPUChronologicalProgressView *)timeInformationView;
-(MPUMediaControlsTitlesView *)trackInformationView;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
@end
