/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCSSavedRecordingServiceClientProtocol.h>
#import <VoiceMemos/RCSSavedRecordingServiceProtocol.h>

@protocol OS_dispatch_queue, RCSSavedRecordingServiceProtocol;
@class NSObject, NSXPCConnection, NSMutableDictionary, NSSet, NSString;

@interface RCSSavedRecordingService : NSObject <RCSSavedRecordingServiceClientProtocol, RCSSavedRecordingServiceProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	int _exportingCompositionAVURLsDistributedNotificationToken;
	NSXPCConnection* _xpcConnection;
	id<RCSSavedRecordingServiceProtocol> _serviceProxy;
	NSMutableDictionary* _pendingServiceCompletionHandlers;
	NSSet* _exportingCompositionAVURLs;

}

@property (nonatomic,retain) NSSet * exportingCompositionAVURLs;              //@synthesize exportingCompositionAVURLs=_exportingCompositionAVURLs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
-(void)dealloc;
-(id)init;
-(oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 ;
-(oneway void)endAccessSessionWithToken:(id)arg1 ;
-(oneway void)prepareToCaptureToCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2 ;
-(oneway void)prepareToPreviewCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2 ;
-(oneway void)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(BOOL)arg2 accessRequestHandler:(/*^block*/id)arg3 ;
-(oneway void)prepareToTrimCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2 ;
-(oneway void)disableOrphanHandlingWithCompletionBlock:(/*^block*/id)arg1 ;
-(oneway void)enableOrphanHandlingWithCompletionBlock:(/*^block*/id)arg1 ;
-(oneway void)fetchExportingCompositionAVURLs:(/*^block*/id)arg1 ;
-(void)openServiceConnection;
-(void)closeServiceConnection;
-(void)_handleExportingCompositionAVURLsDidChange;
-(void)_onQueueCloseServiceConnection;
-(void)_sendServiceMessage:(SEL)arg1 accessRequestReplyBlock:(/*^block*/id)arg2 messagingBlock:(/*^block*/id)arg3 ;
-(void)_sendServiceMessage:(SEL)arg1 withBasicReplyBlock:(/*^block*/id)arg2 messagingBlock:(/*^block*/id)arg3 ;
-(void)setExportingCompositionAVURLs:(NSSet *)arg1 ;
-(void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)arg1 ;
-(id)serviceProxy;
-(NSNumber*)_onQueueAddPendingServiceMessageReplyBlockInvalidationHandler:(/*^block*/id)arg1 ;
-(void)_onQueueRemovePendingServiceMessageReplyBlockInvalidationHandlerForToken:(NSNumber*)arg1 ;
-(void)_onQueueInvalidatePendingCompletionHandlerWithToken:(id)arg1 withError:(id)arg2 ;
-(NSSet *)exportingCompositionAVURLs;
@end

