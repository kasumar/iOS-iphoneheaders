/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebSelectionAssistant.h>

@class _UITextServiceSession, UILongPressGestureRecognizer;

@interface UIWKSelectionAssistant : UIWebSelectionAssistant {

	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;

}

@property (nonatomic,readonly) UILongPressGestureRecognizer * selectionLongPressRecognizer; 
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)selectionChanged;
-(id)initWithView:(id)arg1 ;
-(CGRect)selectionFrame;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3 withFlags:(int)arg4 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(int)arg2 withFlags:(int)arg3 ;
-(void)blockSelectionChangedWithTouch:(int)arg1 withFlags:(int)arg2 growThreshold:(float)arg3 shrinkThreshold:(float)arg4 ;
-(UILongPressGestureRecognizer *)selectionLongPressRecognizer;
-(char)shouldHandleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)showDictionaryFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(int)arg2 withState:(int)arg3 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(int)arg2 ;
-(void)showTextServiceFor:(id)arg1 fromRect:(CGRect)arg2 ;
@end
