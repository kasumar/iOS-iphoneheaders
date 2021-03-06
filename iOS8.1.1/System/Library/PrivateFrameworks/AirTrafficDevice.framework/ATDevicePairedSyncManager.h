/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTrafficDevice/ATMessageLinkObserver.h>
#import <AirTrafficDevice/ATStatusMonitorObserver.h>

@class ATDeviceService, ATStatusMonitor, ATConcreteMessageLink, NSString;

@interface ATDevicePairedSyncManager : NSObject <ATMessageLinkObserver, ATStatusMonitorObserver> {

	ATDeviceService* _deviceService;
	ATStatusMonitor* _statusMonitor;
	ATConcreteMessageLink* _syncMessageLink;
	BOOL _syncRequested;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)run;
-(void)_reportSyncCompletedWithError:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)monitor:(id)arg1 didUpdateWithStatus:(id)arg2 ;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
@end

