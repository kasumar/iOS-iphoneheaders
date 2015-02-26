/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ISDevice : NSObject <ISSingleton> {

	unsigned long long _daemonLaunchCount;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _guid;
	double _lastFreeSpaceRequest;

}

@property (readonly) NSString * deviceName; 
@property (readonly) NSString * guid; 
@property (readonly) NSString * hardwareName; 
@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * systemName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)systemName;
-(NSString *)serialNumber;
-(BOOL)releasePowerAssertion:(id)arg1 ;
-(NSString *)deviceName;
-(NSString *)guid;
-(int)_deviceClass;
-(NSString *)hardwareName;
-(BOOL)takePowerAssertion:(id)arg1 ;
-(void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)resetLocationAndPrivacy;
-(id)supportedOfferDeviceForDevices:(id)arg1 ;
-(BOOL)checkCapabilities:(id)arg1 withMismatches:(id*)arg2 ;
-(id)copyProtocolConditionalContext;
@end
