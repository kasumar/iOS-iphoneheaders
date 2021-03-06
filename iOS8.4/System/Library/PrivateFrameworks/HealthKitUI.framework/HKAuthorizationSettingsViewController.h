/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <HealthKitUI/HKSwitchTableViewCellDelegate.h>

@protocol HKAuthorizationSettingsViewControllerDelegate;
@class HKHealthStore, NSString, HKSource, HKDataCategoryController, HKSourceAuthorizationController, UIBarButtonItem;

@interface HKAuthorizationSettingsViewController : UITableViewController <HKSwitchTableViewCellDelegate> {

	id<HKAuthorizationSettingsViewControllerDelegate> _delegate;
	HKHealthStore* _healthStore;
	long long _style;
	NSString* _updateDescription;
	NSString* _shareDescription;
	HKSource* _source;
	HKDataCategoryController* _dataCategoryController;
	HKSourceAuthorizationController* _sourceAuthorizationController;
	UIBarButtonItem* _cancelButtonItem;
	UIBarButtonItem* _doneButtonItem;

}

@property (assign,nonatomic,__weak) id<HKAuthorizationSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) long long style;                                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * updateDescription;                                                     //@synthesize updateDescription=_updateDescription - In the implementation block
@property (nonatomic,copy) NSString * shareDescription;                                                      //@synthesize shareDescription=_shareDescription - In the implementation block
@property (nonatomic,retain) HKSource * source;                                                              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) HKDataCategoryController * dataCategoryController;                              //@synthesize dataCategoryController=_dataCategoryController - In the implementation block
@property (nonatomic,retain) HKSourceAuthorizationController * sourceAuthorizationController;                //@synthesize sourceAuthorizationController=_sourceAuthorizationController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                                             //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                                               //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
-(HKHealthStore *)healthStore;
-(void)_finishWithError:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)setDelegate:(id<HKAuthorizationSettingsViewControllerDelegate>)arg1 ;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<HKAuthorizationSettingsViewControllerDelegate>)delegate;
-(long long)style;
-(void)viewDidLoad;
-(HKSource *)source;
-(void)setSource:(HKSource *)arg1 ;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(id)initWithHealthStore:(id)arg1 style:(long long)arg2 ;
-(BOOL)_isPrompting;
-(void)_addCancelAndDoneButtons;
-(void)_addMessageLabelWithMessage:(id)arg1 size:(double)arg2 ;
-(BOOL)_shouldDisplaySharingSection;
-(BOOL)_shouldDisplayReadingSection;
-(long long)_authorizationSectionForSection:(long long)arg1 ;
-(id)_authorizationSettingCellForRowAtIndexPath:(id)arg1 ;
-(id)_typeForIndexPath:(id)arg1 section:(long long*)arg2 ;
-(BOOL)_isTypeEnabledAtIndexPath:(id)arg1 ;
-(void)reloadAuthorizationSettings;
-(void)_configurationFailedWithError:(id)arg1 ;
-(void)setUpdateDescription:(NSString *)arg1 ;
-(NSString *)shareDescription;
-(void)setShareDescription:(NSString *)arg1 ;
-(HKDataCategoryController *)dataCategoryController;
-(void)setDataCategoryController:(HKDataCategoryController *)arg1 ;
-(HKSourceAuthorizationController *)sourceAuthorizationController;
-(void)setSourceAuthorizationController:(HKSourceAuthorizationController *)arg1 ;
-(UIBarButtonItem *)cancelButtonItem;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButtonItem;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_addHeaderView;
-(NSString *)updateDescription;
@end

