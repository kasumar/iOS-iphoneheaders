/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>

@class NSArray;

@interface TSTTableFilterSet : TSPObject <TSPCopying> {

	int mType;
	char mIsEnabled;
	NSArray* mRules;
	char mNeedsFormulaRewriteForImport;
	vector<unsigned int, std::__1::allocator<unsigned int> >* mFilterOffsets;
	vector<bool, std::__1::allocator<bool> >* mFilterEnabled;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToArchive:(FilterSetArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const FilterSetArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithFilterRules:(id)arg1 type:(int)arg2 context:(id)arg3 ;
-(id)addRules:(id)arg1 inFilter:(unsigned)arg2 ;
-(id)addRules:(id)arg1 atRuleIndices:(id)arg2 inFilter:(unsigned)arg3 isNew:(char)arg4 ;
-(id)removeRulesWithIndices:(id)arg1 inFilter:(unsigned)arg2 ;
-(id)removeRules:(id)arg1 ;
-(id)replaceRule:(id)arg1 atRuleIndex:(unsigned)arg2 inFilter:(unsigned)arg3 ;
-(char)needsFormulaRewriteForImport;
-(void)setNeedsFormulaRewriteForImport:(char)arg1 ;
-(id)ruleAtAbsoluteIndex:(unsigned)arg1 ;
-(void)enableRuleAtIndex:(unsigned)arg1 inFilterIndex:(unsigned)arg2 ;
-(void)disableRuleAtIndex:(unsigned)arg1 inFilterIndex:(unsigned)arg2 ;
-(void)enableFilterAtIndex:(unsigned)arg1 ;
-(void)disableFilterAtIndex:(unsigned)arg1 ;
-(void)setFilterSetType:(int)arg1 ;
-(void)setRulesAtAbsoluteIndices:(id)arg1 enabled:(char)arg2 ;
-(char)rowIsShown:(unsigned short)arg1 withHiddenStateFormulaOwner:(id)arg2 withCalculationEngine:(id)arg3 ;
-(char)p_thresholdComparisonMatchesFilter:(int)arg1 withPredicateType:(int)arg2 ;
-(unsigned)numberOfRulesInFilter:(unsigned)arg1 ;
-(id)filterAtIndex:(unsigned)arg1 inTable:(id)arg2 ;
-(void)enumerateFiltersForColumn:(unsigned char)arg1 withTable:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateRulesInFilterIndex:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)ruleInFilter:(unsigned)arg1 atIndex:(unsigned)arg2 ;
-(int)filterSetType;
-(unsigned)newFilterIndex;
-(void)enumerateFiltersInTable:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateFilterIndicesInTable:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)filterIndicesForColumn:(unsigned char)arg1 inTable:(id)arg2 ;
-(unsigned)firstFilterIndexForColumn:(unsigned char)arg1 inTable:(id)arg2 ;
-(char)isFilterEnabledInColumn:(unsigned char)arg1 withTable:(id)arg2 ;
-(char)isFilterRuleEnabledInColumn:(unsigned char)arg1 withTable:(id)arg2 ;
-(unsigned)ruleIndexInFilter:(unsigned)arg1 matchingCell:(id)arg2 ;
-(id)absoluteRuleIndicesForColumn:(unsigned char)arg1 inTable:(id)arg2 ;
-(char)isRuleEnabledAtIndex:(unsigned)arg1 inFilterIndex:(unsigned)arg2 ;
-(char)isFilterEnabledAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(char)isEnabled;
-(void)setIsEnabled:(char)arg1 ;
-(unsigned)ruleCount;
-(unsigned)filterCount;
@end

