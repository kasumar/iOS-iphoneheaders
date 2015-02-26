/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BSActionListener;

@interface BSActionListenerController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _transactionCount;
	BSActionListener* _listener;
	unsigned _listenerCount;
	unsigned _listenerTearDownToken;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)listener;
-(void)beginTransactionForListener:(id)arg1 ;
-(void)endTransactionForListener:(id)arg1 ;
-(void)beginTransaction;
-(void)endTransaction;
@end
