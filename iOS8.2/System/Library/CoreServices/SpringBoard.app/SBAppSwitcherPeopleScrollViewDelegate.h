/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBAppSwitcherPeopleScrollViewDelegate <UIScrollViewDelegate>
@required
-(int)numberOfSectionsInPeopleScrollView:(id)arg1;
-(int)peopleScrollView:(id)arg1 numberOfItemsInSection:(int)arg2;
-(id)peopleScrollView:(id)arg1 itemAtIndexPath:(id)arg2;
-(id)peopleScrollView:(id)arg1 viewForItem:(id)arg2;
-(CGSize*)peopleScrollView:(id)arg1 sizeForPlaceholderForSection:(int)arg2;
-(CGSize*)peopleScrollView:(id)arg1 sizeForItem:(id)arg2 expanded:(char)arg3;
-(id)peopleScrollView:(id)arg1 titleForSection:(unsigned)arg2;
-(id)peopleScrollView:(id)arg1 placeholderStringForEmptySection:(unsigned)arg2;

@end

