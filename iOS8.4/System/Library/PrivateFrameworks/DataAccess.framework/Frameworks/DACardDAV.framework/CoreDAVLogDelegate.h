/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreDAVLogDelegate <NSObject>
@optional
-(void)coreDAVLogRequestBody:(id)arg1;
-(void)coreDAVLogResponseBody:(id)arg1;

@required
-(long long)coreDAVLogLevel;
-(long long)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2;
-(BOOL)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1;
-(void)coreDAVTransmittedDataFinished;

@end

