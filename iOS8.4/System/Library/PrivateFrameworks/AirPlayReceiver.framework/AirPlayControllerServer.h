/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPlayReceiver/NSXPCListenerDelegate.h>
#import <AirPlayReceiver/AirPlayControllerAsync.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSXPCListener;

@interface AirPlayControllerServer : NSObject <NSXPCListenerDelegate, AirPlayControllerAsync> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _serviceName;
	NSXPCListener* _xpcListener;
	/*^block*/id _performCommandBlock;
	/*^block*/id _copyPropertyBlock;
	/*^block*/id _setPropertyBlock;

}

@property (assign,nonatomic) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id performCommandBlock;                                    //@synthesize performCommandBlock=_performCommandBlock - In the implementation block
@property (nonatomic,copy) id copyPropertyBlock;                                      //@synthesize copyPropertyBlock=_copyPropertyBlock - In the implementation block
@property (nonatomic,copy) id setPropertyBlock;                                       //@synthesize setPropertyBlock=_setPropertyBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_connectionInvalidated:(id)arg1 ;
-(void)startWithXPCName:(id)arg1 ;
-(id)performCommandBlock;
-(void)setPerformCommandBlock:(id)arg1 ;
-(id)copyPropertyBlock;
-(void)setCopyPropertyBlock:(id)arg1 ;
-(id)setPropertyBlock;
-(void)setSetPropertyBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

