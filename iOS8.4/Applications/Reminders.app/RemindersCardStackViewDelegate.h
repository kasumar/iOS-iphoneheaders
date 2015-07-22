/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RemindersCardStackViewDelegate
@required
-(char)cardStackView:(id)arg1 cardShouldSlideBackIntoStackWhenDismissed:(id)arg2;
-(void)cardStackViewDidPresentCard:(id)arg1;
-(void)cardStackView:(id)arg1 willAddGestureRecognizer:(id)arg2 toCardAtIndex:(int)arg3;
-(void)cardStackView:(id)arg1 didDismissCard:(id)arg2;
-(int)cardStackView:(id)arg1 targetIndexForMoveFromIndex:(int)arg2 toProposedIndex:(int)arg3;
-(void)cardStackView:(id)arg1 cardDidMoveFromIndex:(int)arg2 toIndex:(int)arg3;
-(void)cardStackViewDidEndReordering:(id)arg1;
-(char)cardStackView:(id)arg1 canReorderCardAtIndex:(int)arg2;

@end
