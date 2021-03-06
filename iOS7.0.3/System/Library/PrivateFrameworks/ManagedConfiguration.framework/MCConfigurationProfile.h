/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCProfile.h>

@class NSArray, MCProfileServiceProfile;

@interface MCConfigurationProfile : MCProfile {

	NSArray* _payloads;
	BOOL _isCloudProfile;
	BOOL _isCloudLocked;
	MCProfileServiceProfile* _OTAProfile;

}

@property (nonatomic,retain) MCProfileServiceProfile * OTAProfile;              //@synthesize OTAProfile=_OTAProfile - In the implementation block
@property (assign,nonatomic) BOOL isCloudProfile;                               //@synthesize isCloudProfile=_isCloudProfile - In the implementation block
@property (assign,nonatomic) BOOL isCloudLocked;                                //@synthesize isCloudLocked=_isCloudLocked - In the implementation block
-(id)description;
-(id)stubDictionary;
-(void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3 ;
-(id)initWithDictionary:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(id*)arg3 ;
-(void)_sortPayloads;
-(id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg1 ;
-(id)payloads;
-(id)payloadWithUUID:(id)arg1 ;
-(BOOL)isManagedByProfileService;
-(id)localizedPayloadSummaryByType;
-(id)earliestCertificateExpiryDate;
-(id)OTAProfile;
-(void)setOTAProfile:(id)arg1 ;
-(BOOL)isCloudProfile;
-(void)setIsCloudProfile:(BOOL)arg1 ;
-(BOOL)isCloudLocked;
-(void)setIsCloudLocked:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

