/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UITextView, ACMicroblogLocationView;

@interface ACMicroblogSnippetView : UIView {

	NSString* _text;
	UITextView* _textView;
	ACMicroblogLocationView* _locationView;

}

@property (nonatomic,copy) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UITextView * textView;                               //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) ACMicroblogLocationView * locationView;              //@synthesize locationView=_locationView - In the implementation block
-(id)initWithType:(int)arg1 frame:(CGRect)arg2 ;
-(id)locationView;
-(void)setLocationView:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(bool)resignFirstResponder;
-(id)text;
-(void)setText:(id)arg1 ;
-(bool)isFirstResponder;
-(void)setTextView:(id)arg1 ;
-(bool)canResignFirstResponder;
-(id)textView;
-(void).cxx_destruct;
-(void)updateStatus:(int)arg1 ;
@end

