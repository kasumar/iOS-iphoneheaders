/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionView.h>

@class AlarmScheduleGridView, AlarmScheduleLayout;

@interface AlarmScheduleCollectionView : UICollectionView {

	AlarmScheduleGridView* _gridView;

}

@property (nonatomic,retain) AlarmScheduleLayout * collectionViewLayout; 
@property (nonatomic,retain,readonly) AlarmScheduleGridView * gridView;                  //@synthesize gridView=_gridView - In the implementation block
@property (assign,getter=isShowingNoAlarms,nonatomic) char showingNoAlarms; 
-(void)setShowingNoAlarms:(char)arg1 ;
-(id)frontmostVisibleCellWithAlarmBodyContainingPoint:(CGPoint)arg1 ;
-(char)isShowingNoAlarms;
-(void)updateGridLayout;
-(void)dealloc;
-(void)layoutSubviews;
-(AlarmScheduleLayout *)collectionViewLayout;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(AlarmScheduleGridView *)gridView;
@end

