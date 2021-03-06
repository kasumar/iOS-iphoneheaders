/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKChangeSourceObserver.h>

@protocol OS_dispatch_group, TSTLayoutDynamicColumnSwapProtocol, TSTLayoutDynamicContentProtocol, TSTLayoutDynamicRowSwapProtocol, TSTLayoutDynamicCellFillProtocol;
@class TSKChangeNotifier, TSTTableInfo, TSTWPColumnCache, TSTDupContentCache, TSTWidthHeightCache, TSTHiddenRowsColumnsCache, NSMutableArray, NSObject, TSUWidthLimitedQueue, TSTStrokeDefaultVendor, NSPointerArray, TSTConcurrentMutableIndexSet, TSTStrokeWidthCache, TSTRWRetainedPointerKeyDictionary, NSLock, TSDFill, NSMutableSet, TSUColor, TSDInfoGeometry, TSDLayoutGeometry, TSTCellRegion, TSTLayoutDynamicResizeInfo, TSWPEditingController, TSTMergeRangeSortedSet, TSTTableModel, TSTLayout, NSIndexSet, NSString;

@interface TSTMasterLayout : NSObject <TSKChangeSourceObserver> {

	TSKChangeNotifier* mChangeNotifier;
	int mReferenceCount;
	TSTTableInfo* mTableInfo;
	TSTWPColumnCache* mCellIDToWPColumnCache;
	TSTDupContentCache* mDupContentCache;
	TSTWPColumnCache* mTempWPColumnCache;
	TSTWidthHeightCache* mWidthHeightCache;
	TSTHiddenRowsColumnsCache* mHiddenRowsColumnsCache;
	NSMutableArray* mChangeDescriptors;
	NSObject*<OS_dispatch_group> mLayoutInFlight;
	TSUWidthLimitedQueue* mLayoutQueue;
	unsigned mMaxConcurrentTasks;
	unsigned mNumCellsPerTask;
	char mHeaderColumnsFrozen;
	char mHeaderRowsFrozen;
	char mHeaderColumnsRepeat;
	char mHeaderRowsRepeat;
	char mTableNameEnabled;
	CGRect mTableNameBounds;
	float mCachedTableNameHeight;
	unsigned short mCachedNumberOfHeaderColumns;
	unsigned mCachedMaxNumberOfColumns;
	unsigned short mCachedNumberOfHeaderRows;
	unsigned short mCachedNumberOfFooterRows;
	unsigned mCachedMaxNumberOfRows;
	TSTStrokeDefaultVendor* mStrokesDefaultVendor;
	NSPointerArray* mTopRowStrokes;
	NSPointerArray* mBottomRowStrokes;
	NSPointerArray* mLeftColumnStrokes;
	NSPointerArray* mRightColumnStrokes;
	TSTConcurrentMutableIndexSet* mSpillStrokeColumns;
	opaque_pthread_rwlock_t mStrokesRWLock;
	TSTStrokeWidthCache* mColumnToStrokeWidthCache;
	TSTStrokeWidthCache* mRowToStrokeHeightCache;
	TSTRWRetainedPointerKeyDictionary* mParaStyleToHeightCache;
	NSLock* mLock;
	char mBandedFillIsValid;
	char mUseBandedFill;
	TSDFill* mBandedFillObject;
	int mTableEnvironment;
	int mTableRowsBehavior;
	char mTableDefaultFontHeightsAreValid;
	float mTableDefaultFontHeightForArea[4];
	char mInDynamicLayoutMode;
	NSMutableSet* mDynamicLayouts;
	float mDynamicAddOrRemoveColumnElementSize;
	float mDynamicAddOrRemoveRowElementSize;
	char mDynamicBandedFill;
	char mDynamicBandedFillSetting;
	int mDynamicColumnAdjustment;
	id<TSTLayoutDynamicColumnSwapProtocol> mDynamicColumnSwapDelegate;
	float mDynamicColumnTabSize;
	id<TSTLayoutDynamicContentProtocol> mDynamicContentDelegate;
	TSUColor* mDynamicFontColor;
	SCD_Struct_TS491 mDynamicFontColorCellRange;
	SCD_Struct_TS491 mDynamicHidingRowsCols;
	int mDynamicHidingRowsColsDirection;
	SCD_Struct_TS491 mDynamicHidingContent;
	SCD_Struct_TS491 mDynamicHidingText;
	TSDInfoGeometry* mDynamicInfoGeometry;
	char mDynamicRepResize;
	char mDynamicRepressFrozenHeader;
	char mDynamicResizingColumns;
	SCD_Struct_TS491 mDynamicResizingColumnRange;
	float mDynamicResizingColumnAdjustment;
	char mDynamicResizingRows;
	SCD_Struct_TS491 mDynamicResizingRowRange;
	float mDynamicResizingRowAdjustment;
	SCD_Struct_TS491 mDynamicRevealingRowsCols;
	int mDynamicRevealingRowsColsDirection;
	int mDynamicRowAdjustment;
	id<TSTLayoutDynamicRowSwapProtocol> mDynamicRowSwapDelegate;
	float mDynamicRowTabSize;
	TSDLayoutGeometry* mDynamicSavedLayoutGeometry;
	TSTCellRegion* mDynamicSelectionRegion;
	float mDynamicWidthResize;
	float mDynamicHeightResize;
	float mDynamicTableNameResize;
	TSTLayoutDynamicResizeInfo* mDynamicResizeInfo;
	SCD_Struct_TS271 mDynamicSuppressingConditionalStylesCellID;
	id<TSTLayoutDynamicCellFillProtocol> mDynamicCellFillDelegate;
	char mEmptyFilteredTable;
	TSWPEditingController* mContainedTextEditor;
	TSTMergeRangeSortedSet* mMergeRanges;
	char mProcessHiddenRowsForExport;
	CGSize mMaximumPartitionSize;

}

