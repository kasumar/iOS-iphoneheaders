/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/StackElementDelegate.h>

@protocol StackDataSource, StackDelegate;
@class UIView, NSArray, NSMutableArray, NSMutableDictionary;

@interface StackController : NSObject <StackElementDelegate> {

	<StackDataSource>* _dataSource;
	<StackDelegate>* _delegate;
	UIView* _stackContainerView;
	UIEdgeInsets _stackContainerViewEdgeInsets;
	id _defaultItem;
	UIView* _defaultView;
	NSArray* _itemsToDisplay;
	NSMutableArray* _stackedItems;
	NSMutableArray* _orderedItems;
	NSMutableDictionary* _stackElementsByItem;
	NSMutableDictionary* _loadRequestDatesByItem;
	double _lastDisplayedItemsUpdateRequest;
	unsigned _transactionCount;
	BOOL _updateNeeded;
	BOOL _loadingData;
	BOOL _animateStateTransitions;
	BOOL _isAnimating;
	BOOL _isTerminating;
	BOOL _isSuspended;
	BOOL _itemsBecameStacked;

}

@property (assign,nonatomic) <StackDataSource> * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) <StackDelegate> * delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAnimating; 
@property (nonatomic,readonly) unsigned maximumNumberOfVisibleStackElements; 
@property (nonatomic,readonly) id defaultItem;                                            //@synthesize defaultItem=_defaultItem - In the implementation block
@property (nonatomic,readonly) UIView * defaultView;                                      //@synthesize defaultView=_defaultView - In the implementation block
@property (assign,nonatomic) BOOL animateStateTransitions;                                //@synthesize animateStateTransitions=_animateStateTransitions - In the implementation block
@property (nonatomic,copy) NSArray * itemsToDisplay;                                      //@synthesize itemsToDisplay=_itemsToDisplay - In the implementation block
-(void)removeStackedViews:(BOOL)arg1 ;
-(unsigned)maximumNumberOfVisibleStackElements;
-(void)displayStackedViewsForItems:(id)arg1 animated:(BOOL)arg2 ;
-(id)keyForItem:(id)arg1 ;
-(id)stackedViewForItem:(id)arg1 ;
-(void)stackDataSourceDidLoadItemData:(id)arg1 ;
-(void)setAnimateStateTransitions:(BOOL)arg1 ;
-(void)setItemsToDisplay:(id)arg1 ;
-(void)setNeedsToUpdateDisplayedItems:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)updateDisplayedItems;
-(BOOL)animateStateTransitions;
-(id)itemsToDisplay;
-(id)defaultItem;
-(void)addStackedItem:(id)arg1 ;
-(id)stackElementForItem:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)stackElement:(id)arg1 currentStateDidChangeFrom:(int)arg2 to:(int)arg3 ;
-(id)stackContainerView;
-(void)updateStackElements;
-(void)updateStackElement:(id)arg1 ;
-(void)setNeedsToUpdateStackElements;
-(void)updateIsAnimating;
-(BOOL)isAnyStackElementBeingStacked;
-(BOOL)isDataAvailableForStackElement:(id)arg1 loadIfNeeded:(BOOL)arg2 ;
-(int)maximumStackElementDepth;
-(void)removeStackElement:(id)arg1 ;
-(UIEdgeInsets)stackContainerViewEdgeInsets;
-(BOOL)stackIsTerminating;
-(id)viewForStackElement:(id)arg1 ;
-(id)viewBelowStackElement:(id)arg1 ;
-(void)stackElement:(id)arg1 willRemoveView:(id)arg2 ;
-(void)stackElement:(id)arg1 targetStateDidChangeFrom:(int)arg2 to:(int)arg3 ;
-(void)beginTransaction;
-(void)endTransaction;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)dataSource;
-(id)delegate;
-(BOOL)isAnimating;
-(void)setIsAnimating:(BOOL)arg1 ;
-(id)defaultView;
@end

