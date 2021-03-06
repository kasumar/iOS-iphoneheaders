/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>
#import <iWorkImport/TSDMixing.h>

@protocol TSCHNotifyOnModify;
@class NSMutableArray, NSArray;

@interface TSCHChartGrid : NSObject <NSCopying, TSDMixing> {

	id<TSCHNotifyOnModify> mModifyDelegate;
	int mDirection;
	NSMutableArray* mRowNames;
	NSMutableArray* mColumnNames;
	NSMutableArray* mValues;
	char mDirty;
	char mAddingMultipleRows;
	unsigned mNextRowNumber;
	char mAddingMultipleCols;
	unsigned mNextColNumber;
	NSMutableArray* mRowIds;
	NSMutableArray* mColumnIds;

}

@property (assign,nonatomic) id<TSCHNotifyOnModify> objectToNotify; 
@property (assign,nonatomic) int direction; 
@property (assign,nonatomic) char dirty; 
@property (nonatomic,readonly) unsigned numberOfRows; 
@property (nonatomic,readonly) unsigned numberOfColumns; 
@property (nonatomic,readonly) NSArray * rowIds; 
@property (nonatomic,readonly) NSArray * columnIds; 
-(void)willModify;
-(void)p_generateRowColumnIdMaps;
-(id<TSCHNotifyOnModify>)objectToNotify;
-(char)contentsEqualToGrid:(id)arg1 ;
-(char)p_name:(id)arg1 isInArray:(id)arg2 ;
-(id)p_generateUUID;
-(void)insertRow:(unsigned)arg1 withName:(id)arg2 withId:(id)arg3 ;
-(void)insertColumn:(unsigned)arg1 withName:(id)arg2 withId:(id)arg3 ;
-(id)p_uuidsForRows:(NSRange)arg1 ;
-(id)extractRowNames:(NSRange)arg1 outValueRows:(id*)arg2 ;
-(void)insertRowsAt:(unsigned)arg1 names:(id)arg2 data:(id)arg3 withIds:(id)arg4 ;
-(id)p_uuidsForColumns:(NSRange)arg1 ;
-(id)extractColumnNames:(NSRange)arg1 outValueColumns:(id*)arg2 ;
-(void)insertColumnsAt:(unsigned)arg1 names:(id)arg2 data:(id)arg3 withIds:(id)arg4 ;
-(void)insertRowsWithNames:(id)arg1 at:(unsigned)arg2 withIds:(id)arg3 ;
-(void)insertColumnNames:(id)arg1 at:(unsigned)arg2 withIds:(id)arg3 ;
-(void)takeDataFromDictionary:(id)arg1 rowIds:(id)arg2 columnIds:(id)arg3 ;
-(NSArray *)rowIds;
-(NSArray *)columnIds;
-(void)removeRow:(unsigned)arg1 ;
-(void)setValue:(id)arg1 forRow:(unsigned)arg2 column:(unsigned)arg3 ;
-(id)nameForRow:(unsigned)arg1 ;
-(void)insertRow:(unsigned)arg1 withName:(id)arg2 ;
-(id)nameForColumn:(unsigned)arg1 ;
-(void)insertColumn:(unsigned)arg1 withName:(id)arg2 ;
-(id)valueForRow:(unsigned)arg1 column:(unsigned)arg2 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id*)valuesForRow:(unsigned)arg1 columns:(NSRange)arg2 ;
-(id*)valuesForRows:(NSRange)arg1 column:(unsigned)arg2 ;
-(id)rowIdForRow:(unsigned)arg1 ;
-(id)columnIdForColumn:(unsigned)arg1 ;
-(unsigned)rowIndexForRowId:(id)arg1 ;
-(unsigned)columnIndexForColumnId:(id)arg1 ;
-(void)addingMultipleRows:(char)arg1 ;
-(void)addingMultipleCols:(char)arg1 ;
-(id)getNewColumnName;
-(id)getNewRowName;
-(void)setNameForRow:(unsigned)arg1 toName:(id)arg2 ;
-(void)setNameForColumn:(unsigned)arg1 toName:(id)arg2 ;
-(void)moveRows:(NSRange)arg1 afterRow:(int)arg2 ;
-(void)moveColumns:(NSRange)arg1 afterColumn:(int)arg2 ;
-(void)insertRowsAt:(unsigned)arg1 names:(id)arg2 data:(id)arg3 ;
-(void)insertColumnsAt:(unsigned)arg1 names:(id)arg2 data:(id)arg3 ;
-(void)insertRowsWithNames:(id)arg1 at:(unsigned)arg2 ;
-(void)insertColumnNames:(id)arg1 at:(unsigned)arg2 ;
-(void)takeDataFromDictionary:(id)arg1 ;
-(id)gridAdapterForRow:(unsigned)arg1 ;
-(id)gridAdapterForColumn:(unsigned)arg1 ;
-(id)gridAdapterForRowCount;
-(id)gridAdapterForColumnCount;
-(id)gridAdapterForRowConstant;
-(id)gridAdapterForColumnConstant;
-(char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(void)setObjectToNotify:(id<TSCHNotifyOnModify>)arg1 ;
-(void)loadFromPreUFFArchive:(const ChartGridArchive*)arg1 ;
-(void)loadFromUnityArchive:(const ChartArchive*)arg1 ;
-(void)saveToUnityArchive:(ChartArchive*)arg1 forPasteboard:(char)arg2 ;
-(void)setDirty:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned)numberOfColumns;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(unsigned)numberOfRows;
-(char)dirty;
-(void)removeColumn:(unsigned)arg1 ;
@end

