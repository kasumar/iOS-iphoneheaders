/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:08:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAVCore/IMAVCore-Structs.h>
#import <IMAVCore/IMSystemMonitorListener.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, IMHandle, IMAVChatParticipant, NSMutableDictionary, NSNumber, NSDate, NSDictionary, IMTimingCollection, NSObject, NSTimer, NSData, NSError, IMPair, IMAccount, NSArray;

@interface IMAVChat : NSObject <IMSystemMonitorListener> {

	NSString* _GUID;
	NSString* _conferenceID;
	NSMutableArray* _participants;
	IMHandle* _initiator;
	IMAVChatParticipant* _localParticipant;
	NSMutableDictionary* _conferenceStateCache;
	NSNumber* _natType;
	NSMutableDictionary* _extraServerContext;
	NSDate* _dateCreated;
	NSDate* _dateStartedConnecting;
	NSDate* _dateConnected;
	NSDate* _dateEnded;
	NSDate* _dateReceivedRelayInitiate;
	NSDate* _dateReceivedRelayUpdate;
	NSDate* _interruptionBegan;
	NSDictionary* _pingTestResults;
	NSNumber* _frontCameraCaptureTime;
	NSNumber* _backCameraCaptureTime;
	NSNumber* _dataRate;
	NSNumber* _dataUploaded;
	NSNumber* _dataDownloaded;
	IMTimingCollection* _timingCollection;
	unsigned _localNetworkConnectionType;
	unsigned _remoteNetworkConnectionType;
	int _pingTestResult;
	int _networkCheckResult;
	NSDictionary* _callerProperties;
	NSObject*<OS_dispatch_queue> _conferenceQueue;
	NSTimer* _inviteTimeoutTimer;
	NSDate* _inviteTimeoutTimerStart;
	NSTimer* _firstFrameTimeoutTimer;
	NSTimer* _connectionTimeoutTimer;
	NSTimer* _breakBeforeMakeTimeoutTimer;
	NSData* _relayRemotePrimaryIdentifier;
	id _conferenceController;
	unsigned _sessionID;
	NSError* _error;
	unsigned _localState;
	unsigned _lastPostedState;
	IMPair* _pendingPreemptiveRelayInitate;
	NSString* _callStatisticsGUID;
	CGSize _portraitAspectRatios;
	CGSize _landscapeAspectRatios;
	double _connectionTimeoutTime;
	double _invitationTimeoutTime;
	char _hasGatheredInfo;
	char _hasReceivedFirstFrame;
	char _hasPendingAccept;
	char _hasPendingInit;
	char _isTerminating;
	char _isCaller;
	char _isVideo;
	char _didRemoteMute;
	char _didRemotePause;
	int _connectionType;
	char _needsVideoRestart;
	char _needsAudioRestart;
	char _airplaneModeEnabled;
	char _isVideoInterrupted;
	char _isAudioInterrupted;
	char _isCallUpgrade;
	char _startedAudioSession;
	char _connectionStarted;
	char _isProxied;
	char _wantsHoldMusic;
	char _hasAudioInterruption;
	char _metadataFinalized;

}

