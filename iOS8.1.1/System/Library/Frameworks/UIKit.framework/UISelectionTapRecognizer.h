/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextTapRecognizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UISelectionTapRecognizer : UITextTapRecognizer {

	UIResponder*<UITextInput> _textView;

}

@property (assign) UIResponder*<UITextInput> textView;              //@synthesize textView=_textView - In the implementation block
-(void)setState:(long long)arg1 ;
-(void)setTextView:(UIResponder*<UITextInput>)arg1 ;
-(UIResponder*<UITextInput>)textView;
-(BOOL)isCloseToSelection;
@end
