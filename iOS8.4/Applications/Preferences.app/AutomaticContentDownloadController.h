/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSMutableArray, NSMutableDictionary;

@interface AutomaticContentDownloadController : PSListController {

	id _settingsChangedObserver;
	NSMutableArray* _applications;
	NSMutableDictionary* _applicationStates;

}

@property (nonatomic,retain) NSMutableArray * applications;                        //@synthesize applications=_applications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applicationStates;              //@synthesize applicationStates=_applicationStates - In the implementation block
-(void)setApplicationEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)applicationEnabled:(id)arg1 ;
-(void)setBackgroundRefreshState:(id)arg1 withSpecifier:(id)arg2 ;
-(id)backgroundRefreshState:(id)arg1 ;
-(id)whitelist;
-(void)dealloc;
-(id)init;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)specifiers;
-(NSMutableDictionary *)applicationStates;
-(void)setApplicationStates:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)applications;
-(void)setApplications:(NSMutableArray *)arg1 ;
@end

