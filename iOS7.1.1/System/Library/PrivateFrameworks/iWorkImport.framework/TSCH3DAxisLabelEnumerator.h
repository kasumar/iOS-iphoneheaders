/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCHChartAxis, TSCH3DAxisLabelKind;

@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator {

	TSCHChartAxis* mAxis;
	TSCH3DAxisLabelKind* mKind;

}

@property (nonatomic,readonly) TSCH3DAxisLabelKind * kind; 
+(id)enumeratorWithAxis:(id)arg1 kind:(id)arg2 ;
-(id)stringForLabelResources:(id)arg1 ;
-(id)initWithAxis:(id)arg1 kind:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)string;
-(void)update;
-(id)kind;
-(int)labelPosition;
-(bool)shouldRender;
@end
