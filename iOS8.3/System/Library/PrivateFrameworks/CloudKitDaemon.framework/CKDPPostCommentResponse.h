/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPIdentifier;

@interface CKDPPostCommentResponse : PBCodable <NSCopying> {

	CKDPIdentifier* _commentId;

}

@property (nonatomic,readonly) char hasCommentId; 
@property (nonatomic,retain) CKDPIdentifier * commentId;              //@synthesize commentId=_commentId - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCommentId:(CKDPIdentifier *)arg1 ;
-(char)hasCommentId;
-(CKDPIdentifier *)commentId;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

