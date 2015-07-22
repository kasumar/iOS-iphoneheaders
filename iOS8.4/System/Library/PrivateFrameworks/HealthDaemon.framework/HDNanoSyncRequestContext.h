/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface HDNanoSyncRequestContext : NSObject {

	BOOL _pullRequest;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id completion;                                 //@synthesize completion=_completion - In the implementation block
@property (getter=isPullRequest,nonatomic,readonly) BOOL pullRequest;              //@synthesize pullRequest=_pullRequest - In the implementation block
+(id)requestContextWithCompletion:(/*^block*/id)arg1 pullRequest:(BOOL)arg2 ;
-(id)completion;
-(BOOL)isPullRequest;
@end
