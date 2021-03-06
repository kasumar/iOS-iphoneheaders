/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MessagesNotificationViewService.app/MessagesNotificationViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessagesNotificationViewService/MessagesNotificationViewService-Structs.h>
#import <NotificationsUI/NCInteractiveNotificationViewController.h>
#import <MessagesNotificationViewService/CKBalloonViewDelegate.h>
#import <MessagesNotificationViewService/CKInlineReplyRaiseControllerDelegate.h>
#import <MessagesNotificationViewService/CKMessageEntryViewDelegate.h>
#import <MessagesNotificationViewService/CKAudioControllerDelegate.h>

@class CKMessageEntryView, CKScheduledUpdater, CKAudioController, UIView, CKAudioBalloonView, CKAudioMediaObject, CKInlineReplyRaiseController, NSString;

@interface CKInlineReplyViewController : NCInteractiveNotificationViewController <CKBalloonViewDelegate, CKInlineReplyRaiseControllerDelegate, CKMessageEntryViewDelegate, CKAudioControllerDelegate> {

	char _isAudioMessage;
	char _isAudioPlaybackOnly;
	char _isRaise;
	char _didSendMessage;
	char _shouldShowKeyboard;
	CKMessageEntryView* _entryView;
	CKScheduledUpdater* _typingUpdater;
	CKAudioController* _audioController;
	UIView* _audioMessageView;
	CKAudioBalloonView* _balloonView;
	CKAudioMediaObject* _audioMediaObject;
	CKInlineReplyRaiseController* _raiseController;

}

@property (nonatomic,retain) CKMessageEntryView * entryView;                              //@synthesize entryView=_entryView - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * typingUpdater;                          //@synthesize typingUpdater=_typingUpdater - In the implementation block
@property (nonatomic,retain) CKAudioController * audioController;                         //@synthesize audioController=_audioController - In the implementation block
@property (assign,nonatomic) char isAudioMessage;                                         //@synthesize isAudioMessage=_isAudioMessage - In the implementation block
@property (nonatomic,retain) UIView * audioMessageView;                                   //@synthesize audioMessageView=_audioMessageView - In the implementation block
@property (nonatomic,retain) CKAudioBalloonView * balloonView;                            //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) CKAudioMediaObject * audioMediaObject;                       //@synthesize audioMediaObject=_audioMediaObject - In the implementation block
@property (assign,nonatomic) char isAudioPlaybackOnly;                                    //@synthesize isAudioPlaybackOnly=_isAudioPlaybackOnly - In the implementation block
@property (assign,nonatomic) char isRaise;                                                //@synthesize isRaise=_isRaise - In the implementation block
@property (nonatomic,retain) CKInlineReplyRaiseController * raiseController;              //@synthesize raiseController=_raiseController - In the implementation block
@property (assign,nonatomic) char didSendMessage;                                         //@synthesize didSendMessage=_didSendMessage - In the implementation block
@property (assign,nonatomic) char shouldShowKeyboard;                                     //@synthesize shouldShowKeyboard=_shouldShowKeyboard - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isSecureForRemoteViewService;
-(void)raiseControllerDidStopRecording:(id)arg1 ;
-(void)raiseControllerDidStartRecording:(id)arg1 ;
-(void)raiseControllerShouldDismiss:(id)arg1 ;
-(void)setShouldShowKeyboard:(char)arg1 ;
-(char)isAudioPlaybackOnly;
-(UIView *)audioMessageView;
-(float)audioBubbleHeight;
-(char)didSendMessage;
-(CKInlineReplyRaiseController *)raiseController;
-(void)setAudioMessageView:(UIView *)arg1 ;
-(void)updateSendButton;
-(void)setDidSendMessage:(char)arg1 ;
-(char)isRaise;
-(void)playSendSoundForMessage:(id)arg1 ;
-(id)viewForTyping;
-(void)setupConversation;
-(char)shouldShowKeyboard;
-(void)setIsRaise:(char)arg1 ;
-(void)setRaiseController:(CKInlineReplyRaiseController *)arg1 ;
-(void)setIsAudioPlaybackOnly:(char)arg1 ;
-(void)sendMessage;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)setContext:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)textInputContextIdentifier;
-(char)showsKeyboard;
-(void)setAudioMediaObject:(CKAudioMediaObject *)arg1 ;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1 ;
-(void)messageEntryViewDidChange:(id)arg1 ;
-(char)messageEntryViewShouldBeginEditing:(id)arg1 ;
-(void)messageEntryViewDidBeginEditing:(id)arg1 ;
-(void)messageEntryViewDidEndEditing:(id)arg1 ;
-(char)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2 ;
-(void)messageEntryViewRecordingDidChange:(id)arg1 ;
-(void)messageEntryViewSendButtonHit:(id)arg1 ;
-(void)messageEntryViewRaiseGestureAutoSend:(id)arg1 ;
-(char)balloonView:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3 ;
-(void)balloonViewWillResignFirstResponder:(id)arg1 ;
-(void)balloonViewTapped:(id)arg1 ;
-(char)shouldShowMenuForBalloonView:(id)arg1 ;
-(id)menuItemsForBalloonView:(id)arg1 ;
-(CGRect)calloutTargetRectForBalloonView:(id)arg1 ;
-(void)balloonView:(id)arg1 performAction:(SEL)arg2 withSender:(id)arg3 ;
-(void)updateTyping;
-(void)setTypingUpdater:(CKScheduledUpdater *)arg1 ;
-(CKMessageEntryView *)entryView;
-(char)isAudioMessage;
-(CKAudioBalloonView *)balloonView;
-(CKScheduledUpdater *)typingUpdater;
-(void)setEntryView:(CKMessageEntryView *)arg1 ;
-(void)setBalloonView:(CKAudioBalloonView *)arg1 ;
-(void)handleActionAtIndex:(unsigned)arg1 ;
-(CKAudioController *)audioController;
-(void)setAudioController:(CKAudioController *)arg1 ;
-(void)balloonViewDidFinishDataDetectorAction:(id)arg1 ;
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioControllerDidPause:(id)arg1 ;
-(void)audioControllerDidStop:(id)arg1 ;
-(CKAudioMediaObject *)audioMediaObject;
-(void)proximityStateDidChange:(char)arg1 ;
-(void)setIsAudioMessage:(char)arg1 ;
-(float)preferredContentHeight;
-(id)inlayViewService;
-(id)accessoryViewService;
-(void)interactiveNotificationDidAppear;
-(id)actionContext;
-(void)handleActionIdentifier:(id)arg1 ;
-(void)willPresentFromActionIdentifier:(id)arg1 ;
-(void)dismissWithContext:(id)arg1 ;
-(void)setupView;
@end

