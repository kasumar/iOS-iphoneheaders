/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface MBSKey : PBCodable {

	NSData* _keyData;
	unsigned _keyID;
	SCD_Struct_MB4 _has;

}

@property (assign,nonatomic) BOOL hasKeyID; 
@property (assign,nonatomic) unsigned keyID;                 //@synthesize keyID=_keyID - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyData; 
@property (nonatomic,retain) NSData * keyData;               //@synthesize keyData=_keyData - In the implementation block
-(BOOL)hasKeyID;
-(void)setHasKeyID:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setKeyData:(NSData *)arg1 ;
-(BOOL)hasKeyData;
-(NSData *)keyData;
-(unsigned)keyID;
-(void)setKeyID:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

