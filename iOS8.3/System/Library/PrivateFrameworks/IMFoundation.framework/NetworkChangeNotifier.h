/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:13:20 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMSystemMonitorListener.h>
#import <IMFoundation/IMConnectionMonitorDelegate.h>

@class NSString, NSArray, IMConnectionMonitor;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate> {

	char _lastPostedNetworkUp;
	SCDynamicStoreRef _store;
	NSString* _myIP;
	NSArray* _myIPs;
	IMConnectionMonitor* _connectionMonitor;

}

@property (nonatomic,readonly) char isNetworkUp; 
@property (nonatomic,readonly) NSString * myGatewayAddress; 
@property (nonatomic,readonly) NSString * myIPAddress; 
@property (nonatomic,readonly) NSArray * myIPAddresses; 
@property (nonatomic,readonly) SCDynamicStoreRef getDynamicStore; 
@property (assign,nonatomic) SCDynamicStoreRef store;                              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) char lastPostedNetworkUp;                             //@synthesize lastPostedNetworkUp=_lastPostedNetworkUp - In the implementation block
@property (nonatomic,retain) IMConnectionMonitor * connectionMonitor;              //@synthesize connectionMonitor=_connectionMonitor - In the implementation block
@property (nonatomic,retain) NSString * myIP;                                      //@synthesize myIP=_myIP - In the implementation block
@property (nonatomic,retain) NSArray * myIPs;                                      //@synthesize myIPs=_myIPs - In the implementation block
+(id)sharedInstance;
+(char)enableNotifications;
+(void)disableNotifications;
-(SCDynamicStoreRef)store;
-(void)setStore:(SCDynamicStoreRef)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)myGatewayAddress;
-(int)linkQualityValueForInterfaceType:(unsigned)arg1 ;
-(void)_clearIPCache;
-(char)_listenForChanges;
-(int)linkQualityValueForInterface:(id)arg1 ;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(NSArray *)myIPAddresses;
-(NSString *)myIPAddress;
-(SCDynamicStoreRef)getDynamicStore;
-(unsigned)linkQualityForInterfaceType:(unsigned)arg1 ;
-(char)isPrimaryCellular;
-(id)primaryInterfaceName;
-(NSString *)myIP;
-(void)setMyIP:(NSString *)arg1 ;
-(NSArray *)myIPs;
-(void)setMyIPs:(NSArray *)arg1 ;
-(IMConnectionMonitor *)connectionMonitor;
-(void)setConnectionMonitor:(IMConnectionMonitor *)arg1 ;
-(char)lastPostedNetworkUp;
-(void)setLastPostedNetworkUp:(char)arg1 ;
-(void)systemDidWake;
-(void)systemWillSleep;
-(char)isNetworkUp;
@end
