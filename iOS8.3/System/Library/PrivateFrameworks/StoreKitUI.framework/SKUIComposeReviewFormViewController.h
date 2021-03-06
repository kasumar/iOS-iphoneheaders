/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <StoreKitUI/SKUIComposeReviewViewDelegate.h>

@protocol SKUIComposeReviewFormDelegate;
@class SKUIComposeReviewView, SKUIReviewMetadata, NSString;

@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate> {

	SKUIComposeReviewView* _composeView;
	id<SKUIComposeReviewFormDelegate> _delegate;
	SKUIReviewMetadata* _review;

}

@property (assign,nonatomic,__weak) id<SKUIComposeReviewFormDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) SKUIReviewMetadata * editedReviewMetadata; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRating:(float)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SKUIComposeReviewFormDelegate>)arg1 ;
-(id<SKUIComposeReviewFormDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)_cancel;
-(SKUIReviewMetadata *)editedReviewMetadata;
-(id)initWithReviewMetadata:(id)arg1 ;
-(void)_submit;
-(void)composeReviewViewValidityChanged:(id)arg1 ;
@end

