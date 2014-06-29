/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SetupAssistantBundles/GameCenterSetupAssistant.bundle/GameCenterSetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/AASetupAssistantDelegateService.h>

@interface GKSetupAssistant : NSObject <AASetupAssistantDelegateService> {

	bool _cancelled;

}

@property (assign) bool cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(bool)cancelled;
-(void)setCancelled:(bool)arg1 ;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)setupOperationFailed;
@end
