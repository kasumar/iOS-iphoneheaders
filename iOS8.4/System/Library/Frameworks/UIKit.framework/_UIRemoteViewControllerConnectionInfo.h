/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _UIViewServiceInterface, NSArray, _UIViewServiceXPCMachSendRight, _UIHostedWindowHostingHandle;

@interface _UIRemoteViewControllerConnectionInfo : NSObject {

	BOOL _prefersStatusBarHidden;
	_UIViewServiceInterface* _interface;
	id _viewControllerOperatorProxy;
	id _serviceViewControllerProxy;
	id _serviceViewControllerControlMessageProxy;
	id _textEffectsOperatorProxy;
	NSArray* _serviceViewControllerSupportedInterfaceOrientations;
	_UIViewServiceXPCMachSendRight* _serviceAccessibilityServerPortWrapper;
	long long _preferredStatusBarStyle;
	_UIHostedWindowHostingHandle* _hostedWindowHostingHandle;
	_UIHostedWindowHostingHandle* _textEffectsWindowHostingHandle;
	_UIHostedWindowHostingHandle* _textEffectsWindowAboveStatusBarHostingHandle;
	_UIHostedWindowHostingHandle* _remoteKeyboardsWindowHostingHandle;

}

@property (retain) _UIViewServiceInterface * interface;                                                      //@synthesize interface=_interface - In the implementation block
@property (retain) id viewControllerOperatorProxy;                                                           //@synthesize viewControllerOperatorProxy=_viewControllerOperatorProxy - In the implementation block
@property (retain) id serviceViewControllerProxy;                                                            //@synthesize serviceViewControllerProxy=_serviceViewControllerProxy - In the implementation block
@property (retain) id serviceViewControllerControlMessageProxy;                                              //@synthesize serviceViewControllerControlMessageProxy=_serviceViewControllerControlMessageProxy - In the implementation block
@property (retain) id textEffectsOperatorProxy;                                                              //@synthesize textEffectsOperatorProxy=_textEffectsOperatorProxy - In the implementation block
@property (retain) NSArray * serviceViewControllerSupportedInterfaceOrientations;                            //@synthesize serviceViewControllerSupportedInterfaceOrientations=_serviceViewControllerSupportedInterfaceOrientations - In the implementation block
@property (retain) _UIViewServiceXPCMachSendRight * serviceAccessibilityServerPortWrapper;                   //@synthesize serviceAccessibilityServerPortWrapper=_serviceAccessibilityServerPortWrapper - In the implementation block
@property (assign) long long preferredStatusBarStyle;                                                        //@synthesize preferredStatusBarStyle=_preferredStatusBarStyle - In the implementation block
@property (assign) BOOL prefersStatusBarHidden;                                                              //@synthesize prefersStatusBarHidden=_prefersStatusBarHidden - In the implementation block
@property (retain) _UIHostedWindowHostingHandle * hostedWindowHostingHandle;                                 //@synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle - In the implementation block
@property (retain) _UIHostedWindowHostingHandle * textEffectsWindowHostingHandle;                            //@synthesize textEffectsWindowHostingHandle=_textEffectsWindowHostingHandle - In the implementation block
@property (retain) _UIHostedWindowHostingHandle * textEffectsWindowAboveStatusBarHostingHandle;              //@synthesize textEffectsWindowAboveStatusBarHostingHandle=_textEffectsWindowAboveStatusBarHostingHandle - In the implementation block
@property (retain) _UIHostedWindowHostingHandle * remoteKeyboardsWindowHostingHandle;                        //@synthesize remoteKeyboardsWindowHostingHandle=_remoteKeyboardsWindowHostingHandle - In the implementation block
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(id)serviceViewControllerProxy;
-(_UIViewServiceInterface *)interface;
-(void)setInterface:(_UIViewServiceInterface *)arg1 ;
-(id)viewControllerOperatorProxy;
-(void)setViewControllerOperatorProxy:(id)arg1 ;
-(void)setServiceViewControllerProxy:(id)arg1 ;
-(id)serviceViewControllerControlMessageProxy;
-(void)setServiceViewControllerControlMessageProxy:(id)arg1 ;
-(id)textEffectsOperatorProxy;
-(void)setTextEffectsOperatorProxy:(id)arg1 ;
-(NSArray *)serviceViewControllerSupportedInterfaceOrientations;
-(void)setServiceViewControllerSupportedInterfaceOrientations:(NSArray *)arg1 ;
-(_UIViewServiceXPCMachSendRight *)serviceAccessibilityServerPortWrapper;
-(void)setServiceAccessibilityServerPortWrapper:(_UIViewServiceXPCMachSendRight *)arg1 ;
-(void)setPreferredStatusBarStyle:(long long)arg1 ;
-(void)setPrefersStatusBarHidden:(BOOL)arg1 ;
-(_UIHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(void)setHostedWindowHostingHandle:(_UIHostedWindowHostingHandle *)arg1 ;
-(_UIHostedWindowHostingHandle *)textEffectsWindowHostingHandle;
-(void)setTextEffectsWindowHostingHandle:(_UIHostedWindowHostingHandle *)arg1 ;
-(_UIHostedWindowHostingHandle *)textEffectsWindowAboveStatusBarHostingHandle;
-(void)setTextEffectsWindowAboveStatusBarHostingHandle:(_UIHostedWindowHostingHandle *)arg1 ;
-(_UIHostedWindowHostingHandle *)remoteKeyboardsWindowHostingHandle;
-(void)setRemoteKeyboardsWindowHostingHandle:(_UIHostedWindowHostingHandle *)arg1 ;
@end
