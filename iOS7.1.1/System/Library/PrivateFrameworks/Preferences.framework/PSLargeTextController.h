/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UILabel, NSArray, PSSpecifier;

@interface PSLargeTextController : PSListController {

	UILabel* _bodyExampleLabel;
	UILabel* _headlineExampleLabel;
	long long _selectedCategoryIndex;
	NSArray* _contentSizeCategories;
	PSSpecifier* _sliderGroupSpecifier;
	bool _usesExtendedRange;
	bool _showsExtendedRangeSwitch;

}

@property (assign,nonatomic) bool showsExtendedRangeSwitch;              //@synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch - In the implementation block
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(id)specifiers;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2 ;
-(id)usesExtendedRangeForSpecifier:(id)arg1 ;
-(void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getDynamicTypeValueForSpecifier:(id)arg1 ;
-(void)setShowsExtendedRangeSwitch:(bool)arg1 ;
-(bool)showsExtendedRangeSwitch;
@end

