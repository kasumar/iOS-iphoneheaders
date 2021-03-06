/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLMomentAnalyzerQueue : NSObject {

	double _firstPingSinceReset;
	double _lastPingSinceReset;
	NSMutableSet* _momentListIdsToProcess;
	double _minimumInterval;
	double _maximumInterval;

}

@property (assign,nonatomic) double minimumInterval;                //@synthesize minimumInterval=_minimumInterval - In the implementation block
@property (assign,nonatomic) double maximumInterval;                //@synthesize maximumInterval=_maximumInterval - In the implementation block
@property (nonatomic,readonly) char hasWork; 
@property (nonatomic,readonly) char shouldProcessWork; 
-(void)dealloc;
-(id)init;
-(char)hasWork;
-(void)enqueueMomentListIds:(id)arg1 ;
-(char)shouldProcessWork;
-(id)dequeueMomentListIdsForProcessing;
-(void)setMinimumInterval:(double)arg1 ;
-(void)setMaximumInterval:(double)arg1 ;
-(double)minimumInterval;
-(double)maximumInterval;
@end

