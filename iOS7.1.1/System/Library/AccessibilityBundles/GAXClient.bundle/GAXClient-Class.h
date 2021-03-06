/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GAXClient.bundle/GAXClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GAXClient/GAXClient-Structs.h>
@class AXIPCClient, AXIPCServer, NSArray;

@interface GAXClient : NSObject {

	bool _enabled;
	bool _allowsMotion;
	int _serverMode;
	AXIPCClient* _backboardClient;
	AXIPCServer* _appServer;
	NSArray* _hiddenWindows;

}

@property (assign,getter=isEnabled,nonatomic) bool enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int serverMode;                                       //@synthesize serverMode=_serverMode - In the implementation block
@property (assign,nonatomic) bool allowsMotion;                                    //@synthesize allowsMotion=_allowsMotion - In the implementation block
@property (getter=isActive,nonatomic,readonly) bool active; 
@property (getter=isInWorkspace,nonatomic,readonly) bool inWorkspace; 
@property (nonatomic,retain) AXIPCClient * backboardClient;                        //@synthesize backboardClient=_backboardClient - In the implementation block
@property (nonatomic,retain) AXIPCServer * appServer;                              //@synthesize appServer=_appServer - In the implementation block
@property (nonatomic,retain) NSArray * hiddenWindows;                              //@synthesize hiddenWindows=_hiddenWindows - In the implementation block
+(id)sharedInstance;
-(bool)allowsMotion;
-(long long)stateForRestrictionWithIdentifier:(id)arg1 ;
-(id)_affectedViewsForPath:(id)arg1 ;
-(id)_messageServiceName;
-(id)_handleGetAffectedViewsForPath:(id)arg1 ;
-(void)setBackboardClient:(id)arg1 ;
-(void)_handlePreferenceDidChange:(id)arg1 ;
-(bool)_viewRequiresPadding:(id)arg1 ;
-(id)_handlePrepareClientAppForTransitionToWorkspace:(id)arg1 ;
-(id)_avPlayer;
-(id)_handleSettingsDidChange:(id)arg1 ;
-(id)_ancestorView:(id)arg1 matchesBlock:(/*^block*/ id)arg2 ;
-(id)_tableViewCellAncestorForView:(id)arg1 ;
-(id)_handleSetApplicationInvisible:(id)arg1 ;
-(id)_handleResumeMedia:(id)arg1 ;
-(id)_handleHideKeyboard:(id)arg1 ;
-(id)_handleIsMediaPlaying:(id)arg1 ;
-(void)_pauseOrResumeMedia:(bool)arg1 ;
-(id)_handlePauseMedia:(id)arg1 ;
-(id)_hashForView:(id)arg1 ;
-(id)_avPlayerForVideosApp;
-(bool)isInWorkspace;
-(void)setServerMode:(int)arg1 ;
-(bool)_isMediaPlaying;
-(id)_allWindowsIncludingStaticChromeForClassicMode:(bool)arg1 includingStatusBarWindow:(bool)arg2 ;
-(void)_sendMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 replyMessage:(id*)arg3 description:(id)arg4 ;
-(bool)_viewShouldBeIgnored:(id)arg1 ;
-(id)hiddenWindows;
-(long long)_stateForRestrictionWithIdentifier:(id)arg1 ;
-(CGRect)_selectionTargetFrameForView:(id)arg1 ;
-(id)_handleRestrictionDidChangeState:(id)arg1 ;
-(id)backboardClient;
-(int)serverMode;
-(id)_handleGetRestrictionIdentifiers:(id)arg1 ;
-(id)appServer;
-(void)_handleAppDidBecomeActive:(id)arg1 ;
-(void)_notifyDidBecomeFrontmostAppIfNeeded;
-(void)setHiddenWindows:(id)arg1 ;
-(void)setAllowsMotion:(bool)arg1 ;
-(id)_controlAncestorForView:(id)arg1 ;
-(id)_guidedAccessRestrictionDelegate;
-(void)setAppServer:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isActive;
-(bool)isEnabled;
-(void)setEnabled:(bool)arg1 ;
-(void)setPasscode:(id)arg1 ;
@end

