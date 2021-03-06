/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKMedicalIDEditorCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol HKMedicalIDEditorCellHeightChangeDelegate;
@class UILabel, UITextView, NSString;

@interface HKMedicalIDEditorMultilineStringCell : HKMedicalIDEditorCell <UITextViewDelegate> {

	UILabel* _labelLabel;
	double _lastSeenTextViewContentHeight;
	UILabel* _placeholderLabel;
	UITextView* _textView;
	id<HKMedicalIDEditorCellHeightChangeDelegate> _heightChangeDelegate;
	UIEdgeInsets _textViewExtraMargins;

}

@property (nonatomic,readonly) UITextView * textView;                                                                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSString * stringValue; 
@property (nonatomic,retain) NSString * placeholder; 
@property (assign,nonatomic,__weak) id<HKMedicalIDEditorCellHeightChangeDelegate> heightChangeDelegate;              //@synthesize heightChangeDelegate=_heightChangeDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textViewExtraMargins;                                                      //@synthesize textViewExtraMargins=_textViewExtraMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)showsLabelAndValue;
-(void)commitEditing;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)label;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setLabel:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)placeholder;
-(UITextView *)textView;
-(void)_labelTapped:(id)arg1 ;
-(UIEdgeInsets)textViewExtraMargins;
-(id<HKMedicalIDEditorCellHeightChangeDelegate>)heightChangeDelegate;
-(void)setHeightChangeDelegate:(id<HKMedicalIDEditorCellHeightChangeDelegate>)arg1 ;
-(void)setTextViewExtraMargins:(UIEdgeInsets)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end

