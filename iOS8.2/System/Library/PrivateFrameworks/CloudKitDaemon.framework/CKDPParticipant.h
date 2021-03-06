/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, NSData, CKDPIdentifier;

@interface CKDPParticipant : PBCodable <NSCopying> {

	NSString* _emailAddress;
	NSData* _invitationSignature;
	CKDPIdentifier* _inviterId;
	CKDPIdentifier* _participantId;
	int _participantType;
	int _permission;
	int _state;
	CKDPIdentifier* _userId;
	char _createdOutOfProcess;
	SCD_Struct_CK14 _has;

}

@property (nonatomic,readonly) char hasParticipantId; 
@property (nonatomic,retain) CKDPIdentifier * participantId;              //@synthesize participantId=_participantId - In the implementation block
@property (nonatomic,readonly) char hasUserId; 
@property (nonatomic,retain) CKDPIdentifier * userId;                     //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) char hasEmailAddress; 
@property (nonatomic,retain) NSString * emailAddress;                     //@synthesize emailAddress=_emailAddress - In the implementation block
@property (assign,nonatomic) char hasState; 
@property (assign,nonatomic) int state;                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char hasPermission; 
@property (assign,nonatomic) int permission;                              //@synthesize permission=_permission - In the implementation block
@property (nonatomic,readonly) char hasInviterId; 
@property (nonatomic,retain) CKDPIdentifier * inviterId;                  //@synthesize inviterId=_inviterId - In the implementation block
@property (assign,nonatomic) char hasCreatedOutOfProcess; 
@property (assign,nonatomic) char createdOutOfProcess;                    //@synthesize createdOutOfProcess=_createdOutOfProcess - In the implementation block
@property (assign,nonatomic) char hasParticipantType; 
@property (assign,nonatomic) int participantType;                         //@synthesize participantType=_participantType - In the implementation block
@property (nonatomic,readonly) char hasInvitationSignature; 
@property (nonatomic,retain) NSData * invitationSignature;                //@synthesize invitationSignature=_invitationSignature - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUserId:(CKDPIdentifier *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(char)hasUserId;
-(char)hasEmailAddress;
-(CKDPIdentifier *)userId;
-(NSString *)emailAddress;
-(void)setParticipantId:(CKDPIdentifier *)arg1 ;
-(char)hasParticipantId;
-(CKDPIdentifier *)participantId;
-(void)setInviterId:(CKDPIdentifier *)arg1 ;
-(void)setInvitationSignature:(NSData *)arg1 ;
-(void)setHasState:(char)arg1 ;
-(char)hasState;
-(void)setPermission:(int)arg1 ;
-(void)setHasPermission:(char)arg1 ;
-(char)hasPermission;
-(char)hasInviterId;
-(void)setCreatedOutOfProcess:(char)arg1 ;
-(void)setHasCreatedOutOfProcess:(char)arg1 ;
-(char)hasCreatedOutOfProcess;
-(int)participantType;
-(void)setParticipantType:(int)arg1 ;
-(void)setHasParticipantType:(char)arg1 ;
-(char)hasParticipantType;
-(char)hasInvitationSignature;
-(int)permission;
-(CKDPIdentifier *)inviterId;
-(char)createdOutOfProcess;
-(NSData *)invitationSignature;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

