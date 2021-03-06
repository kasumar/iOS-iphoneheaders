/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray;

@interface OITSUPerformanceTestHarness : NSObject {

	NSMutableArray* mTestCases;
	char mQuiet;
	int mPassingTests;
	int mTotalTests;
	char mPassed;
	timeval mSetupTime;

}

@property (assign,nonatomic) char quiet; 
@property (nonatomic,readonly) int passingTestCount; 
@property (nonatomic,readonly) int testCount; 
@property (nonatomic,readonly) char passed; 
+(id)harness;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(void)setQuiet:(char)arg1 ;
-(id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)setup;
-(void)testSuite;
-(char)passed;
-(void)report;
-(id)p_createResultDirectory;
-(void)p_writeSystemConfigurationToDirectory:(id)arg1 ;
-(void)p_writeConsoleMessagesToDirectory:(id)arg1 ;
-(void)p_writeCsvResultsToDirectory:(id)arg1 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4 ;
-(char)runTests;
-(char)quiet;
-(int)passingTestCount;
-(int)testCount;
@end

