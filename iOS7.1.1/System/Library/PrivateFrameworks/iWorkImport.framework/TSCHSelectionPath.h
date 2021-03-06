/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSCHSelectionPathType, NSArray;

@interface TSCHSelectionPath : NSObject <NSCopying> {

	TSCHSelectionPathType* mPathType;
	NSArray* mArguments;
	TSCHSelectionPath* mSubSelection;

}

@property (nonatomic,readonly) TSCHSelectionPathType * pathType; 
@property (nonatomic,readonly) TSCHSelectionPath * subSelection; 
+(id)seriesSelectionPathWithSeriesIndex:(unsigned long long)arg1 ;
+(id)selectionPathWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3 ;
+(id)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned long long)arg1 ;
+(id)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned long long)arg1 ;
+(id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2 ;
+(id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3 ;
-(id)initWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3 ;
-(void)saveToArchive:(ChartSelectionPathArchive*)arg1 ;
-(id)argumentAtIndex:(unsigned long long)arg1 ;
-(id)pathType;
-(unsigned long long)argumentsCount;
-(id)debuggingName;
-(id)rangeOfPathsToPath:(id)arg1 ;
-(id)initWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3 ;
-(id)subSelection;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)name;
-(id)initWithArchive:(const ChartSelectionPathArchive*)arg1 ;
@end

