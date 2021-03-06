/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <ToneKit/TKVibrationPickerTableViewCellDelegate.h>
#import <ToneKit/TKVibrationRecorderViewControllerDelegate.h>

@protocol TKVibrationPickerViewControllerDelegate, TKVibrationPickerStyleProvider;
@class NSString, NSIndexPath, TLVibrationManager, TKVibratorController, NSTimer, NSArray, TKLabelContainerView;

@interface TKVibrationPickerViewController : UITableViewController <TKVibrationPickerTableViewCellDelegate, TKVibrationRecorderViewControllerDelegate> {

	int _alertType;
	bool _showsDefault;
	bool _showsUserGenerated;
	bool _showsNone;
	bool _showsNothingSelected;
	bool _showsEditButtonAtRightSideOfCurrentNavigationController;
	bool _allowsDeletingCurrentSystemVibration;
	NSString* _noneString;
	NSIndexPath* _selectedVibrationIndexPath;
	bool _canEnterEditingMode;
	bool _vibrating;
	bool _viewHasAppearedAtLeastOnce;
	bool _isCallingParentViewController;
	bool _swipeToDeleteMode;
	bool _skipNextUserGeneratedVibrationsDidChangeNotification;
	TLVibrationManager* _vibrationManager;
	TKVibratorController* _vibratorController;
	<TKVibrationPickerViewControllerDelegate>* _delegate;
	NSTimer* _vibrationShouldStopTimer;
	NSArray* _sortedVibrationIdentifiers;
	NSArray* _sortedUserGeneratedVibrationIdentifiers;
	<TKVibrationPickerStyleProvider>* _styleProvider;
	TKLabelContainerView* _defaultSectionHeaderView;
	TKLabelContainerView* _systemSectionHeaderView;
	TKLabelContainerView* _userGeneratedSectionHeaderView;

}