@property (assign,nonatomic) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (nonatomic,readonly) TSTStrokeDefaultVendor * strokesDefaultVendor; 
@property (nonatomic,readonly) TSTWPColumnCache * cellIDToWPColumnCache; 
@property (nonatomic,readonly) TSTDupContentCache * dupContentCache; 
@property (nonatomic,readonly) TSTWPColumnCache * tempWPColumnCache; 
@property (nonatomic,readonly) TSTWidthHeightCache * widthHeightCache; 
@property (nonatomic,readonly) TSTHiddenRowsColumnsCache * hiddenRowsColumnsCache; 
@property (assign,nonatomic) unsigned maxConcurrentTasks; 
@property (assign,nonatomic) unsigned numCellsPerTask; 
@property (nonatomic,readonly) char useBandedFill; 
@property (nonatomic,readonly) TSDFill * bandedFillObject; 
@property (assign,nonatomic) int tableEnvironment; 
@property (nonatomic,readonly) int tableRowsBehavior; 
@property (nonatomic,readonly) char inDynamicLayoutMode; 
@property (nonatomic,readonly) NSMutableSet * dynamicLayouts; 
@property (nonatomic,readonly) TSTLayout * dynamicLayout; 
@property (nonatomic,readonly) float dynamicAddOrRemoveColumnElementSize; 
@property (nonatomic,readonly) float dynamicAddOrRemoveRowElementSize; 
@property (nonatomic,readonly) char dynamicBandedFill; 
@property (nonatomic,readonly) char dynamicBandedFillSetting; 
@property (nonatomic,readonly) int dynamicColumnAdjustment; 
@property (nonatomic,readonly) id<TSTLayoutDynamicColumnSwapProtocol> dynamicColumnSwapDelegate; 
@property (nonatomic,readonly) float dynamicColumnTabSize; 
@property (nonatomic,readonly) id<TSTLayoutDynamicContentProtocol> dynamicContentDelegate; 
@property (nonatomic,readonly) TSUColor * dynamicFontColor; 
@property (nonatomic,readonly) SCD_Struct_TS491 dynamicFontColorCellRange; 
@property (assign,nonatomic) char dynamicRepResize; 
@property (nonatomic,readonly) TSDInfoGeometry * dynamicInfoGeometry; 
@property (assign,nonatomic) float dynamicWidthResize; 
@property (assign,nonatomic) float dynamicHeightResize; 
@property (nonatomic,readonly) char dynamicResizingColumns; 
@property (nonatomic,readonly) SCD_Struct_TS491 dynamicResizingColumnRange; 
@property (nonatomic,readonly) float dynamicResizingColumnAdjustment; 
@property (nonatomic,readonly) char dynamicResizingRows; 
@property (nonatomic,readonly) SCD_Struct_TS491 dynamicResizingRowRange; 
@property (nonatomic,readonly) float dynamicResizingRowAdjustment; 
@property (nonatomic,readonly) int dynamicRowAdjustment; 
@property (nonatomic,readonly) id<TSTLayoutDynamicRowSwapProtocol> dynamicRowSwapDelegate; 
@property (nonatomic,readonly) float dynamicRowTabSize; 
@property (nonatomic,copy) TSDLayoutGeometry * dynamicSavedLayoutGeometry; 
@property (nonatomic,readonly) TSTCellRegion * dynamicSelectionRegion; 
@property (nonatomic,readonly) float dynamicTableNameResize; 
@property (nonatomic,readonly) SCD_Struct_TS271 dynamicSuppressingConditionalStylesCellID; 
@property (nonatomic,readonly) id<TSTLayoutDynamicCellFillProtocol> dynamicCellFillDelegate; 
@property (nonatomic,readonly) char emptyFilteredTable; 
@property (assign,nonatomic) TSWPEditingController * containedTextEditor; 
@property (nonatomic,readonly) NSMutableArray * changeDescriptors; 
@property (nonatomic,readonly) char isGrouped; 
@property (assign,nonatomic) TSTMergeRangeSortedSet * mergeRanges; 
@property (assign,nonatomic) TSKChangeNotifier * changeNotifier; 
@property (assign,nonatomic) char processHiddenRowsForExport; 
@property (assign,nonatomic) CGSize maximumPartitionSize; 
@property (nonatomic,readonly) NSIndexSet * visibleRowIndices; 
@property (nonatomic,readonly) NSIndexSet * visibleColumnIndices; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)tableNameTextSize:(id)arg1 ;
+(float)effectiveTableNameHeightForModel:(id)arg1 ;
+(id)tableNameTextEngine:(id)arg1 ;
-(TSKChangeNotifier *)changeNotifier;
-(void)setChangeNotifier:(TSKChangeNotifier *)arg1 ;
-(TSTTableModel *)tableModel;
-(void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(int)tableAreaForCellID:(SCD_Struct_TS271)arg1 ;
-(float)tableNameHeight;
-(char)useBandedFill;
-(TSDFill *)bandedFillObject;
-(void)wasRemovedFromDocumentRoot;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(void)strokesForCellID:(SCD_Struct_TS271)arg1 top:(id*)arg2 left:(id*)arg3 bottom:(id*)arg4 right:(id*)arg5 ;
-(char)emptyFilteredTable;
-(void)calculateRawTableSize:(CGSize*)arg1 andStrokeDelta:(CGSize*)arg2 ;
-(CGAffineTransform)transformForTargetSize:(CGSize)arg1 withRawTableSize:(CGSize)arg2 andStrokeDelta:(CGSize)arg3 ;
-(float)calculatedTableNameHeightIncludingDynamicResize:(char)arg1 ;
-(void)invalidateTableNameHeight;
-(void)invalidateDynamicResizeInfo;
-(void)willBeAddedToDocumentRoot:(id)arg1 ;
-(TSTDupContentCache *)dupContentCache;
-(TSTWPColumnCache *)cellIDToWPColumnCache;
-(TSTTableInfo *)tableInfo;
-(id)newLayoutHint;
-(void)setDynamicHeightResize:(float)arg1 ;
-(void)setDynamicWidthResize:(float)arg1 ;
-(void)captureDynamicResizeInfo;
-(void)updateDynamicInfoGeometry:(id)arg1 ;
-(float)dynamicHeightResize;
-(void)updateDynamicTableNameSize:(float)arg1 ;
-(int)tableRowsBehavior;
-(float)strokeHeightOfGridRow:(unsigned)arg1 beginColumn:(unsigned)arg2 endColumn:(unsigned)arg3 ;
-(float)strokeWidthOfGridColumn:(unsigned)arg1 beginRow:(unsigned)arg2 endRow:(unsigned)arg3 ;
-(char)isDynamicallyChangingInfoGeometry;
-(TSDInfoGeometry *)dynamicInfoGeometry;
-(NSIndexSet *)visibleColumnIndices;
-(NSIndexSet *)visibleRowIndices;
-(void)validateLayoutHint:(id)arg1 ;
-(TSWPEditingController *)containedTextEditor;
-(void)addChangeDescriptor:(id)arg1 ;
-(char)isDynamicallyColumnTabResizing;
-(float)dynamicColumnTabSize;
-(char)isDynamicallyRowTabResizing;
-(float)dynamicRowTabSize;
-(char)isDynamicallyRepressingFrozenHeaders;
-(char)inDynamicLayoutMode;
-(char)dynamicRepResize;
-(char)isDynamicallyChangingContent;
-(id<TSTLayoutDynamicContentProtocol>)dynamicContentDelegate;
-(char)cell:(id*)arg1 forCellID:(SCD_Struct_TS271)arg2 ;
-(SCD_Struct_TS271)modelCellIDForLayoutCellID:(SCD_Struct_TS271)arg1 ;
-(char)isDynamicallyChangingRowOrColumnCount;
-(id)validateCellForDrawing:(SCD_Struct_TS271)arg1 cell:(id)arg2 contents:(id)arg3 wrap:(char)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 layoutCacheFlags:(int)arg7 pageNumber:(unsigned)arg8 pageCount:(unsigned)arg9 ;
-(char)isDynamicallyHidingContentOfCellID:(SCD_Struct_TS271)arg1 ;
-(char)isDynamicallyHidingRowsColsCellID:(SCD_Struct_TS271)arg1 ;
-(char)isDynamicallyHidingTextOfCellID:(SCD_Struct_TS271)arg1 ;
-(void)clearDynamicStrokesForCellRange:(SCD_Struct_TS491)arg1 ;
-(UIEdgeInsets)paddingForCellID:(SCD_Struct_TS271)arg1 ;
-(void)enumerateMergedStrokesForGridColumn:(unsigned)arg1 from:(unsigned)arg2 to:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateMergedStrokesForGridRow:(unsigned)arg1 from:(unsigned)arg2 to:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateMergedStrokesAndCapsForGridColumn:(unsigned)arg1 from:(unsigned)arg2 to:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateMergedStrokesAndCapsForGridRow:(unsigned)arg1 from:(unsigned)arg2 to:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(float)strokeWidthOfGridColumn:(unsigned)arg1 atRowIndex:(unsigned)arg2 ;
-(float)strokeHeightOfGridRow:(unsigned)arg1 atColumnIndex:(unsigned)arg2 ;
-(char)isDynamicallyHidingRowsCols;
-(char)isDynamicallyHidingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2 ;
-(void)invalidateStrokeRange:(SCD_Struct_TS491)arg1 atLayerIndex:(int)arg2 ;
-(void)addChangeDescriptorWithType:(int)arg1 andCellRange:(SCD_Struct_TS491)arg2 andStrokeRange:(SCD_Struct_TS491)arg3 ;
-(void)invalidateStrokeDefaults;
-(TSTWidthHeightCache *)widthHeightCache;
-(float)calculatedTableNameHeight;
-(char)isDynamicallyResizingTableName;
-(float)dynamicTableNameResize;
-(TSTHiddenRowsColumnsCache *)hiddenRowsColumnsCache;
-(char)isDynamicallyResizing:(int)arg1 rowColIndex:(unsigned short)arg2 ;
-(UIEdgeInsets)defaultPaddingForCellID:(SCD_Struct_TS271)arg1 ;
-(id)newTextEngineForCell:(id)arg1 atCellID:(SCD_Struct_TS271)arg2 ;
-(float)fontHeightOfParagraphStyle:(id)arg1 ;
-(void)addChangeDescriptorWithType:(int)arg1 andCellRange:(SCD_Struct_TS491)arg2 ;
-(void)clearModelHeightWidthCacheForCellRange:(SCD_Struct_TS491)arg1 ;
-(void)validateDynamicResizeInfo;
-(void)invalidateBandedFill;
-(void)validateStrokesArrays;
-(char)adjustGridRowForVisibility:(unsigned*)arg1 isTop:(char)arg2 ;
-(char)adjustGridColumnForVisibility:(unsigned*)arg1 isLeft:(char)arg2 ;
-(id)p_strokesForGridColumn:(unsigned)arg1 isLeft:(char)arg2 takeStrokeWriteLock:(char)arg3 ;
-(id)p_strokesForGridRow:(unsigned)arg1 isTop:(char)arg2 takeStrokeWriteLock:(char)arg3 ;
-(void)setStroke:(id)arg1 forGridRow:(unsigned)arg2 atLayerIndex:(int)arg3 isTop:(char)arg4 beginColumn:(unsigned)arg5 endColumn:(unsigned)arg6 ;
-(void)setStroke:(id)arg1 forGridColumn:(unsigned)arg2 atLayerIndex:(int)arg3 isLeft:(char)arg4 beginRow:(unsigned)arg5 endRow:(unsigned)arg6 ;
-(void)setStrokesForCellID:(SCD_Struct_TS271)arg1 atLayerIndex:(int)arg2 topStroke:(id)arg3 bottomStroke:(id)arg4 rightStroke:(id)arg5 leftStroke:(id)arg6 ;
-(id)mergedStrokesForGridRow:(unsigned)arg1 ;
-(id)mergedStrokesForGridColumn:(unsigned)arg1 ;
-(SCD_Struct_TS271)modelCellIDForStrokesOfLayoutCellID:(SCD_Struct_TS271)arg1 ;
-(char)isDynamicallyChangingRowCount;
-(int)dynamicRowAdjustment;
-(void)setCustomStrokesForCellID:(SCD_Struct_TS271)arg1 topStroke:(id)arg2 bottomStroke:(id)arg3 rightStroke:(id)arg4 leftStroke:(id)arg5 ;
-(void)invalidateStrokeSpills;
-(void)updateStrokesForCell:(id)arg1 atCellID:(SCD_Struct_TS271)arg2 ;
-(char)isDynamicallySettingBandedFill;
-(char)dynamicBandedFill;
-(char)dynamicBandedFillSetting;
-(void)measureTextForLayoutState:(id)arg1 ;
-(void)setDynamicRepResize:(char)arg1 ;
-(NSMutableSet *)dynamicLayouts;
-(void)setDynamicSavedLayoutGeometry:(TSDLayoutGeometry *)arg1 ;
-(char)updateDynamicChangeRowOrColumnCount:(int)arg1 count:(int)arg2 newlyAddedElementSize:(float)arg3 ;
-(void)p_cancelDynamicRowColCountChanges;
-(void)updateDynamicHidingRowsCols:(int)arg1 hidingCellRange:(SCD_Struct_TS491)arg2 ;
-(void)cancelDynamicModeChanges;
-(void)beginDynamicMode:(id)arg1 ;
-(void)endDynamicMode;
-(char)isDynamicallySwappingRows;
-(id<TSTLayoutDynamicRowSwapProtocol>)dynamicRowSwapDelegate;
-(char)isDynamicallySwappingColumns;
-(id<TSTLayoutDynamicColumnSwapProtocol>)dynamicColumnSwapDelegate;
-(char)isDynamicallyChangingColumnCount;
-(char)isDynamicallyRevealingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2 ;
-(char)processHiddenRowsForExport;
-(TSTLayout *)dynamicLayout;
-(char)isGrouped;
-(TSDLayoutGeometry *)dynamicSavedLayoutGeometry;
-(void)p_processChange:(id)arg1 forChangeSource:(id)arg2 ;
-(NSMutableArray *)changeDescriptors;
-(void)validateBandedFill;
-(void)validateTableRowsBehavior;
-(void)validateChangeDescriptorQueue;
-(void)invalidateDefaultFontHeights;
-(void)validateRowVisibility:(id)arg1 ;
-(void)validateMasterLayoutForChangeDescriptors:(id)arg1 ;
-(void)validateDefaultFontHeights;
-(id)regionForStrokeValidationFromChangeDescriptors:(id)arg1 ;
-(id)validateFittingInfoForChangeDescriptors:(id)arg1 rowsNeedingFittingInfo:(id)arg2 regionForStrokeValidation:(id)arg3 ;
-(void)validateStrokesForRegion:(id)arg1 regionAlreadyValidated:(id)arg2 ;
-(void)waitForLayoutToComplete;
-(void)updateWHCForMergeRanges;
-(UIEdgeInsets)edgeInsetsFromPadding:(id)arg1 ;
-(void)queueCellForValidation:(SCD_Struct_TS491)arg1 cell:(id)arg2 mergeRange:(SCD_Struct_TS491)arg3 wrap:(char)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 prop:(char)arg7 layoutCacheFlags:(int)arg8 layoutTask:(id)arg9 ;
-(void)p_validateFittingInfoForCellID:(SCD_Struct_TS271)arg1 inMergeRange:(SCD_Struct_TS491)arg2 ;
-(SCD_Struct_TS271)p_validateFittingInfoForEmptyCellsBetween:(SCD_Struct_TS271)arg1 andCellID:(SCD_Struct_TS271)arg2 inRange:(SCD_Struct_TS491)arg3 widthHeightCollection:(id)arg4 ;
-(void)validateFittingInfoForCell:(id)arg1 cellID:(SCD_Struct_TS271)arg2 mergeRange:(SCD_Struct_TS491)arg3 setFitting:(char)arg4 layoutTask:(id)arg5 widthHeightCollection:(id)arg6 ;
-(void)processLayoutTask:(id)arg1 ;
-(void)validateFittingInfoWithCellRangeWorker:(SCD_Struct_TS491)arg1 regionForStrokeValidation:(id)arg2 ;
-(void)p_validateFittingInfoForEmptyCellsOnSingleRowBetween:(SCD_Struct_TS271)arg1 andEndCellID:(SCD_Struct_TS271)arg2 widthHeightCollection:(id)arg3 ;
-(id)p_newCellRegionForValidatingFittingInfoForRegion:(id)arg1 inserting:(char)arg2 rowsCols:(int)arg3 inRange:(SCD_Struct_TS491)arg4 ;
-(void)validateFittingInfoWithCellRange:(SCD_Struct_TS491)arg1 regionForStrokeValidation:(id)arg2 ;
-(SCD_Struct_TS271)layoutCellIDForModelCellID:(SCD_Struct_TS271)arg1 ;
-(unsigned)numCellsPerTask;
-(id)accountingParagraphStylePropertyMapForCell:(id)arg1 atCellID:(SCD_Struct_TS271)arg2 ;
-(char)isDynamicallyChangingFontColorOfCellID:(SCD_Struct_TS271)arg1 ;
-(TSUColor *)dynamicFontColor;
-(void)setProcessHiddenRowsForExport:(char)arg1 ;
-(char)hintIsValid:(id)arg1 ;
-(void)resetModelHeightWidthCache;
-(id)tableNameTextEngine;
-(CGSize)tableNameTextSize;
-(void)setStrokeSpillForGridColumn:(unsigned)arg1 beginRow:(unsigned)arg2 endRow:(unsigned)arg3 ;
-(void)setDynamicStrokesForCellID:(SCD_Struct_TS271)arg1 topStroke:(id)arg2 bottomStroke:(id)arg3 rightStroke:(id)arg4 leftStroke:(id)arg5 ;
-(char)shouldRowUseBandedFill:(unsigned short)arg1 ;
-(void)addDynamicLayoutBeginIfNecessary:(id)arg1 ;
-(void)removeDynamicLayoutEndIfNecessary:(id)arg1 ;
-(char)isDynamicallyResizing:(int)arg1 ;
-(char)isDynamicallyResizingCellID:(SCD_Struct_TS271)arg1 ;
-(SCD_Struct_TS491)expandCellRangeToVisibleNeighbors:(SCD_Struct_TS491)arg1 ;
-(unsigned short)firstEmptyBodyRow;
-(char)containsAnyContentInRange:(SCD_Struct_TS491)arg1 ;
-(void)updateDynamicResize:(int)arg1 resizingRange:(SCD_Struct_TS491)arg2 resizeAdjustment:(float)arg3 ;
-(char)isDynamicallyRevealingRowsCols;
-(void)updateDynamicSelectionRegion:(id)arg1 ;
-(char)isDynamicallyChangingSelection;
-(void)updateDynamicColumnTabSize:(float)arg1 ;
-(void)updateDynamicRowTabSize:(float)arg1 ;
-(void)updateDynamicBandedFill:(char)arg1 setting:(char)arg2 ;
-(void)updateDynamicRepressFrozenHeader:(char)arg1 ;
-(void)updateDynamicHidingContent:(SCD_Struct_TS491)arg1 ;
-(void)updateDynamicHidingText:(SCD_Struct_TS491)arg1 ;
-(void)updateDynamicRevealingRowsCols:(int)arg1 revealingCellRange:(SCD_Struct_TS491)arg2 ;
-(void)updateDynamicContentDelegate:(id)arg1 ;
-(void)updateDynamicFontColor:(id)arg1 andRange:(SCD_Struct_TS491)arg2 ;
-(void)updateDynamicRowSwapDelegate:(id)arg1 ;
-(void)updateDynamicColumnSwapDelegate:(id)arg1 ;
-(void)updateDynamicSuppressingConditionalStylesCellID:(SCD_Struct_TS271)arg1 ;
-(void)updateDynamicCellFillDelegate:(id)arg1 ;
-(id<TSTLayoutDynamicCellFillProtocol>)dynamicCellFillDelegate;
-(char)isDynamicallyChangingCellFill;
-(void)updateDynamicResizeInfo:(id)arg1 ;
-(id)adjustedDynamicSavedLayoutGeometry;
-(void)validateFittingWidthsForRegion:(id)arg1 ;
-(void)setMaxConcurrentTasks:(unsigned)arg1 ;
-(TSTStrokeDefaultVendor *)strokesDefaultVendor;
-(TSTWPColumnCache *)tempWPColumnCache;
-(int)tableEnvironment;
-(void)setTableEnvironment:(int)arg1 ;
-(unsigned)maxConcurrentTasks;
-(void)setNumCellsPerTask:(unsigned)arg1 ;
-(float)dynamicAddOrRemoveColumnElementSize;
-(float)dynamicAddOrRemoveRowElementSize;
-(int)dynamicColumnAdjustment;
-(SCD_Struct_TS491)dynamicFontColorCellRange;
-(float)dynamicWidthResize;
-(char)dynamicResizingColumns;
-(float)dynamicResizingColumnAdjustment;
-(SCD_Struct_TS491)dynamicResizingColumnRange;
-(char)dynamicResizingRows;
-(float)dynamicResizingRowAdjustment;
-(SCD_Struct_TS491)dynamicResizingRowRange;
-(TSTCellRegion *)dynamicSelectionRegion;
-(SCD_Struct_TS271)dynamicSuppressingConditionalStylesCellID;
-(void)setContainedTextEditor:(TSWPEditingController *)arg1 ;
-(TSTMergeRangeSortedSet *)mergeRanges;
-(void)setMergeRanges:(TSTMergeRangeSortedSet *)arg1 ;
-(CGSize)maximumPartitionSize;
-(void)setMaximumPartitionSize:(CGSize)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)validate;
@end

