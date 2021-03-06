/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableSet, NSLock;

@interface SBTransactionManager : NSObject {

	NSMutableSet* _openTransactions;
	NSMutableSet* _keepAliveTransactions;
	BOOL _keepAliveClearable;
	NSLock* _lock;

}
+(id)sharedInstance;
-(void)setKeepAliveClearable:(BOOL)arg1 ;
-(BOOL)isKeepAliveEnabled;
-(void)clearKeepAliveIfNecessary:(BOOL)arg1 ;
-(id)openTransactions;
-(void)beginTransaction:(id)arg1 keepAlive:(BOOL)arg2 ;
-(BOOL)hasOpenTransactionForName:(id)arg1 ;
-(void)_toggleKeepAliveStatus;
-(BOOL)_isKeepAliveEnabled:(id*)arg1 ;
-(void)_setKeepAlive:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)beginTransaction:(id)arg1 ;
-(void)endTransaction:(id)arg1 ;
@end

