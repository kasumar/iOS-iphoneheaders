/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBBiometricAggregatedLogger : NSObject {

	BOOL _unlockStartedWithScreenOn;
	unsigned long long _unlockStartTime;
	unsigned long long _unlockFinishTime;

}

@property (assign,nonatomic) unsigned long long unlockStartTime;               //@synthesize unlockStartTime=_unlockStartTime - In the implementation block
@property (assign,nonatomic) BOOL unlockStartedWithScreenOn;                   //@synthesize unlockStartedWithScreenOn=_unlockStartedWithScreenOn - In the implementation block
@property (assign,nonatomic) unsigned long long unlockFinishTime;              //@synthesize unlockFinishTime=_unlockFinishTime - In the implementation block
+(id)sharedInstance;
-(void)_bioUnlockStart:(id)arg1 ;
-(void)_bioUnlockDidUnlock:(id)arg1 ;
-(void)_unlockAnimationWillStart:(id)arg1 ;
-(void)setUnlockStartTime:(unsigned long long)arg1 ;
-(void)setUnlockFinishTime:(unsigned long long)arg1 ;
-(void)setUnlockStartedWithScreenOn:(BOOL)arg1 ;
-(unsigned long long)unlockStartTime;
-(BOOL)unlockStartedWithScreenOn;
-(unsigned long long)unlockFinishTime;
-(void)_clearEverything;
-(id)init;
@end

