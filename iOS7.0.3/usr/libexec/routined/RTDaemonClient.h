/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, NSObject;

@interface RTDaemonClient : NSObject {

	NSXPCConnection* _xpcConnection;
	NSString* _executablePath;
	int _pid;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;                             //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) int pid;                                               //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic,__weak) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
-(id)initWithConnection:(id)arg1 andQueue:(id)arg2 ;
-(id)description;
-(id)executablePath;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(int)pid;
-(id)xpcConnection;
-(void)setXpcConnection:(id)arg1 ;
-(void).cxx_destruct;
@end

