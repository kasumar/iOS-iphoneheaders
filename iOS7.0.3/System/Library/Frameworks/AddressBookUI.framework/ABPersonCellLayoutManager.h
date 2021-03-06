/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UITableViewCellLayoutManager.h>

@protocol ABPersonCellLayoutManagerDelegate, ABStyleProvider;
@interface ABPersonCellLayoutManager : UITableViewCellLayoutManager {

	<ABPersonCellLayoutManagerDelegate>* _delegate;
	<ABStyleProvider>* _styleProvider;

}

@property (assign,nonatomic) <ABPersonCellLayoutManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;                           //@synthesize styleProvider=_styleProvider - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(float)deleteConfirmationWidth;
-(float)accessoryViewInsetForBounds:(CGRect)arg1 ;
-(id)cellAsMultiCell:(id)arg1 ;
-(float)widthForCellContentViewInTableView:(id)arg1 whenEditing:(BOOL)arg2 isShowingDeleteConfirmation:(BOOL)arg3 accessoryViewBounds:(CGRect)arg4 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(void)cell:(id)arg1 willTransitionToState:(unsigned)arg2 ;
-(void)cell:(id)arg1 didTransitionToState:(unsigned)arg2 ;
-(CGRect)backgroundEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)backgroundStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)deleteConfirmationRectForCell:(id)arg1 ;
-(CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
@end

