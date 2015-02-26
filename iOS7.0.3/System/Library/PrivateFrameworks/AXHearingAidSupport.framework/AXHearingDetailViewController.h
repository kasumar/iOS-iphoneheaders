/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingAidSupport/AXHearingAidSupport-Structs.h>
#import <Preferences/PSListController.h>

@class NSString, AXRemoteHearingAidDevice;

@interface AXHearingDetailViewController : PSListController {

	NSString* _liveListenerUUID;
	AXRemoteHearingAidDevice* _device;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
-(void)setDevice:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateView;
-(id)device;
-(id)deviceSpecifiers;
-(id)_volumeSpecifiers;
-(id)_modeSpecifiers;
-(void)liveListenToggle:(id)arg1 ;
-(id)disconnectedSpecifiers;
-(NSRange)programsRange;
-(void)addVolumesForStream:(id)arg1 ;
-(void)updateLiveListenCell:(id)arg1 ;
-(id)specifierForKey:(id)arg1 ;
-(id)specifiers;
@end
