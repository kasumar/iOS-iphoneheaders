/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@class NSString;

@interface TransactionLog : CHLogger {

	NSString* _path;
	NSString* _defaultLogDirectory;
	NSString* _defaultLogFileName;

}

@property (readonly) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (readonly) NSString * defaultLogDirectory;              //@synthesize defaultLogDirectory=_defaultLogDirectory - In the implementation block
@property (readonly) NSString * defaultLogFileName;               //@synthesize defaultLogFileName=_defaultLogFileName - In the implementation block
-(id)initWithFileName:(id)arg1 ;
-(id)getTransactions;
-(id)getDefaultLogDirectory;
-(void)createLogDirectory;
-(NSString *)defaultLogDirectory;
-(NSString *)defaultLogFileName;
-(id)init;
-(NSString *)path;
-(void)clear;
-(long long)append:(id)arg1 ;
@end

