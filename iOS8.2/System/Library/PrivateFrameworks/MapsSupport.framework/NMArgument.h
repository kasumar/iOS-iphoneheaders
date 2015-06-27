/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/nanomapscd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanomapscd/nanomapscd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <nanomapscd/NSCopying.h>

@class NSMutableArray, NSData, NSString;

@interface NMArgument : PBCodable <NSCopying> {

	SCD_Struct_NM5 _locationValue;
	SCD_Struct_NM6* _unsignedIntListValues;
	unsigned long long _intValue;
	NSMutableArray* _dataListValues;
	NSData* _dataValue;
	NSMutableArray* _stringListValues;
	NSMutableArray* _stringToObjectMaps;
	NSString* _stringValue;
	int _tag;
	NSMutableArray* _tileRequestValues;
	char _boolValue;
	SCD_Struct_NM7 _has;

}

@property (assign,nonatomic) char hasTag; 
@property (assign,nonatomic) int tag;                                                  //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) char hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                   //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) char hasIntValue; 
@property (assign,nonatomic) unsigned long long intValue;                              //@synthesize intValue=_intValue - In the implementation block
@property (assign,nonatomic) char hasBoolValue; 
@property (assign,nonatomic) char boolValue;                                           //@synthesize boolValue=_boolValue - In the implementation block
@property (nonatomic,readonly) char hasDataValue; 
@property (nonatomic,retain) NSData * dataValue;                                       //@synthesize dataValue=_dataValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * stringToObjectMaps;                      //@synthesize stringToObjectMaps=_stringToObjectMaps - In the implementation block
@property (nonatomic,retain) NSMutableArray * stringListValues;                        //@synthesize stringListValues=_stringListValues - In the implementation block
@property (assign,nonatomic) char hasLocationValue; 
@property (assign,nonatomic) SCD_Struct_NM8 locationValue;                             //@synthesize locationValue=_locationValue - In the implementation block
@property (nonatomic,readonly) unsigned unsignedIntListValuesCount; 
@property (nonatomic,readonly) unsigned long long* unsignedIntListValues; 
@property (nonatomic,retain) NSMutableArray * dataListValues;                          //@synthesize dataListValues=_dataListValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * tileRequestValues;                       //@synthesize tileRequestValues=_tileRequestValues - In the implementation block
-(id)_nm_initWithLocation:(id)arg1 tag:(int)arg2 ;
-(id)_nm_initWithErrorValue:(id)arg1 tag:(int)arg2 ;
-(void)addStringToObjectMap:(id)arg1 ;
-(void)addStringListValue:(id)arg1 ;
-(void)addDataListValue:(id)arg1 ;
-(void)addTileRequestValue:(id)arg1 ;
-(unsigned)stringToObjectMapsCount;
-(void)clearStringToObjectMaps;
-(id)stringToObjectMapAtIndex:(unsigned)arg1 ;
-(unsigned)stringListValuesCount;
-(void)clearStringListValues;
-(id)stringListValueAtIndex:(unsigned)arg1 ;
-(unsigned)unsignedIntListValuesCount;
-(void)clearUnsignedIntListValues;
-(unsigned long long)unsignedIntListValueAtIndex:(unsigned)arg1 ;
-(void)addUnsignedIntListValue:(unsigned long long)arg1 ;
-(unsigned)dataListValuesCount;
-(void)clearDataListValues;
-(id)dataListValueAtIndex:(unsigned)arg1 ;
-(unsigned)tileRequestValuesCount;
-(void)clearTileRequestValues;
-(id)tileRequestValueAtIndex:(unsigned)arg1 ;
-(void)setHasTag:(char)arg1 ;
-(char)hasTag;
-(void)setHasLocationValue:(char)arg1 ;
-(unsigned long long*)unsignedIntListValues;
-(void)setUnsignedIntListValues:(unsigned long long*)arg1 count:(unsigned)arg2 ;
-(NSMutableArray *)stringToObjectMaps;
-(void)setStringToObjectMaps:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stringListValues;
-(void)setStringListValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dataListValues;
-(void)setDataListValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tileRequestValues;
-(void)setTileRequestValues:(NSMutableArray *)arg1 ;
-(id)_nm_compressedArgument:(int)arg1 ;
-(id)_nm_initWithSecureCodingValue:(id)arg1 tag:(int)arg2 ;
-(id)_nm_initWithArrayValue:(id)arg1 tag:(int)arg2 ;
-(id)_nm_initWithDictionaryValue:(id)arg1 tag:(int)arg2 ;
-(id)_nm_dictionaryValue;
-(id)_nm_arrayValue;
-(id)_nm_errorValue;
-(id)_nm_locationValue;
-(char)boolValue;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)tag;
-(void)setTag:(int)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLocationValue:(SCD_Struct_NM8)arg1 ;
-(char)hasStringValue;
-(char)hasLocationValue;
-(SCD_Struct_NM8)locationValue;
-(void)setBoolValue:(char)arg1 ;
-(void)setHasBoolValue:(char)arg1 ;
-(char)hasBoolValue;
-(void)setIntValue:(unsigned long long)arg1 ;
-(void)setHasIntValue:(char)arg1 ;
-(char)hasIntValue;
-(NSData *)dataValue;
-(unsigned long long)intValue;
-(void)setDataValue:(NSData *)arg1 ;
-(char)hasDataValue;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
