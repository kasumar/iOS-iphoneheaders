/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:22:02 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <vot/VOTElementManagementProtocol.h>

@protocol VOTElementUpdateProtocol;
@class VOTElement, NSString;

@interface VOTElementManagerTV : NSObject <VOTElementManagementProtocol> {

	VOTElement* _firstResponder;
	VOTElement* _currentElement;
	VOTElement* _currentApplication;
	NSString* _lastHeaderText;
	id<VOTElementUpdateProtocol> updateDelegate;
	double _lastScreenChangeNotificationTime;

}

@property (assign,nonatomic) double lastScreenChangeNotificationTime;                  //@synthesize lastScreenChangeNotificationTime=_lastScreenChangeNotificationTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<VOTElementUpdateProtocol> updateDelegate; 
-(void)systemServerDied;
-(id)currentElement;
-(void)_handleFirstResponderChangedNotification:(id)arg1 ;
-(void)_handleAnnouncementNotification:(id)arg1 ;
-(void)_handleScreenChangedNotification:(id)arg1 ;
-(void)_handleKeyboardKeySelectedNotification:(id)arg1 ;
-(void)_handleActiveControlUpdated:(id)arg1 ;
-(id)_headerTextForElement:(id)arg1 ;
-(void)handleNotification:(int)arg1 withData:(id)arg2 ;
-(void)handleHomeButtonPress;
-(void)handleStateReset;
-(void)handlePlayPauseButtonPress;
-(char)allowsSystemControlEvent;
-(void)updateCurrentElementFrame;
-(CGRect)currentLineFrame;
-(void)updateApplication;
-(void)updateApplicationAndSpeak:(id)arg1 ;
-(char)shouldAllowSpeaking;
-(char)isReadingAll;
-(void)moveToElementMatchingRotorType:(int)arg1 inDirection:(int)arg2 ;
-(id)elementRotor;
-(double)lastScreenChangeNotificationTime;
-(void)setLastScreenChangeNotificationTime:(double)arg1 ;
-(id<VOTElementUpdateProtocol>)updateDelegate;
-(void)setUpdateDelegate:(id<VOTElementUpdateProtocol>)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(void)dealloc;
-(void)handleEvent:(id)arg1 ;
-(id)currentApplication;
@end
