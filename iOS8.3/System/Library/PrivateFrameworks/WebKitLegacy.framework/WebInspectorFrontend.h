/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:21:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebInspectorFrontend : NSObject {

	WebInspectorFrontendClient* m_frontendClient;

}
-(void)setDebuggingEnabled:(char)arg1 ;
-(void)detach;
-(void)attach;
-(void)showConsole;
-(char)isDebuggingEnabled;
-(char)isTimelineProfilingEnabled;
-(void)setTimelineProfilingEnabled:(char)arg1 ;
-(char)isProfilingJavaScript;
-(id)initWithFrontendClient:(WebInspectorFrontendClient*)arg1 ;
-(void)startProfilingJavaScript;
-(void)stopProfilingJavaScript;
@end
