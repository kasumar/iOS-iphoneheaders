/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <TelephonyUI/TPLCDView.h>

@class UIButton;

@interface InCallLCDField : TPLCDView {

	UIButton* _button;
	id _delegate;
	unsigned _textIsPlaceholder : 1;
	unsigned _buttonIsDelete : 1;

}
+(float)defaultTextFontSize;
+(float)defaultLabelFontSize;
-(void)_deleteButtonClicked:(id)arg1 ;
-(void)setPlaceholderText:(id)arg1 animating:(BOOL)arg2 ;
-(BOOL)showsSendButton;
-(id)unformattedText;
-(void)setShowsSendButton:(BOOL)arg1 ;
-(void)_removeButton;
-(void)_sendButtonClicked:(id)arg1 ;
-(void)_showButtonWithTitle:(id)arg1 action:(SEL)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)textFrame;
-(float)_textVInset;
-(float)_labelVInset;
-(void)setShowsDeleteButton:(BOOL)arg1 ;
-(void)_updateButton;
@end

