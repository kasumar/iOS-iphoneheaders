/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, CKDPIdentifier;

@interface CKDProtocolTranslator : NSObject {

	NSString* _bundleIdentifier;
	NSString* _containerScopedUserID;
	NSString* _overriddenContainerScopedUserID;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * containerScopedUserID;                        //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (nonatomic,readonly) CKDPIdentifier * pUserID; 
@property (nonatomic,copy) NSString * overriddenContainerScopedUserID;              //@synthesize overriddenContainerScopedUserID=_overriddenContainerScopedUserID - In the implementation block
+(id)translatorIgnoringUserIDs;
-(NSString *)bundleIdentifier;
-(id)recordFromPRecord:(id)arg1 error:(id*)arg2 ;
-(id)pRecordFromRecord:(id)arg1 forCache:(char)arg2 ;
-(NSString *)containerScopedUserID;
-(void)setContainerScopedUserID:(NSString *)arg1 ;
-(id)pQueryFromQuery:(id)arg1 error:(id*)arg2 ;
-(id)initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1 ;
-(id)recordIDFromPRecordIdentifier:(id)arg1 error:(id*)arg2 ;
-(int)fieldValueTypeFromObject:(id)arg1 ;
-(id)fieldValueOfType:(int)arg1 withObject:(id)arg2 ;
-(id)pRecordIdentifierFromRecordID:(id)arg1 ;
-(id)pAssetFromAsset:(id)arg1 ;
-(id)pPackageFromPackage:(id)arg1 ;
-(id)fieldValueFromObject:(id)arg1 ;
-(id)objectRepresentationFromFieldValue:(id)arg1 ;
-(id)assetFromPAsset:(id)arg1 error:(id*)arg2 ;
-(id)packageFromPPackage:(id)arg1 error:(id*)arg2 ;
-(id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)fieldValueListOfType:(int)arg1 withList:(id)arg2 ;
-(id)pFieldWithKey:(id)arg1 value:(id)arg2 ;
-(id)pShareIdentifierFromShareID:(id)arg1 ;
-(id)shareFromPShare:(id)arg1 error:(id*)arg2 ;
-(CKDPIdentifier *)pUserID;
-(id)userPresenceFromPPulseData:(id)arg1 error:(id*)arg2 ;
-(id)pSubscriptionFromSubscription:(id)arg1 error:(id*)arg2 ;
-(id)pShareFromShare:(id)arg1 ;
-(id)pParticipantFromShareParticipant:(id)arg1 ;
-(id)shareInvitationFromPInvitation:(id)arg1 error:(id*)arg2 ;
-(id)subscriptionFromPSubscription:(id)arg1 error:(id*)arg2 ;
-(id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1 ;
-(id)pLikedIdFromSharedItemID:(id)arg1 ;
-(id)pCommentedOnIdFromSharedItemID:(id)arg1 ;
-(id)notificationFromPPushMessage:(id)arg1 ;
-(id)deltaPRecordFromRecord:(id)arg1 withAllFields:(char)arg2 outDeletedMergeFields:(id*)arg3 outKeysToSend:(id*)arg4 ;
-(id)commentFromPComment:(id)arg1 ;
-(id)sharedItemIDFromPCommentedOnId:(id)arg1 error:(id*)arg2 ;
-(id)_initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setOverriddenContainerScopedUserID:(NSString *)arg1 ;
-(NSString *)overriddenContainerScopedUserID;
-(char)_isDefaultUserNameFromServer:(id)arg1 ;
-(char)_isDefaultUserNameFromClient:(id)arg1 ;
-(id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)userNameFromPIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)pIdentifierFromUserRecordName:(id)arg1 ;
-(id)shareIDFromPShareIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)pIdentifierFromUserRecordID:(id)arg1 ;
-(id)_pRecordFromRecordSansValues:(id)arg1 forCache:(char)arg2 ;
-(id)shareParticipantFromPParticipant:(id)arg1 error:(id*)arg2 ;
-(id)sharedItemIDFromPResource:(id)arg1 error:(id*)arg2 ;
-(id)pResourceFromSharedItemID:(id)arg1 ;
-(id)shareParticipantFromPInvitationRecipient:(id)arg1 error:(id*)arg2 ;
-(id)recordIDFromPUserName:(id)arg1 error:(id*)arg2 ;
-(id)sharedItemIDFromPLikedId:(id)arg1 error:(id*)arg2 ;
-(id)pRecordFromRecord:(id)arg1 ;
-(id)recordZoneFromPRecordZone:(id)arg1 withDatabaseScope:(int)arg2 error:(id*)arg3 ;
-(id)pRecordZoneFromRecordZone:(id)arg1 ;
-(id)pInvitationRecipientFromShareParticipant:(id)arg1 ;
-(id)pCommentFromComment:(id)arg1 ;
-(id)pPulseDataFromUserPresence:(id)arg1 ;
@end

