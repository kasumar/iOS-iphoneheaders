/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebVideoFullscreenController : NSObject {

	RefPtr<WebCore::HTMLMediaElement>* _mediaElement;
	RefPtr<WebCore::WebVideoFullscreenInterfaceAVKit>* _interface;
	RefPtr<WebCore::WebVideoFullscreenModelMediaElement>* _model;
	WebVideoFullscreenControllerChangeObserver* _changeObserver;
	RetainPtr<CALayer>* _videoFullscreenLayer;

}
-(void)dealloc;
-(id)init;
-(void)setMediaElement:(HTMLMediaElement*)arg1 ;
-(HTMLMediaElement*)mediaElement;
-(void)enterFullscreen:(id)arg1 ;
-(void)exitFullscreen;
-(void)requestHideAndExitFullscreen;
-(void)didSetupFullscreen;
-(void)didEnterFullscreen;
-(void)didExitFullscreen;
-(void)didCleanupFullscreen;
@end

