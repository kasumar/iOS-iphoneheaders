/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOLocation;

@interface GEOSignificantLocation : PBCodable <NSCopying> {

	GEOLocation* _location;
	unsigned _locationIndex;
	SCD_Struct_GE52 _has;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocationIndex; 
@property (assign,nonatomic) unsigned locationIndex;              //@synthesize locationIndex=_locationIndex - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)location;
-(id)dictionaryRepresentation;
-(BOOL)hasLocationIndex;
-(void)setHasLocationIndex:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLocationIndex:(unsigned)arg1 ;
-(unsigned)locationIndex;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLocation;
-(void)setLocation:(id)arg1 ;
@end
