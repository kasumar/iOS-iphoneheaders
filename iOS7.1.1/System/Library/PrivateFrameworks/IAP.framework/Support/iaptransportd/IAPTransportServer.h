/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iaptransportd/iaptransportd-Structs.h>
#import <AirTraffic/NSNetServiceDelegate.h>
#import <AirTraffic/NSNetServiceBrowserDelegate.h>

@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSMutableArray, NSString, NSNetServiceBrowser, IAPXPCConnection;

@interface IAPTransportServer : NSObject <NSNetServiceDelegate, NSNetServiceBrowserDelegate> {

	CFRunLoopRef _serverRunLoop;
	struct {
		unsigned deathBecomesUs : 1;
		unsigned serverExiting : 1;
		unsigned reserved : 30;
	}  serverFlags;
	bool _hasSleepAssertion;
	unsigned _sleepAssertionId;
	bool _iapdPortListContainsItems;
	bool _iap2dPortListContainsItems;
	unsigned _ioaccessoryPortAddedIterator;
	IONotificationPortRef _ioaccessoryNotifyPort;
	IONotificationPortRef _iapInterfaceNotifyPort;
	unsigned _iAPInterfaceDeviceArrivedIterator;
	unsigned _iAPInterfaceDeviceRemovedIterator;
	NSMutableDictionary* _iapPortManagers;
	NSObject<OS_xpc_object>* _listener;
	NSObject<OS_dispatch_queue>* _internalListenerQueue;
	NSObject<OS_dispatch_queue>* _accPowerQueue;
	NSObject<OS_dispatch_source>* _accPowerTimer;
	long _initAccPowerTimerOnce;
	NSObject<OS_dispatch_source>* _ioAccMgrPortDetectTimer;
	long _initIOAccMgrPortDetectTimerOnce;
	int _iDeviceClass;
	bool _bOSInternalBuild;
	bool _bHas9PinConnector;
	unsigned char _ioAccPortID;
	NSObject<OS_dispatch_queue>* _connectedIPAccessoriesQueue;
	NSMutableArray* _connectedIPAccessories;
	NSObject<OS_dispatch_queue>* _currentResolvesQueue;
	NSMutableDictionary* _currentResolves;
	NSString* _ownName;
	NSNetServiceBrowser* _netServiceBrowser;
	NSObject<OS_dispatch_queue>* _availableIPDevicesQueue;
	NSMutableDictionary* _availableIPDevicesDict;
	WiFiDeviceClientRef _wifiDeviceClientRef;
	WiFiManagerClientRef _wifiManager;
	WiFiNetworkRef _currentNetwork;
	bool _wifiRadioPowered;
	NSObject<OS_dispatch_queue>* _autoConnectDevicesQueue;
	NSMutableDictionary* _autoConnectDevicesDict;
	bool _wifiStateValid;
	NSMutableArray* _accessoriesDisconnectedDuringValidation;
	NSMutableArray* _accessoriesCurrentlyValidating;
	NSObject<OS_dispatch_queue>* _accValidationQueue;
	bool _iapOverWiFiSupportsIAPD;
	unsigned char _iap9PinUSBConnState;
	IAPXPCConnection* _iapd_connection;
	IAPXPCConnection* _iap2d_connection;
	unsigned _ioAccNotification;

}