@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) void* localVideoBackLayer; 
@property (assign,nonatomic) unsigned cameraOrientation; 
@property (assign,nonatomic) unsigned cameraType; 
@property (assign,nonatomic) double invitationTimeoutTime; 
@property (assign,nonatomic) double connectionTimeoutTime; 
@property (assign,setter=setMute:,nonatomic) char isMute; 
@property (assign,setter=setRemoteMute:,nonatomic) char isRemoteMute; 
@property (assign,nonatomic) char isSendingAudio; 
@property (nonatomic,readonly) char didRemoteMute; 
@property (assign,setter=setPaused:,nonatomic) char isPaused; 
@property (nonatomic,readonly) char hasReceivedFirstFrame; 
@property (assign,nonatomic) char isSendingVideo; 
@property (nonatomic,readonly) char didRemotePause; 
@property (nonatomic,readonly) char _allParticipantsUsingICE; 
@property (nonatomic,readonly) unsigned sessionID;                                                                         //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * conferenceID;                                                                      //@synthesize conferenceID=_conferenceID - In the implementation block
@property (getter=UID,nonatomic,retain) NSString * GUID;                                                                   //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain,readonly) IMHandle * initiatorIMHandle;                                                        //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,retain,readonly) IMHandle * otherIMHandle; 
@property (nonatomic,retain,readonly) IMAccount * account; 
@property (nonatomic,retain,readonly) IMAVChatParticipant * initiatorParticipant; 
@property (nonatomic,retain,readonly) IMAVChatParticipant * localParticipant;                                              //@synthesize localParticipant=_localParticipant - In the implementation block
@property (nonatomic,retain,readonly) NSArray * participants;                                                              //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain,readonly) NSArray * remoteParticipants; 
@property (nonatomic,readonly) unsigned state;                                                                             //@synthesize localState=_localState - In the implementation block
@property (nonatomic,readonly) char isActive; 
@property (nonatomic,readonly) char isStateFinal; 
@property (nonatomic,readonly) char isProxied;                                                                             //@synthesize isProxied=_isProxied - In the implementation block
@property (nonatomic,readonly) int endedError; 
@property (nonatomic,readonly) unsigned endedReason; 
@property (nonatomic,retain,readonly) NSDate * dateCreated;                                                                //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,retain,readonly) NSDate * dateConnected;                                                              //@synthesize dateConnected=_dateConnected - In the implementation block
@property (nonatomic,retain,readonly) NSDate * dateEnded;                                                                  //@synthesize dateEnded=_dateEnded - In the implementation block
@property (nonatomic,readonly) char isCaller;                                                                              //@synthesize isCaller=_isCaller - In the implementation block
@property (nonatomic,readonly) char isVideo;                                                                               //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,readonly) char isUsingWifi; 
@property (assign,nonatomic) char hasAudioInterruption;                                                                    //@synthesize hasAudioInterruption=_hasAudioInterruption - In the implementation block
@property (retain,readonly) NSDictionary * _extraServerContext;                                                            //@synthesize extraServerContext=_extraServerContext - In the implementation block
@property (setter=_setCallStatisticsGUID:,nonatomic,retain) NSString * _callStatisticsGUID;                                //@synthesize callStatisticsGUID=_callStatisticsGUID - In the implementation block
@property (assign,setter=_setConferenceController:,nonatomic) id _conferenceController;                                    //@synthesize conferenceController=_conferenceController - In the implementation block
@property (setter=_setNatType:,nonatomic,retain) NSNumber * _natType;                                                      //@synthesize natType=_natType - In the implementation block
@property (nonatomic,readonly) NSNumber * _remoteNatType; 
@property (nonatomic,readonly) NSNumber * _currentNatType; 
@property (assign,setter=_setConnectionType:,nonatomic) int _connectionType;                                               //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) int _bustedCallID; 
@property (nonatomic,readonly) NSNumber * _connectDuration; 
@property (nonatomic,readonly) NSNumber * _callDuration; 
@property (nonatomic,readonly) NSNumber * _relayConnectDuration; 
@property (nonatomic,readonly) char _usesRelay; 
@property (nonatomic,readonly) char _isProxy; 
@property (setter=_setRelayRemotePrimaryIdentifier:,nonatomic,retain) NSData * _relayRemotePrimaryIdentifier;              //@synthesize relayRemotePrimaryIdentifier=_relayRemotePrimaryIdentifier - In the implementation block
@property (setter=_setInterruptionBegan:,nonatomic,retain) NSDate * _interruptionBegan;                                    //@synthesize interruptionBegan=_interruptionBegan - In the implementation block
@property (setter=_setFrontCameraCaptureTime:,nonatomic,retain) NSNumber * _frontCameraCaptureTime;                        //@synthesize frontCameraCaptureTime=_frontCameraCaptureTime - In the implementation block
@property (setter=_setBackCameraCaptureTime:,nonatomic,retain) NSNumber * _backCameraCaptureTime;                          //@synthesize backCameraCaptureTime=_backCameraCaptureTime - In the implementation block
@property (setter=setDataRate:,nonatomic,retain) NSNumber * dataRate;                                                      //@synthesize dataRate=_dataRate - In the implementation block
@property (setter=setDataUploaded:,nonatomic,retain) NSNumber * dataUploaded;                                              //@synthesize dataUploaded=_dataUploaded - In the implementation block
@property (setter=setDataDownloaded:,nonatomic,retain) NSNumber * dataDownloaded;                                          //@synthesize dataDownloaded=_dataDownloaded - In the implementation block
@property (assign,setter=_setIsVideoInterrupted:,nonatomic) char _isVideoInterrupted;                                      //@synthesize isVideoInterrupted=_isVideoInterrupted - In the implementation block
@property (assign,setter=_setIsAudioInterrupted:,nonatomic) char _isAudioInterrupted;                                      //@synthesize isAudioInterrupted=_isAudioInterrupted - In the implementation block
@property (assign,setter=_setIsCallUpgrade:,nonatomic) char _isCallUpgrade;                                                //@synthesize isCallUpgrade=_isCallUpgrade - In the implementation block
@property (assign,setter=_setStartedAudioSession:,nonatomic) char _startedAudioSession;                                    //@synthesize startedAudioSession=_startedAudioSession - In the implementation block
@property (assign,setter=_setLocalNetworkConnectionType:,nonatomic) unsigned _localNetworkConnectionType;                  //@synthesize localNetworkConnectionType=_localNetworkConnectionType - In the implementation block
@property (assign,setter=_setRemoteNetworkConnectionType:,nonatomic) unsigned _remoteNetworkConnectionType;                //@synthesize remoteNetworkConnectionType=_remoteNetworkConnectionType - In the implementation block
@property (assign,setter=_setNeedsAudioRestart:,nonatomic) char _needsAudioRestart;                                        //@synthesize needsAudioRestart=_needsAudioRestart - In the implementation block
@property (assign,setter=_setNeedsVideoRestart:,nonatomic) char _needsVideoRestart;                                        //@synthesize needsVideoRestart=_needsVideoRestart - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _conferenceQueue;                                              //@synthesize conferenceQueue=_conferenceQueue - In the implementation block
@property (setter=_setPingTestResults:,nonatomic,retain) NSDictionary * _pingTestResults;                                  //@synthesize pingTestResults=_pingTestResults - In the implementation block
@property (assign,setter=_setPingTestResult:,nonatomic) int _pingTestResult;                                               //@synthesize pingTestResult=_pingTestResult - In the implementation block
@property (assign,setter=_setNetworkCheckResult:,nonatomic) int _networkCheckResult;                                       //@synthesize networkCheckResult=_networkCheckResult - In the implementation block
@property (setter=_setCallerProperties:,nonatomic,retain) NSDictionary * callerProperties;                                 //@synthesize callerProperties=_callerProperties - In the implementation block
@property (assign,setter=_setConnectionStarted:,nonatomic) char _connectionStarted;                                        //@synthesize connectionStarted=_connectionStarted - In the implementation block
@property (nonatomic,retain,readonly) NSArray * _imHandles; 
@property (assign,setter=_setWantsHoldMusic:,nonatomic) char wantsHoldMusic;                                               //@synthesize wantsHoldMusic=_wantsHoldMusic - In the implementation block
+(id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2 ;
+(id)_avChatWithConferenceID:(id)arg1 ;
+(id)_avChatConnectingFromIMHandle:(id)arg1 ;
+(id)_activeChat;
+(id)_nonFinalChat;
+(id)_connectedChat;
+(id)_avChatArray;
+(id)_incomingInvitations;
+(id)_outgoingInvitations;
+(id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned)arg3 properties:(id)arg4 ;
+(id)_imHandleFromProxyRepresentation:(id)arg1 ;
+(id)_avChatWithGUID:(id)arg1 ;
+(double)defaultConnectionTimeoutTime;
+(double)defaultInvitationTimeoutTime;
+(int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(char)arg2 ;
+(id)_avChatWithMatchingIMHandles:(id)arg1 video:(char)arg2 ;
+(id)_proxyRepresentationForIMHandle:(id)arg1 ;
+(id)_connectingChats;
+(id)_connectedChats;
+(id)_chatListLock;
+(id)_chatList;
+(void)setDefaultInvitationTimeoutTime:(double)arg1 ;
+(void)setDefaultConnectionTimeoutTime:(double)arg1 ;
+(id)activeChat;
+(id)chatList;
+(id)chatsWithIMAVChatState:(unsigned)arg1 ;
+(id)connectingChats;
+(id)connectedChats;
+(id)_chatsWithIMAVChatState:(unsigned)arg1 ;
+(id)_chatWithSessionID:(unsigned)arg1 ;
+(id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2 ;
+(id)connectedChat;
+(id)nonFinalChat;
+(id)incomingInvitations;
+(id)outgoingInvitations;
+(id)acceptedChats;
+(id)avChatWithGUID:(id)arg1 ;
+(id)_acceptedChats;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_clearCache;
-(void)dealloc;
-(id)description;
-(unsigned)state;
-(char)isActive;
-(void)setPaused:(char)arg1 ;
-(char)isVideo;
-(void)setCameraOrientation:(unsigned)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(unsigned)cameraOrientation;
-(void)systemWillShutdown;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)notificationCenterWillAppear;
-(void)notificationCenterDidDisappear;
-(void)systemDidFastUserSwitchOut;
-(IMAccount *)account;
-(NSArray *)participants;
-(char)isCaller;
-(unsigned)sessionID;
-(void)setCameraType:(unsigned)arg1 ;
-(char)stopPreview;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(NSString *)conferenceID;
-(id)participantMatchingIMHandle:(id)arg1 ;
-(IMAVChatParticipant *)localParticipant;
-(IMHandle *)otherIMHandle;
-(NSArray *)remoteParticipants;
-(id)initIncomingFrom:(id)arg1 isVideo:(char)arg2 callerProperties:(id)arg3 ;
-(void)_setConferenceID:(id)arg1 ;
-(char)_isVideoUpgradeTo:(id)arg1 ;
-(void)_setIsCallUpgrade:(char)arg1 ;
-(void)beginChat;
-(void)cancelInvitation;
-(void)endChat;
-(void)declineInvitationWithResponse:(unsigned)arg1 ;
-(void)_responseToVCInvite:(id)arg1 ;
-(void)_cancelInvitationWithReason:(unsigned)arg1 error:(int)arg2 ;
-(void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned)arg2 userInfo:(id)arg3 ;
-(void)_peerID:(id)arg1 changedTo:(id)arg2 ;
-(IMHandle *)initiatorIMHandle;
-(void)_submitCallStartedLoggingWithRecipientID:(id)arg1 isCaller:(char)arg2 isVideo:(char)arg3 ;
-(id)_timings;
-(id)_initOutgoingTo:(id)arg1 isVideo:(char)arg2 GUID:(id)arg3 ;
-(void)acceptInvitationWithHoldMusic;
-(void)inviteAll;
-(void)invite:(id)arg1 additionalPeers:(id)arg2 ;
-(void)setInvitationTimeoutTime:(double)arg1 ;
-(void)setConnectionTimeoutTime:(double)arg1 ;
-(void)setMute:(char)arg1 ;
-(void)setIsSendingAudio:(char)arg1 ;
-(void)_handleAVError:(id)arg1 ;
-(void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 ;
-(void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 ;
-(void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 ;
-(void)setLocalAspectRatio:(CGSize)arg1 cameraOrientation:(unsigned)arg2 cameraType:(unsigned)arg3 ;
-(char)_isCallUpgrade;
-(void)_setCreationDate;
-(void)_initParticipantsWithIMHandles:(id)arg1 ;
-(char)_participantsCheckOut;
-(IMAVChatParticipant *)initiatorParticipant;
-(void)_airplaneModeChanged:(id)arg1 ;
-(void)_entitlementsChanged:(id)arg1 ;
-(id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned)arg3 GUID:(id)arg4 video:(char)arg5 extraProperties:(id)arg6 ;
-(void)_setCallerProperties:(id)arg1 ;
-(void)_clearConnectionTimeoutTimer;
-(void)_clearFirstFrameTimeoutTimer;
-(void)_clearInvitationTimeoutTimer;
-(void)_clearBreakBeforeMakeTimer;
-(void)_endChatWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(void)_submitCallEndedLoggingWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(void)_postStateToDelegateIfNecessary;
-(char)_isCallUpgradeTo:(id)arg1 ;
-(void)endChatWithReason:(unsigned)arg1 ;
-(void)_setActiveConference;
-(void)_breakCallsIfNecessary:(char)arg1 ;
-(void)_vccInitDidFinish:(id)arg1 ;
-(void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_setWantsHoldMusic:(char)arg1 ;
-(void)endChatWithReason:(unsigned)arg1 error:(int)arg2 ;
-(int)endedError;
-(char)_processVCResponseDict:(id)arg1 ;
-(void)__responseToVCInvite:(id)arg1 ;
-(void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned)arg2 userInfo:(id)arg3 handled:(char)arg4 ;
-(id)_participantMatchingVCPartyID:(id)arg1 ;
-(NSNumber *)_natType;
-(NSDate *)dateConnected;
-(NSDate *)dateEnded;
-(int)_connectionType;
-(unsigned)_localNetworkConnectionType;
-(id)initOutgoingTo:(id)arg1 isVideo:(char)arg2 ;
-(void)endChatWithError:(int)arg1 ;
-(id)inviteesInfo;
-(void)invite:(id)arg1 ;
-(void)_setStateDisconnected;
-(id)participantWithAVConferenceCallID:(int)arg1 ;
-(id)participantWithID:(id)arg1 ;
-(id)vcPartyIDForIMHandle:(id)arg1 ;
-(void)_setHasAudioInterruption:(char)arg1 ;
-(void)resetWantsHoldMusic;
-(char)_isProxy;
-(void)_setDateConnected;
-(int)_bustedCallID;
-(char)isConferenceSilent;
-(NSNumber *)_remoteNatType;
-(NSNumber *)_currentNatType;
-(NSNumber *)_connectDuration;
-(NSNumber *)_callDuration;
-(NSNumber *)_relayConnectDuration;
-(char)_usesRelay;
-(char)isUsingWifi;
-(NSArray *)_imHandles;
-(void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3 ;
-(void)_noteFirstFrame;
-(void)_cacheBool:(char)arg1 forKey:(id)arg2 ;
-(char)_hasCachedBoolForKey:(id)arg1 ;
-(char)_cachedBoolForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_conferenceQueue;
-(void)_setConnectionType:(int)arg1 ;
-(NSString *)_callStatisticsGUID;
-(void)_setCallStatisticsGUID:(id)arg1 ;
-(char)_startedAudioSession;
-(void)_setStartedAudioSession:(char)arg1 ;
-(NSDictionary *)callerProperties;
-(void)_setNatType:(id)arg1 ;
-(void)_setLocalNetworkConnectionType:(unsigned)arg1 ;
-(unsigned)_remoteNetworkConnectionType;
-(void)_setRemoteNetworkConnectionType:(unsigned)arg1 ;
-(char)_needsAudioRestart;
-(void)_setNeedsAudioRestart:(char)arg1 ;
-(char)_needsVideoRestart;
-(void)_setNeedsVideoRestart:(char)arg1 ;
-(NSDate *)_interruptionBegan;
-(void)_setInterruptionBegan:(id)arg1 ;
-(NSNumber *)_frontCameraCaptureTime;
-(void)_setFrontCameraCaptureTime:(id)arg1 ;
-(NSNumber *)_backCameraCaptureTime;
-(void)_setBackCameraCaptureTime:(id)arg1 ;
-(NSNumber *)dataUploaded;
-(void)setDataUploaded:(NSNumber *)arg1 ;
-(NSNumber *)dataDownloaded;
-(void)setDataDownloaded:(NSNumber *)arg1 ;
-(char)_isVideoInterrupted;
-(void)_setIsVideoInterrupted:(char)arg1 ;
-(char)_isAudioInterrupted;
-(void)_setIsAudioInterrupted:(char)arg1 ;
-(char)_connectionStarted;
-(void)_setConnectionStarted:(char)arg1 ;
-(NSData *)_relayRemotePrimaryIdentifier;
-(void)_setRelayRemotePrimaryIdentifier:(id)arg1 ;
-(char)isProxied;
-(char)wantsHoldMusic;
-(char)hasAudioInterruption;
-(id)_conferenceController;
-(void)_setConferenceController:(id)arg1 ;
-(NSDictionary *)_extraServerContext;
-(NSDictionary *)_pingTestResults;
-(void)_setPingTestResults:(id)arg1 ;
-(int)_pingTestResult;
-(void)_setPingTestResult:(int)arg1 ;
-(int)_networkCheckResult;
-(void)_setNetworkCheckResult:(int)arg1 ;
-(void)conferencePersonWithID:(id)arg1 mediaDidStall:(char)arg2 ;
-(void)_reduceInvitationTimeoutTime;
-(void)participant:(id)arg1 changedFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)_setBreakBeforeMakeTimer;
-(CGSize)localAspectRatioForCameraOrientation:(unsigned)arg1 cameraType:(unsigned)arg2 ;
-(char)isSendingAudio;
-(char)isSendingVideo;
-(char)startPreviewWithError:(id*)arg1 ;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(char)isStateFinal;
-(char)hasReceivedFirstFrame;
-(char)isMute;
-(double)invitationTimeoutTime;
-(double)connectionTimeoutTime;
-(void)setIsSendingVideo:(char)arg1 ;
-(id)_proxyRepresentation;
-(void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(char)arg2 orientationChanged:(char)arg3 aspectChanged:(char)arg4 cameraWillSwitch:(char)arg5 camera:(unsigned)arg6 orientation:(unsigned)arg7 aspect:(CGSize)arg8 ;
-(void)_setInvitationTimeoutTimer;
-(void)_setConnectionTimeoutTimer;
-(void)_connectionTimeout:(id)arg1 ;
-(void)_invitationTimeout:(id)arg1 ;
-(void)_firstFrameTimeout:(id)arg1 ;
-(void)_submitCallConnectedLogging;
-(void)_breakBeforeMakeTimer:(id)arg1 ;
-(void)_setFirstFrameTimeoutTimer;
-(void)_conferenceOtherParticipant:(id)arg1 didConnect:(char)arg2 ;
-(void)conferenceDidStopWithCallID:(int)arg1 error:(id)arg2 ;
-(void)conferenceAVConferenceCallID:(int)arg1 didConnect:(char)arg2 ;
-(void)conferencePersonWithID:(id)arg1 didMute:(char)arg2 ;
-(void)conferencePersonWithID:(id)arg1 didPause:(char)arg2 ;
-(void)conferencePersonWithID:(id)arg1 didDegrade:(char)arg2 ;
-(void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2 ;
-(void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2 ;
-(void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2 ;
-(void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2 ;
-(void)toggleMute;
-(void)setRemoteMute:(char)arg1 ;
-(char)isRemoteMute;
-(char)didRemoteMute;
-(void)togglePaused;
-(char)didRemotePause;
-(void)_resumeAudioState;
-(void)_resumeVideoState;
-(void)_saveVideoRestartState;
-(void)_saveAudioRestartState;
-(void)_updateIMHandleInBuddyList:(id)arg1 ;
-(char)_moveVCPartyID:(id)arg1 toIndex:(unsigned)arg2 inCount:(unsigned)arg3 ;
-(char)_allParticipantsUsingICE;
-(void)_submitCallInterruptionBeganLogging;
-(void)_submitCallInterruptionEndedLogging;
-(void)setMetadataFinalized;
-(id)_proxyRepresentationForIMAVChatParticipant:(id)arg1 ;
-(void)__sendEndCallMetricToAWDWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(void)__sendEndCallMetricToViceroyWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(void)_setGUID:(id)arg1 ;
-(void)acceptInvitation;
-(void)declineInvitation;
-(unsigned)cameraType;
-(NSDate *)dateCreated;
-(NSString *)GUID;
-(char)isPaused;
-(void)_applicationWillTerminate:(id)arg1 ;
-(void)setDataRate:(NSNumber *)arg1 ;
-(unsigned)endedReason;
-(NSNumber *)dataRate;
@end
