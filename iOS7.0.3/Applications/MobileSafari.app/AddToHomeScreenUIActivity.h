/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <MobileSafari/WebClipDelegate.h>
#import <MobileSafari/WebClipViewControllerDelegate.h>

@class UINavigationController, WebClipViewController, UIWebClip;

@interface AddToHomeScreenUIActivity : UIActivity <WebClipDelegate, WebClipViewControllerDelegate> {

	UINavigationController* _wrappingNavigationController;
	WebClipViewController* _webClipViewController;
	UIWebClip* _webClip;
	BOOL _waitingForSnapshot;

}
-(void)webClipViewController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(void)_createWebClip;
-(void)_updateImageFromActiveTabDocument;
-(void)dealloc;
-(id)init;
-(void)webClip:(id)arg1 iconRequestDidFinishWithImage:(id)arg2 precomposed:(BOOL)arg3 ;
-(void)webClip:(id)arg1 startupImageRequestDidFinishWithImage:(id)arg2 ;
-(void)webClip:(id)arg1 startupLandscapeImageRequestDidFinishWithImage:(id)arg2 ;
-(id)activityTitle;
-(id)activityType;
-(void)activityDidFinish:(BOOL)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_beforeActivity;
-(id)_embeddedActivityViewController;
@end

