/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIWebView.h>

@class UIColor, UIView, NSString;

@interface SUWebView : UIWebView {

	bool _isPinned;
	UIColor* _originalBackgroundColor;
	BOOL _originalShowsBackgroundShadow;
	double _pinnedHeaderInsetAdjustment;
	UIView* _pinnedHeaderView;
	unsigned _scrollingDisabled : 1;
	bool _showsTopBackgroundShadow;
	long long _synchronousLayoutCount;
	UIColor* _topBackgroundColor;

}

@property (assign,nonatomic,@dynamic) <SUWebViewDelegate> * delegate; 
@property (assign,getter=isScrollingEnabled,nonatomic) bool scrollingEnabled; 
@property (nonatomic,readonly) NSString * title; 
@property (assign,nonatomic) bool showsTopBackgroundShadow;                                //@synthesize showsTopBackgroundShadow=_showsTopBackgroundShadow - In the implementation block
@property (nonatomic,retain) UIColor * topBackgroundColor;                                 //@synthesize topBackgroundColor=_topBackgroundColor - In the implementation block
@property (nonatomic,readonly) id windowScriptObject; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setScrollingEnabled:(bool)arg1 ;
-(id)title;
-(void)view:(id)arg1 didSetFrame:(CGRect)arg2 oldFrame:(CGRect)arg3 ;
-(void)_setRichTextReaderViewportSettings;
-(void)loadArchive:(id)arg1 ;
-(id)windowScriptObject;
-(void)beginSynchronousLayout;
-(void)endSynchronousLayout;
-(bool)getStatusBarStyle:(long long*)arg1 ;
-(bool)isScrollingEnabled;
-(void)_setPinnedHeaderView:(id)arg1 withTopInsetAdjustment:(double)arg2 ;
-(bool)showsTopBackgroundShadow;
-(void)setShowsTopBackgroundShadow:(bool)arg1 ;
-(id)topBackgroundColor;
-(void)setTopBackgroundColor:(id)arg1 ;
@end

