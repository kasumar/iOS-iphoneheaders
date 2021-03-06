/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask {

	NSString* _previousETag;

}

@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                       //@synthesize previousETag=_previousETag - In the implementation block
-(void)dealloc;
-(id)description;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(NSString *)previousETag;
-(void)setPreviousETag:(NSString *)arg1 ;
-(id)requestBody;
@end

