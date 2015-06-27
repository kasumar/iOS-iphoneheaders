/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLCloudScenarioExecutionResult : NSObject {

	char _duplicateScenario;
	NSMutableArray* _failedOperations;
	NSMutableArray* _successfullOperations;

}

@property (assign,nonatomic) char duplicateScenario;                              //@synthesize duplicateScenario=_duplicateScenario - In the implementation block
@property (nonatomic,retain) NSMutableArray * failedOperations;                   //@synthesize failedOperations=_failedOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * successfullOperations;              //@synthesize successfullOperations=_successfullOperations - In the implementation block
-(void)dealloc;
-(id)init;
-(char)duplicateScenario;
-(void)setDuplicateScenario:(char)arg1 ;
-(NSMutableArray *)failedOperations;
-(void)setFailedOperations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)successfullOperations;
-(void)setSuccessfullOperations:(NSMutableArray *)arg1 ;
@end
