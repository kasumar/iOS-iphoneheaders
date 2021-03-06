/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/TKVibrationPickerStyleProvider.h>

@class UIFont, UIColor;

@interface ABFaceTimeVibrationPickerStyleProvider : NSObject <TKVibrationPickerStyleProvider> {

	UIFont* _vibrationPickerCellTextFont;
	UIColor* _vibrationPickerCellHighlightedTextColor;
	UIFont* _vibrationPickerHeaderTextFont;
	UIColor* _vibrationPickerHeaderTextShadowColor;
	UIOffset _vibrationPickerHeaderTextShadowOffset;
	UIEdgeInsets _vibrationPickerHeaderTextPaddingInsets;

}

@property (nonatomic,readonly) UIFont * vibrationPickerCellTextFont;                             //@synthesize vibrationPickerCellTextFont=_vibrationPickerCellTextFont - In the implementation block
@property (nonatomic,readonly) UIColor * vibrationPickerCellHighlightedTextColor;                //@synthesize vibrationPickerCellHighlightedTextColor=_vibrationPickerCellHighlightedTextColor - In the implementation block
@property (nonatomic,readonly) UIFont * vibrationPickerHeaderTextFont;                           //@synthesize vibrationPickerHeaderTextFont=_vibrationPickerHeaderTextFont - In the implementation block
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextShadowColor;                   //@synthesize vibrationPickerHeaderTextShadowColor=_vibrationPickerHeaderTextShadowColor - In the implementation block
@property (nonatomic,readonly) UIOffset vibrationPickerHeaderTextShadowOffset;                   //@synthesize vibrationPickerHeaderTextShadowOffset=_vibrationPickerHeaderTextShadowOffset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;              //@synthesize vibrationPickerHeaderTextPaddingInsets=_vibrationPickerHeaderTextPaddingInsets - In the implementation block
@property (nonatomic,readonly) BOOL vibrationPickerUsesOpaqueBackground; 
@property (nonatomic,readonly) int vibrationPickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellBackgroundColor; 
@property (nonatomic,readonly) BOOL wantsCustomVibrationPickerHeaderView; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextColor; 
-(BOOL)vibrationPickerUsesOpaqueBackground;
-(int)vibrationPickerTableViewSeparatorStyle;
-(id)vibrationPickerCellTextFont;
-(id)vibrationPickerCellTextColor;
-(id)vibrationPickerCellHighlightedTextColor;
-(id)vibrationPickerCellBackgroundColor;
-(id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1 ;
-(id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
-(BOOL)wantsCustomVibrationPickerHeaderView;
-(id)vibrationPickerHeaderTextFont;
-(id)vibrationPickerHeaderTextColor;
-(id)vibrationPickerHeaderTextShadowColor;
-(UIOffset)vibrationPickerHeaderTextShadowOffset;
-(UIEdgeInsets)vibrationPickerHeaderTextPaddingInsets;
@end

