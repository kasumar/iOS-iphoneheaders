/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
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
-(NSString *)manualFileName;
-(NSArray *)graphArray;
-(void)setQueryType:(int)arg1 ;
-(void)setGraphArray:(NSArray *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setManualFileName:(NSString *)arg1 ;
-(id)init;
-(void)main;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(int)queryType;
-(NSString *)functionName;
@end

