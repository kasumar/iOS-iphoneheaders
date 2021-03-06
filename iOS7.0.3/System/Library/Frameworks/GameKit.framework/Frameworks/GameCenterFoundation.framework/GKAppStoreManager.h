/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface GKAppStoreManager : NSObject
+(id)sharedManager;
-(void)loadTellAFriendMessageForGameWithAdamID:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(BOOL)accountIsLoggedIntoAStore;
-(void)beginObservingKeyBagStatusFor:(id)arg1 withCallback:(/*function pointer*/ void*)arg2 ;
-(void)stopObservingKeyBagStatusFor:(id)arg1 ;
-(void)beginObservingStoreFrontChangesFor:(id)arg1 withSelector:(SEL)arg2 ;
-(void)stopObservingStoreFrontChangesFor:(id)arg1 ;
-(BOOL)uninstallApplicationWithBundleIdentifier:(id)arg1 ;
-(id)unrestrictedInstalledBundleIDs;
-(void)lookupStoreItemsForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(BOOL)allowProductionForApplication:(id)arg1 ;
-(BOOL)allowProductionForXPCConnection:(id)arg1 ;
@end

