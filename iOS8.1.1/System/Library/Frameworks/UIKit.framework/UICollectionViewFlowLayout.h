/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class _UIFlowLayoutInfo, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface UICollectionViewFlowLayout : UICollectionViewLayout {

	struct {
		unsigned delegateSizeForItem : 1;
		unsigned delegateReferenceSizeForHeader : 1;
		unsigned delegateReferenceSizeForFooter : 1;
		unsigned delegateInsetForSection : 1;
		unsigned delegateInteritemSpacingForSection : 1;
		unsigned delegateLineSpacingForSection : 1;
		unsigned delegateAlignmentOptions : 1;
		unsigned layoutDataIsValid : 1;
		unsigned delegateInfoIsValid : 1;
		unsigned roundsToScreenScale : 1;
	}  _gridLayoutFlags;
	double _interitemSpacing;
	double _lineSpacing;
	CGSize _itemSize;
	CGSize _estimatedItemSize;
	CGSize _headerReferenceSize;
	CGSize _footerReferenceSize;
	UIEdgeInsets _sectionInset;
	_UIFlowLayoutInfo* _data;
	CGSize _currentLayoutSize;
	NSMutableDictionary* _insertedItemsAttributesDict;
	NSMutableDictionary* _insertedSectionHeadersAttributesDict;
	NSMutableDictionary* _insertedSectionFootersAttributesDict;
	NSMutableDictionary* _deletedItemsAttributesDict;
	NSMutableDictionary* _deletedSectionHeadersAttributesDict;
	NSMutableDictionary* _deletedSectionFootersAttributesDict;
	long long _scrollDirection;
	NSDictionary* _rowAlignmentsOptionsDictionary;
	CGPoint _contentOffsetAdjustment;
	CGSize _contentSizeAdjustment;
	NSMutableArray* _indexPathsToValidate;

}

@property (assign,nonatomic) double minimumLineSpacing;                   //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) double minimumInteritemSpacing;              //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                             //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) CGSize estimatedItemSize;                    //@synthesize estimatedItemSize=_estimatedItemSize - In the implementation block
@property (assign,nonatomic) long long scrollDirection; 
@property (assign,nonatomic) CGSize headerReferenceSize;                  //@synthesize headerReferenceSize=_headerReferenceSize - In the implementation block
@property (assign,nonatomic) CGSize footerReferenceSize;                  //@synthesize footerReferenceSize=_footerReferenceSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                   //@synthesize sectionInset=_sectionInset - In the implementation block
+(Class)invalidationContextClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setScrollDirection:(long long)arg1 ;
-(void)setMinimumInteritemSpacing:(double)arg1 ;
-(void)setMinimumLineSpacing:(double)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(void)setItemSize:(CGSize)arg1 ;
-(long long)scrollDirection;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)_fetchItemsInfoForRect:(CGRect)arg1 ;
-(CGRect)_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2 ;
-(CGRect)_frameForFooterInSection:(long long)arg1 usingData:(id)arg2 ;
-(CGRect)_frameForItem:(long long)arg1 inSection:(long long)arg2 usingData:(id)arg3 ;
-(id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2 ;
-(id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2 ;
-(long long)_sectionArrayIndexForIndexPath:(id)arg1 ;
-(BOOL)_estimatesSizes;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2 ;
-(CGSize)itemSize;
-(id)_layoutAttributesForItemsInRect:(CGRect)arg1 ;
-(id)indexesForSectionHeadersInRect:(CGRect)arg1 usingData:(id)arg2 ;
-(id)indexesForSectionFootersInRect:(CGRect)arg1 usingData:(id)arg2 ;
-(double)minimumInteritemSpacing;
-(double)minimumLineSpacing;
-(void)_updateDelegateFlags;
-(void)_getSizingInfos;
-(void)_updateItemsLayoutForRect:(CGRect)arg1 ;
-(void)_setEstimatedItemSize:(CGSize)arg1 ;
-(CGSize)_estimatedItemSize;
-(id)indexesForSectionHeadersInRect:(CGRect)arg1 ;
-(id)indexesForSectionFootersInRect:(CGRect)arg1 ;
-(id)layoutAttributesForHeaderInSection:(long long)arg1 ;
-(id)layoutAttributesForFooterInSection:(long long)arg1 ;
-(void)setHeaderReferenceSize:(CGSize)arg1 ;
-(void)setFooterReferenceSize:(CGSize)arg1 ;
-(void)_setNeedsLayoutComputationWithoutInvalidation;
-(id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1 ;
-(id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1 ;
-(id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1 ;
-(id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1 ;
-(CGSize)synchronizeLayout;
-(void)_invalidateButKeepDelegateInfo;
-(void)_invalidateButKeepAllInfo;
-(void)_setRowAlignmentsOptions:(id)arg1 ;
-(id)_rowAlignmentOptions;
-(void)_updateContentSizeScrollingDimensionWithDelta:(double)arg1 ;
-(void)_setRoundsToScreenScale:(BOOL)arg1 ;
-(BOOL)_roundsToScreenScale;
-(CGSize)headerReferenceSize;
-(CGSize)footerReferenceSize;
-(UIEdgeInsets)sectionInset;
-(CGSize)estimatedItemSize;
-(void)setEstimatedItemSize:(CGSize)arg1 ;
@end
