/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutineSettings/RTMapAndTableViewController.h>

@class RTPrivacyCluster, RTPrivacyLOIViewController;

@interface RTPrivacyClusterViewController : RTMapAndTableViewController {

	RTPrivacyCluster* _privacyCluster;
	RTPrivacyLOIViewController* _privacyLOIViewController;

}

@property (nonatomic,retain) RTPrivacyCluster * privacyCluster;                                  //@synthesize privacyCluster=_privacyCluster - In the implementation block
@property (nonatomic,retain) RTPrivacyLOIViewController * privacyLOIViewController;              //@synthesize privacyLOIViewController=_privacyLOIViewController - In the implementation block
-(id)privacyCluster;
-(void)selectRowItem:(id)arg1 ;
-(id)initWithPrivacyCluster:(id)arg1 ;
-(void)setPrivacyCluster:(id)arg1 ;
-(id)privacyLOIViewController;
-(void)setPrivacyLOIViewController:(id)arg1 ;
-(void)_removeCluster:(id)arg1 mapView:(id)arg2 ;
-(void)_displayCluster:(id)arg1 mapView:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void).cxx_destruct;
@end

