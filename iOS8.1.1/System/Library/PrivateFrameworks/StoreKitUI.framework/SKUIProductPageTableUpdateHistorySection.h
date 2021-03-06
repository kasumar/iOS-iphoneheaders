/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class SKUIClientContext, NSMutableIndexSet, SKUIProductPageTableExpandableHeaderView, NSArray, SKUILayoutCache, SKUIColorScheme, NSDateFormatter;

@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection {

	SKUIClientContext* _clientContext;
	NSMutableIndexSet* _expandedIndexSet;
	long long _firstStringIndex;
	SKUIProductPageTableExpandableHeaderView* _headerView;
	NSArray* _releaseNotes;
	SKUILayoutCache* _textLayoutCache;
	SKUIColorScheme* _colorScheme;
	NSDateFormatter* _dateFormatter;

}

@property (assign,nonatomic) long long firstStringIndex;                     //@synthesize firstStringIndex=_firstStringIndex - In the implementation block
@property (nonatomic,copy) NSArray * releaseNotes;                           //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,retain) SKUILayoutCache * textLayoutCache;              //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                  //@synthesize colorScheme=_colorScheme - In the implementation block
-(void)setExpanded:(BOOL)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)headerViewForTableView:(id)arg1 ;
-(SKUILayoutCache *)textLayoutCache;
-(void)setTextLayoutCache:(SKUILayoutCache *)arg1 ;
-(NSArray *)releaseNotes;
-(void)setFirstStringIndex:(long long)arg1 ;
-(void)setReleaseNotes:(NSArray *)arg1 ;
-(void)_reloadHeaderView;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)firstStringIndex;
@end

