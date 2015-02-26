/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSMutableDictionary, NSMutableArray, NSString;

@interface IMTunesController : NSObject {

	NSDate* _lastChange;
	NSDictionary* _lastInfo;
	NSMutableDictionary* _playerInfo;
	NSMutableArray* _listeners;
	NSString* _messageFormat;

}

@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) NSDictionary * playerInfo;              //@synthesize playerInfo=_playerInfo - In the implementation block
@property (nonatomic,readonly) NSString * messageFormat; 
+(id)sharedTunesController;
-(void)dealloc;
-(id)init;
-(BOOL)isEnabled;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)playerInfo;
-(id)messageFormat;
-(void)_updateMessage;
-(void)_playerChanged:(id)arg1 ;
-(void)_playerChangedNotification:(id)arg1 ;
@end
