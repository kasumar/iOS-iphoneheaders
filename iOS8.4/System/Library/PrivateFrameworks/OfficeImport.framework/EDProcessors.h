/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDWorkbook, NSMutableArray;

@interface EDProcessors : NSObject {

	EDWorkbook* mWorkbook;
	NSMutableArray* mProcessors;

}
-(void)dealloc;
-(void)removeAllObjects;
-(void)markObject:(id)arg1 processor:(Class)arg2 ;
-(id)initWithWorkbook:(id)arg1 ;
-(void)addProcessorClass:(Class)arg1 ;
-(BOOL)hasProcessors;
-(void)removeProcessorClass:(Class)arg1 ;
-(void)applyProcessorsWithSheet:(id)arg1 ;
@end

