/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PrefsUILinkLabel, PSSpecifier;

@interface ProblemReportingController : PSListController {

	PrefsUILinkLabel* _aboutDiagnosticsLinkLabel;
	PSSpecifier* _diagnosticDataGroupSpecifier;

}
+(BOOL)isProblemReportingEnabled;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)specifiers;
-(Class)tableViewClass;
-(void)showAboutDiagnosticsSheet:(id)arg1 ;
-(void)diagnosticsDonePressed:(id)arg1 ;
-(BOOL)shouldEnableProblemReportingForCheckedSpecifier;
-(void)setProblemReportingEnabled:(BOOL)arg1 ;
@end

