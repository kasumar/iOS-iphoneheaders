/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:07:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLConnection, NSData, NSError;

@interface QLThreadInvoker : NSObject {

	NSURLConnection* _connection;
	NSData* _data;
	NSError* _error;

}
-(id)initWithConnection:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)connectionDidReceiveDataLengthReceived:(id)arg1 ;
-(void)dealloc;
-(void)connectionDidReceiveData:(id)arg1 ;
-(void)connectionDidFailWithError:(id)arg1 ;
@end

