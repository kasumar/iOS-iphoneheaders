/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MusicLayoutMarginProxyViewDelegate;
@interface MusicLayoutMarginProxyView : UIView {

	BOOL _shouldUseConsistentHorizontalInsets;
	id<MusicLayoutMarginProxyViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MusicLayoutMarginProxyViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldUseConsistentHorizontalInsets;                            //@synthesize shouldUseConsistentHorizontalInsets=_shouldUseConsistentHorizontalInsets - In the implementation block
-(void)setDelegate:(id<MusicLayoutMarginProxyViewDelegate>)arg1 ;
-(id<MusicLayoutMarginProxyViewDelegate>)delegate;
-(void)layoutMarginsDidChange;
-(UIEdgeInsets)layoutMargins;
-(void)setShouldUseConsistentHorizontalInsets:(BOOL)arg1 ;
-(BOOL)shouldUseConsistentHorizontalInsets;
@end

