/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/APSConnectionDelegate.h>

@class APSConnection, NSMutableSet, NSString, NSHashTable;

@interface PDPushNotificationManager : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	NSMutableSet* _registeredTopics;
	NSString* _pushToken;
	NSHashTable* _consumers;

}

@property (nonatomic,copy) NSString * pushToken;                    //@synthesize pushToken=_pushToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerConsumer:(id)arg1 ;
-(void)unregisterConsumer:(id)arg1 ;
-(void)recalculatePushTopics;
-(void)unregisterAllConsumers;
-(void)dealloc;
-(id)init;
-(void)connect;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)setPushToken:(NSString *)arg1 ;
-(NSString *)pushToken;
@end

