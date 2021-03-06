/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/NSURLConnectionDataDelegate.h>

@class NSURL, NSURLConnection, NSMutableData, NSData, NSString;

@interface _GEOResourceLoadOperation : NSObject <NSURLConnectionDataDelegate> {

	NSURL* _url;
	/*^block*/id _completionHandler;
	NSURLConnection* _conn;
	NSMutableData* _data;
	char _expectsPartialContent;
	NSData* _auditToken;

}

@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(NSData *)data;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithURL:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end

