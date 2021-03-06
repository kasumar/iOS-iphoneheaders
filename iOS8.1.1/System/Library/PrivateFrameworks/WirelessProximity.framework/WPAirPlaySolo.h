/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessProximity/XPCClientDelegate.h>

@protocol WPAirPlaySoloDelegate;
@class XPCClient, NSString;

@interface WPAirPlaySolo : NSObject <XPCClientDelegate> {

	long long _state;
	XPCClient* _connection;
	id<WPAirPlaySoloDelegate> _delegate;

}

@property (assign) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) XPCClient * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<WPAirPlaySoloDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState:(long long)arg1 ;
-(void)connectionInterrupted;
-(void)dealloc;
-(void)setDelegate:(id<WPAirPlaySoloDelegate>)arg1 ;
-(NSString *)description;
-(id<WPAirPlaySoloDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(XPCClient *)connection;
-(void)setConnection:(XPCClient *)arg1 ;
-(void)stopConnectionlessAdvertising;
-(void)stopConnectionlessScanningWithData:(id)arg1 ;
-(void)startConnectionlessAdvertisingWithData:(id)arg1 ;
-(void)startConnectionlessScanningWithData:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
@end

