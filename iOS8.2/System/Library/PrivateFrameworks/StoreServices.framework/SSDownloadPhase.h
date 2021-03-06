/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSCopying.h>

@class SSOperationProgress, NSString;

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying> {

	SSOperationProgress* _operationProgress;

}

@property (readonly) int phaseType; 
@property (readonly) long long progressValue; 
@property (readonly) long long totalProgressValue; 
@property (readonly) int progressUnits; 
@property (readonly) double estimatedSecondsRemaining; 
@property (readonly) float progressChangeRate; 
@property (readonly) SSOperationProgress * operationProgress; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)progressValue;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(SSOperationProgress *)operationProgress;
-(id)initWithOperationProgress:(id)arg1 ;
-(int)phaseType;
-(int)progressUnits;
-(float)progressChangeRate;
-(long long)totalProgressValue;
-(double)estimatedSecondsRemaining;
@end

