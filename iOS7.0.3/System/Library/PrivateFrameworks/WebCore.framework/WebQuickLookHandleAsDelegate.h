/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@interface WebQuickLookHandleAsDelegate : NSObject <NSURLConnectionDelegate> {

	CFURLConnectionRef m_connection;
	ResourceHandle* m_handle;

}
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)initWithConnection:(CFURLConnectionRef)arg1 handle:(ResourceHandle*)arg2 ;
-(void)connection:(id)arg1 didReceiveDataArray:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3 ;
-(void)clearHandle;
@end

