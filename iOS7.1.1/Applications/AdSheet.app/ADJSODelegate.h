/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADJSODelegate
@required
-(void)scriptObjectContentSignalsReady:(id)arg1;
-(void)privilegedAdWantsToDismiss;
-(void)scriptObject:(id)arg1 didReportClickEventWithContext:(id)arg2;
-(unsigned)scriptObjectRequestsSupportedInterfaceOrientations:(id)arg1;
-(void)scriptObject:(id)arg1 didChangeSupportedInterfaceOrientations:(unsigned)arg2;
-(BOOL)javaScriptObjectShouldBeginModalActivity:(id)arg1;
-(void)javaScriptObjectDidFinishModalActivity:(id)arg1;
-(id)scriptObject:(id)arg1 requestsURLForString:(id)arg2 allowOtherDomains:(BOOL)arg3 error:(id*)arg4;
-(void)scriptObject:(id)arg1 requestsPresentModalViewController:(id)arg2 animated:(BOOL)arg3;
-(void)scriptObject:(id)arg1 didReportSystemEventWithType:(int)arg2;
-(void)scriptObject:(id)arg1 requestsDismissModalViewControllerAnimated:(BOOL)arg2;
-(void)scriptObject:(id)arg1 requestsPreview:(id)arg2 completion:(/*^block*/ id)arg3;
-(void)scriptObjectWillTakeScreenShot:(id)arg1;
-(void)scriptObjectDidTakeScreenShot:(id)arg1;
-(void)dispatchDOMEventWithName:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3;
-(void)scriptObject:(id)arg1 requestsPresentPopoverViewController:(id)arg2 fromRect:(CGRect)arg3 animated:(BOOL)arg4 tapDismissalHandler:(/*^block*/ id)arg5;
-(void)scriptObject:(id)arg1 requestsDismissPopoverViewControllerAnimated:(BOOL)arg2;
-(void)registerForAdDimissal:(id)arg1;
-(void)scriptObjectPopoverShouldResize:(id)arg1;
-(id)webViewForScriptObject:(id)arg1;
-(void)scriptObject:(id)arg1 didCreateView:(id)arg2;
-(void)scriptObjectRequestsGeolocation:(id)arg1;
-(id)clientAuditToken;
-(void)removeImageFromCacheForURL:(id)arg1;
-(int)interfaceOrientation;
-(bool)addImageToCache:(CGImageRef)arg1 forURL:(id)arg2;
@end