@property (assign,nonatomic) <TKVibrationPickerViewControllerDelegate> * delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * selectedVibrationIdentifier; 
@property (nonatomic,retain) NSString * noneString;                                                                                          //@synthesize noneString=_noneString - In the implementation block
@property (assign,nonatomic) bool showsNothingSelected;                                                                                      //@synthesize showsNothingSelected=_showsNothingSelected - In the implementation block
@property (assign,nonatomic) bool canEnterEditingMode;                                                                                       //@synthesize canEnterEditingMode=_canEnterEditingMode - In the implementation block
@property (assign,nonatomic) bool showsEditButtonAtRightSideOfCurrentNavigationController;                                                   //@synthesize showsEditButtonAtRightSideOfCurrentNavigationController=_showsEditButtonAtRightSideOfCurrentNavigationController - In the implementation block
@property (assign,nonatomic) bool allowsDeletingCurrentSystemVibration;                                                                      //@synthesize allowsDeletingCurrentSystemVibration=_allowsDeletingCurrentSystemVibration - In the implementation block
@property (nonatomic,retain) <TKVibrationPickerStyleProvider> * styleProvider; 
@property (nonatomic,readonly) double contentHeight; 
@property (nonatomic,readonly) long long _sectionForDefaultGroup; 
@property (nonatomic,readonly) long long _sectionForSystemGroup; 
@property (nonatomic,readonly) long long _sectionForUserGeneratedGroup; 
@property (nonatomic,readonly) long long _sectionForNoneGroup; 
@property (setter=_setSelectedVibrationIndexPath:,nonatomic,retain) NSIndexPath * _selectedVibrationIndexPath; 
@property (nonatomic,readonly) NSArray * _sortedVibrationIdentifiers; 
@property (nonatomic,readonly) NSArray * _sortedUserGeneratedVibrationIdentifiers; 
@property (setter=_setStyleProvider:,nonatomic,retain) <TKVibrationPickerStyleProvider> * _styleProvider;                                    //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,readonly) bool _showsOnlyEditableSections; 
@property (setter=_setDefaultSectionHeaderView:,nonatomic,retain) TKLabelContainerView * _defaultSectionHeaderView;                          //@synthesize defaultSectionHeaderView=_defaultSectionHeaderView - In the implementation block
@property (setter=_setSystemSectionHeaderView:,nonatomic,retain) TKLabelContainerView * _systemSectionHeaderView;                            //@synthesize systemSectionHeaderView=_systemSectionHeaderView - In the implementation block
@property (setter=_setUserGeneratedSectionHeaderView:,nonatomic,retain) TKLabelContainerView * _userGeneratedSectionHeaderView;              //@synthesize userGeneratedSectionHeaderView=_userGeneratedSectionHeaderView - In the implementation block
-(id)initWithVibrationType:(int)arg1 avController:(id)arg2 showsDefault:(bool)arg3 showsUserGenerated:(bool)arg4 showsNone:(bool)arg5 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)_handleUserGeneratedVibrationsDidChangeNotification;
-(void)setSelectedVibrationIdentifier:(id)arg1 ;
-(void)setShowsNothingSelected:(bool)arg1 ;
-(id)initWithAlertType:(int)arg1 showsDefault:(bool)arg2 showsUserGenerated:(bool)arg3 showsNone:(bool)arg4 ;
-(id)selectedVibrationIdentifier;
-(void)setShowsEditButtonAtRightSideOfCurrentNavigationController:(bool)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(id)_navigationItem;
-(void)_handleError:(id)arg1 ;
-(void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(id)arg1 ;
-(void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3 ;
-(void)setNoneString:(id)arg1 ;
-(bool)allowsDeletingCurrentSystemVibration;
-(void)setAllowsDeletingCurrentSystemVibration:(bool)arg1 ;
-(void)finishedWithPicker;
-(id)_styleProvider;
-(void)_setDefaultSectionHeaderView:(id)arg1 ;
-(void)_setStyleProvider:(id)arg1 ;
-(id)_defaultSectionHeaderView;
-(void)_getTitle:(id*)arg1 customHeaderView:(id*)arg2 forHeaderInSection:(long long)arg3 ;
-(void)_setSystemSectionHeaderView:(id)arg1 ;
-(void)_setUserGeneratedSectionHeaderView:(id)arg1 ;
-(long long)_sectionForNoneGroup;
-(id)_selectedVibrationIndexPath;
-(void)_updateEditButtonItem;
-(id)_sortedUserGeneratedVibrationIdentifiers;
-(bool)showsEditButtonAtRightSideOfCurrentNavigationController;
-(id)_identifierOfVibrationAtIndexPath:(id)arg1 ;
-(void)_setSelectedVibrationIdentifier:(id)arg1 processSelectionOfVibrationIdentifier:(bool)arg2 ;
-(id)_indexPathForVibrationWithIdentifier:(id)arg1 ;
-(void)_setSelectedVibrationIndexPath:(id)arg1 ;
-(void)_processSelectionOfVibrationWithIdentifier:(id)arg1 ;
-(bool)_showsOnlyEditableSections;
-(long long)_sectionForUserGeneratedGroup;
-(id)_actualIndexPathFromNonEditingIndexPath:(id)arg1 ;
-(id)_nonEditingIndexPathFromActualIndexPath:(id)arg1 ;
-(void)_updateEditButtonItemWithAnimation:(bool)arg1 ;
-(bool)canEnterEditingMode;
-(id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(bool)arg2 ;
-(void)setCanEnterEditingMode:(bool)arg1 ;
-(long long)_sectionForDefaultGroup;
-(long long)_sectionForSystemGroup;
-(id)_sortedVibrationIdentifiers;
-(id)noneString;
-(void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2 ;
-(id)_systemSectionHeaderView;
-(id)_userGeneratedSectionHeaderView;
-(void)stopVibrating;
-(void)_startVibratingWithVibrationIdentifier:(id)arg1 ;
-(id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2 ;
-(void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2 ;
-(void)_presentVibrationRecorderViewController;
-(bool)showsNothingSelected;
-(double)contentHeight;
@end

