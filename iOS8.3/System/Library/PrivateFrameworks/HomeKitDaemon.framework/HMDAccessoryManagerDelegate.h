/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:01:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HMDAccessoryManagerDelegate <NSObject>
@optional
-(void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2;
-(void)accessoryManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
-(void)accessoryManager:(id)arg1 didAddPairedAccessories:(id)arg2 toBridgeAccessory:(id)arg3;
-(void)accessoryManager:(id)arg1 didRemovePairedAccessories:(id)arg2 fromBridgeAccessory:(id)arg3;

@end

