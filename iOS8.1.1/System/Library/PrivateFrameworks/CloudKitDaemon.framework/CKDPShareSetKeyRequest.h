/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, NSData, NSMutableArray, CKDPShareIdentifier;

@interface CKDPShareSetKeyRequest : PBRequest <NSCopying> {

	NSString* _currentKeyVersion;
	NSData* _keyData;
	NSMutableArray* _participantIds;
	CKDPShareIdentifier* _shareId;

}

@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentKeyVersion; 
@property (nonatomic,retain) NSString * currentKeyVersion;                 //@synthesize currentKeyVersion=_currentKeyVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyData; 
@property (nonatomic,retain) NSData * keyData;                             //@synthesize keyData=_keyData - In the implementation block
@property (nonatomic,retain) NSMutableArray * participantIds;              //@synthesize participantIds=_participantIds - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(void)setKeyData:(NSData *)arg1 ;
-(BOOL)hasKeyData;
-(NSData *)keyData;
-(void)addParticipantId:(id)arg1 ;
-(void)setCurrentKeyVersion:(NSString *)arg1 ;
-(unsigned long long)participantIdsCount;
-(void)clearParticipantIds;
-(id)participantIdAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCurrentKeyVersion;
-(NSString *)currentKeyVersion;
-(NSMutableArray *)participantIds;
-(void)setParticipantIds:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
