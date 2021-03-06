/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MPUFoundation/NSCopying.h>

@class NSMutableArray;

@interface _MPUProtoBufUserActivityContext : PBCodable <NSCopying> {

	NSMutableArray* _containerItems;
	int _originatorType;
	int _originatorVersion;
	SCD_Struct_MP1 _has;

}

@property (nonatomic,retain) NSMutableArray * containerItems;              //@synthesize containerItems=_containerItems - In the implementation block
@property (assign,nonatomic) char hasOriginatorType; 
@property (assign,nonatomic) int originatorType;                           //@synthesize originatorType=_originatorType - In the implementation block
@property (assign,nonatomic) char hasOriginatorVersion; 
@property (assign,nonatomic) int originatorVersion;                        //@synthesize originatorVersion=_originatorVersion - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addContainerItems:(id)arg1 ;
-(unsigned)containerItemsCount;
-(void)clearContainerItems;
-(id)containerItemsAtIndex:(unsigned)arg1 ;
-(void)setOriginatorType:(int)arg1 ;
-(void)setHasOriginatorType:(char)arg1 ;
-(char)hasOriginatorType;
-(void)setOriginatorVersion:(int)arg1 ;
-(void)setHasOriginatorVersion:(char)arg1 ;
-(char)hasOriginatorVersion;
-(NSMutableArray *)containerItems;
-(void)setContainerItems:(NSMutableArray *)arg1 ;
-(int)originatorType;
-(int)originatorVersion;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

