/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface MPRadioPerformanceLogger : NSObject {

	NSLock* _lock;
	NSMutableDictionary* _sessions;

}
+(id)sharedLogger;
-(void)addEventWithName:(id)arg1 sessionKey:(id)arg2 ;
-(void)beginSessionWithKey:(id)arg1 label:(id)arg2 ;
-(void)closeAndLogSessionForKey:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
@end
