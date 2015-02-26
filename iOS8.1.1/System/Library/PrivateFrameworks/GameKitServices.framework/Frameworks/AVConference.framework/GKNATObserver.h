/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface GKNATObserver : NSObject

@property (assign) id<GKNATObserverDelegate> delegate; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setDelegate:(id<GKNATObserverDelegate>)arg1 ;
-(id<GKNATObserverDelegate>)delegate;
-(id)initWithOptions:(id)arg1 ;
-(int)currentNATType;
-(void)shouldTryNATCheck;
@end
