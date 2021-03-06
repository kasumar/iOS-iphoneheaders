/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Nike/STCustomSheetControllerDelegate.h>

@class STRunSummaryView, NSDictionary, STCalibrationDistanceController, NSString;

@interface STRunSummaryController : UIViewController <STCustomSheetControllerDelegate> {

	STRunSummaryView* _runSummaryView;
	NSDictionary* _workoutSummary;
	char _didSaveWorkout;
	char _historical;
	STCalibrationDistanceController* _calibrationDistanceController;
	float _minCalibrationDistance;
	float _maxCalibrationDistance;

}

@property (nonatomic,retain) NSDictionary * workoutSummary;                    //@synthesize workoutSummary=_workoutSummary - In the implementation block
@property (assign,getter=isHistorical,nonatomic) char historical;              //@synthesize historical=_historical - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)customValueSelectionDidSave;
-(void)customValueSelectionDidCancel;
-(void)setWorkoutSummary:(NSDictionary *)arg1 ;
-(void)setHistorical:(char)arg1 ;
-(void)_saveWorkout:(char)arg1 ;
-(void)_showCalibration;
-(void)_modifyViewAfterSave;
-(float)_distanceIntervalToUseForCalibration;
-(id)_newCalibrationEligibleLabel;
-(NSDictionary *)workoutSummary;
-(char)isHistorical;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_done;
-(void)_applicationWillTerminate:(id)arg1 ;
@end

