/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class AttributionInfo;

@interface SearchAttribution : PBCodable <NSCopying> {

	unsigned _attributionIndex;
	unsigned _businessIndex;
	AttributionInfo* _key;

}

@property (nonatomic,retain) AttributionInfo * key;                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned businessIndex;                 //@synthesize businessIndex=_businessIndex - In the implementation block
@property (assign,nonatomic) unsigned attributionIndex;              //@synthesize attributionIndex=_attributionIndex - In the implementation block
-(void)setAttributionIndex:(unsigned)arg1 ;
-(void)setBusinessIndex:(unsigned)arg1 ;
-(unsigned)attributionIndex;
-(unsigned)businessIndex;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)key;
-(id)dictionaryRepresentation;
-(void)setKey:(id)arg1 ;
-(void).cxx_destruct;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
