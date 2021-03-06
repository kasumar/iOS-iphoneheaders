/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSHashTable, NSProtocolChecker, NSMutableDictionary;

@interface IDSDaemonListener : NSObject <IDSDaemonListenerProtocol> {

	NSObject<OS_dispatch_queue>* _ivarQueue;
	NSHashTable* _handlers;
	NSProtocolChecker* _protocol;
	NSMutableDictionary* _topicToAccountDictionaries;
	NSMutableDictionary* _topicToEnabledAccounts;
	NSMutableDictionary* _accountToDevices;
	NSObject<OS_dispatch_group>* _accountsLoadedGroup;
	NSObject<OS_dispatch_group>* _enabledAccountsLoadedGroup;
	NSObject<OS_dispatch_group>* _dependentDevicesLoadedGroup;
	bool _setupComplete;
	bool _postedSetupComplete;
	bool _hidingDisconnect;

}

@property (nonatomic,readonly) bool isSetupComplete; 
@property (nonatomic,readonly) bool hasPostedSetupComplete; 
@property (assign,setter=_setHidingDisconnect:,nonatomic) bool _hidingDisconnect; 
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)accountAdded:(id)arg1 ;
-(void)accountEnabled:(id)arg1 onService:(id)arg2 ;
-(void)accountDisabled:(id)arg1 onService:(id)arg2 ;
-(void)account:(id)arg1 accountInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 dependentDevicesUpdated:(id)arg2 ;
-(void)_callHandlersWithBlockOnIvarQueue:(/*^block*/ id)arg1 ;
-(void)_removeAccountOnIvarQueue:(id)arg1 ;
-(void)_callHandlersWithBlock:(/*^block*/ id)arg1 ;
-(void)_deferredSetupOnIvarQueue:(id)arg1 ;
-(id)accountDictionariesForService:(id)arg1 blocking:(bool)arg2 ;
-(id)enabledAccountsForService:(id)arg1 blocking:(bool)arg2 ;
-(id)dependentDevicesForAccount:(id)arg1 blocking:(bool)arg2 ;
-(void)setupComplete:(bool)arg1 info:(id)arg2 ;
-(void)accountRemoved:(id)arg1 ;
-(bool)_hidingDisconnect;
-(void)_noteDisconnected;
-(void)addHandler:(id)arg1 ;
-(void)removeHandler:(id)arg1 ;
-(void)_setHidingDisconnect:(bool)arg1 ;
-(bool)isSetupComplete;
-(bool)hasPostedSetupComplete;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 profileChanged:(id)arg2 ;
-(void)account:(id)arg1 loginChanged:(id)arg2 ;
-(void)account:(id)arg1 displayNameChanged:(id)arg2 ;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(void)activeDevicesUpdatedForAccount:(id)arg1 ;
-(void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2 ;
@end

