/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:24:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASMeetingResponseTask : ASTask {

	NSArray* _responseItems;

}

@property (nonatomic,retain) NSArray * responseItems;              //@synthesize responseItems=_responseItems - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(int)taskStatusForExchangeStatus:(int)arg1 ;
-(id)initWithResponseItems:(id)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(char)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(char)processContext:(id)arg1 ;
-(NSArray *)responseItems;
-(void)setResponseItems:(NSArray *)arg1 ;
@end

