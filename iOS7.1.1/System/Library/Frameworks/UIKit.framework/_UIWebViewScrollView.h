/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebScrollView.h>

@class _UIWebViewScrollViewDelegateForwarder, UIWebBrowserView;

@interface _UIWebViewScrollView : UIWebScrollView {

	_UIWebViewScrollViewDelegateForwarder* _forwarder;
	bool _bouncesSetExplicitly;
	UIWebBrowserView* _browserView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setBounces:(bool)arg1 ;
-(void)setBouncesHorizontally:(bool)arg1 ;
-(void)setBouncesVertically:(bool)arg1 ;
-(void)_weaklySetBouncesHorizontally:(bool)arg1 ;
-(void)_setWebView:(id)arg1 ;
@end
