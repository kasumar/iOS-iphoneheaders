/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSArray, NSString, NSObject;

@interface VCSessionMessageTopic : NSObject {

	NSArray* associatedStrings;
	NSString* topicKey;
	long long latestReceivedTopicMessageNumber;
	NSString* lastMessage;
	NSObject<OS_dispatch_queue>* outMessageQueue;
	tagHANDLE* handle;
	unsigned p2pID;
	NSObject<OS_dispatch_queue>* inMessageQueue;
	/*^block*/ id receiveBlock;
	long long latestOutgoingMessageIndex;
	bool isSendingEnabled;
	bool shouldEncodeTopicKeyInMessage;
	NSString* topicPrefix;

}

@property (assign,setter=setIsSendingEnabled:,nonatomic) bool isSendingEnabled; 
@property (readonly) NSString * topicKey; 
-(void)dealloc;
-(id)topicKey;
-(bool)isStringAssociated:(id)arg1 ;
-(void)passMessage:(id)arg1 sequence:(int)arg2 ;
-(void)setIsSendingEnabled:(bool)arg1 ;
-(id)initWithTopicKey:(id)arg1 strings:(id)arg2 receiveHandler:(/*^block*/ id)arg3 ;
-(void)setP2PID:(unsigned)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 withSequence:(long long)arg2 numRetries:(long long)arg3 ;
-(bool)isSendingEnabled;
@end

