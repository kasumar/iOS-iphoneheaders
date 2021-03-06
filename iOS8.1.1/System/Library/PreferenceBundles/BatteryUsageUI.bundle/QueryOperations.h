/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSArray;

@interface QueryOperations : NSOperation {

	/*^block*/id _completion;
	int _queryType;
	NSString* _manualFileName;
	NSString* _functionName;
	NSArray* _graphArray;

}

@property (nonatomic,retain) NSString * manualFileName;              //@synthesize manualFileName=_manualFileName - In the implementation block
@property (nonatomic,retain) NSString * functionName;                //@synthesize functionName=_functionName - In the implementation block
@property (assign,nonatomic) int queryType;                          //@synthesize queryType=_queryType - In the implementation block
@property (nonatomic,retain) NSArray * graphArray;                   //@synthesize graphArray=_graphArray - In the implementation block
-(NSArray *)graphArray;
-(void)setGraphArray:(NSArray *)arg1 ;
-(NSString *)manualFileName;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setManualFileName:(NSString *)arg1 ;
-(id)init;
-(void)main;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)setQueryType:(int)arg1 ;
-(int)queryType;
-(NSString *)functionName;
@end

