/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFProviderServiceDelegate;
@interface ASConnection : NSObject {

	<AFProviderServiceDelegate>* _providerServiceDelegate;

}
-(BOOL)_infoIsValid:(id)arg1 forPreAnchor:(id)arg2 ;
-(int)defaultChunkBatchSize;
-(BOOL)_getChunkInfoWithHandler:(id)arg1 batchSize:(int)arg2 lastAnchor:(id)arg3 updates:(id)arg4 deletes:(id)arg5 post:(id*)arg6 ;
-(BOOL)_sendChunkWithUpdates:(id)arg1 deletes:(id)arg2 pre:(id)arg3 post:(id)arg4 validity:(id)arg5 ;
-(id)initWithProviderServiceDelegate:(id)arg1 ;
-(void)runSyncWithHandler:(id)arg1 anchor:(id)arg2 validity:(id)arg3 count:(int)arg4 key:(id)arg5 ;
-(void).cxx_destruct;
@end

