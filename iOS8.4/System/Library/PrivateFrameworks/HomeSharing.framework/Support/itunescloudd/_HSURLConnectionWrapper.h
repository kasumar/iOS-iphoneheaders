/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/NSURLConnectionDelegate.h>
#import <itunescloudd/NSURLConnectionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURLConnection, NSMutableData, NSURLResponse, NSURLRequest, NSString;

@interface _HSURLConnectionWrapper : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	/*^block*/id _completionHandler;
	NSURLConnection* _connection;
	NSMutableData* _data;
	NSURLResponse* _response;
	BOOL _disableCache;
	NSURLRequest* _request;

}

@property (nonatomic,readonly) NSURLRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(NSURLRequest *)request;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithRequest:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
@end
