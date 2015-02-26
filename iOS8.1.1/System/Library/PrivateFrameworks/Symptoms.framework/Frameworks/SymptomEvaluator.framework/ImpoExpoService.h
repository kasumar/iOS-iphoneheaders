/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:12 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AnalyticsWorkspace, NSObject;

@interface ImpoExpoService : NSObject {

	AnalyticsWorkspace* workspace;
	NSObject*<OS_dispatch_queue> queue;

}
+(id)impoExpoServiceInWorkspace:(id)arg1 andQueue:(id)arg2 ;
-(id)_initInWorkspace:(id)arg1 andQueue:(id)arg2 ;
-(id)_locateRecord:(id)arg1 ;
-(BOOL)exportItemUnderName:(id)arg1 item:(id)arg2 ;
-(BOOL)exportValueUnderName:(id)arg1 value:(unsigned long long)arg2 ;
-(id)importItemUnderName:(id)arg1 lastUpdated:(id*)arg2 ;
-(unsigned long long)importValueUnderName:(id)arg1 lastUpdated:(id*)arg2 ;
@end