@property (nonatomic,readonly) NSMutableDictionary * iapPortManagers;                    //@synthesize iapPortManagers=_iapPortManagers - In the implementation block
@property (assign,nonatomic) IAPXPCConnection * iapd_connection;                         //@synthesize iapd_connection=_iapd_connection - In the implementation block
@property (assign,nonatomic) IAPXPCConnection * iap2d_connection;                        //@synthesize iap2d_connection=_iap2d_connection - In the implementation block
@property (nonatomic,readonly) int iDeviceClass;                                         //@synthesize iDeviceClass=_iDeviceClass - In the implementation block
@property (nonatomic,readonly) bool bOSInternalBuild;                                    //@synthesize bOSInternalBuild=_bOSInternalBuild - In the implementation block
@property (assign,nonatomic) unsigned char ioAccPortID;                                  //@synthesize ioAccPortID=_ioAccPortID - In the implementation block
@property (assign,nonatomic) unsigned char iap9PinUSBConnState;                          //@synthesize iap9PinUSBConnState=_iap9PinUSBConnState - In the implementation block
@property (assign) bool iapdPortListContainsItems;                                       //@synthesize iapdPortListContainsItems=_iapdPortListContainsItems - In the implementation block
@property (assign) bool iap2dPortListContainsItems;                                      //@synthesize iap2dPortListContainsItems=_iap2dPortListContainsItems - In the implementation block
@property (assign) bool iapOverWiFiSupportsIAPD;                                         //@synthesize iapOverWiFiSupportsIAPD=_iapOverWiFiSupportsIAPD - In the implementation block
@property (nonatomic,copy) NSString * ownName; 
@property (nonatomic,readonly) IONotificationPortRef ioaccessoryNotifyPort;              //@synthesize ioaccessoryNotifyPort=_ioaccessoryNotifyPort - In the implementation block
@property (assign,nonatomic) unsigned ioAccNotification;                                 //@synthesize ioAccNotification=_ioAccNotification - In the implementation block
@property (nonatomic,readonly) bool bHas9PinConnector;                                   //@synthesize bHas9PinConnector=_bHas9PinConnector - In the implementation block
+(id)sharedIAPTransportServer;
-(id)iapd_connection;
-(id)iap2d_connection;
-(bool)iapOverWiFiSupportsIAPD;
-(CIapPortAppleIDBus*)rootCIapPortAppleIDBusInstance;
-(int)iDeviceClass;
-(bool)bOSInternalBuild;
-(unsigned char)iap9PinUSBConnState;
-(void)setIap9PinUSBConnState:(unsigned char)arg1 ;
-(void)detachIOKitPort:(IapTransport*)arg1 ;
-(void)unregisterIPAccessory:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(void)setCurrentlyValidatingAccessory:(id)arg1 state:(bool)arg2 ;
-(void)resolveService:(id)arg1 isExplicit:(BOOL)arg2 ;
-(void)checkXPCConnections;
-(void)sendValidAccResistorIDToIAPD;
-(void)_listenForAccessoryPortChanges;
-(void)cleanupPhysicalConnectorConnectionsWhenWeCrash;
-(void)startAccPowerTimer:(unsigned)arg1 ;
-(void)initWiFiVars;
-(void)iapDisconnect;
-(void)iap2Disconnect;
-(void)updatePortManagers;
-(void)_setupiAPInterfaceNotifications;
-(void)cleanUpWiFiVars;
-(void)bringupPlatform;
-(void)startIOAccMgrPortDetectTimer:(unsigned)arg1 ;
-(void)_setupAutoConnectAtBoot;
-(void)bringdownPlatform;
-(BOOL)isAccessoryValidating:(id)arg1 ;
-(BOOL)disconnectedServiceExists:(id)arg1 ;
-(BOOL)isConnected:(id)arg1 ;
-(void)_detachWiFiPort:(IapTransport*)arg1 ;
-(BOOL)_createNewWifiUDPPort:(id)arg1 isExplicit:(BOOL)arg2 ;
-(void)initWiFiManager;
-(void)registerIPAccessory:(id)arg1 type:(id)arg2 domain:(id)arg3 isExplicit:(BOOL)arg4 ;
-(void)disableWiFiManagerNotifications;
-(void)sendTerminateConnectionMessageToConnectedIPDevice:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(void)clearConnectedIPDevices;
-(void)autoConnect;
-(void)enableWiFiManagerNotifications;
-(void)initOwnName;
-(void)stopAllResolves;
-(void)setOwnName:(id)arg1 ;
-(void)updateSleepAssertionState;
-(id)ownName;
-(void)detachWiFiPort:(IapTransport*)arg1 ;
-(void)startIPAccessorySearch;
-(void)stopIPAccessorySearch;
-(void)sendTerminateConnectionMessageToAllConnectedIPDevices;
-(void)wifiLinkChanged:(WiFiDeviceClientRef)arg1 linkChangedDict:(CFDictionaryRef)arg2 ;
-(void)initWiFiClientDevice:(WiFiManagerClientRef)arg1 forDevice:(WiFiDeviceClientRef)arg2 forRefCon:(void*)arg3 ;
-(void)registerEasyConfigAccessory:(id)arg1 forMacAddr:(id)arg2 forNetwork:(id)arg3 ;
-(id)availableIPAccessories;
-(void)setIapd_connection:(id)arg1 ;
-(void)setIap2d_connection:(id)arg1 ;
-(bool)iapdPortListContainsItems;
-(void)setIapdPortListContainsItems:(bool)arg1 ;
-(bool)iap2dPortListContainsItems;
-(void)setIap2dPortListContainsItems:(bool)arg1 ;
-(bool)bHas9PinConnector;
-(unsigned char)ioAccPortID;
-(void)setIoAccPortID:(unsigned char)arg1 ;
-(void)setIapOverWiFiSupportsIAPD:(bool)arg1 ;
-(unsigned)ioAccNotification;
-(void)setIoAccNotification:(unsigned)arg1 ;
-(void)stopServer:(int)arg1 ;
-(void)stopServer:(int)arg1 forceExitingImmediately:(BOOL)arg2 ;
-(void)_pollForDeathAfterPromptCompletes;
-(void)preventIdleSleep:(bool)arg1 ;
-(IONotificationPortRef)ioaccessoryNotifyPort;
-(id)iapPortManagerForDevPort:(IapTransport*)arg1 ;
-(id)iapPortManagers;
-(void)wifiPowerChanged;
-(void)initiateConnectionToIPAccessory:(id)arg1 ;
-(void)disconnectIPAccessory:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(id).cxx_construct;
@end

