/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class AXIPCServer;

@interface VOTSystemServerInstance : NSObject {

	AXIPCServer* _server;

}
+(id)serverInstance;
-(id)voiceOverCommandTriggered:(id)arg1 ;
-(id)voiceOverCurrentFocusedElement:(id)arg1 ;
-(id)lastSpokenPhrases:(id)arg1 ;
-(id)lastSoundsPlayed:(id)arg1 ;
-(id)currentRotorName:(id)arg1 ;
-(id)lastScreenChange:(id)arg1 ;
-(void)dealloc;
-(id)_initServer;
@end

