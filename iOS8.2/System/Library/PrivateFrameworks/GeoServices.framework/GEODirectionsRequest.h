/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class GEOClientCapabilities, GEOMapRegion, GEOLocation, GEODirectionsRequestFeedback, NSData, GEOOriginalRoute, GEORouteAttributes, NSMutableArray;

@interface GEODirectionsRequest : PBRequest <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	unsigned long long _maxDecoderVersion;
	unsigned long long _maxGraphVersion;
	unsigned long long _sharedLibraryVersion;
	GEOClientCapabilities* _clientCapabilities;
	GEOMapRegion* _currentMapRegion;
	GEOLocation* _currentUserLocation;
	int _departureTime;
	GEODirectionsRequestFeedback* _feedback;
	unsigned _mainTransportTypeMaxRouteCount;
	NSData* _originalDirectionsResponseID;
	GEOOriginalRoute* _originalRoute;
	NSData* _originalRouteID;
	NSData* _originalRouteZilchPoints;
	GEORouteAttributes* _routeAttributes;
	unsigned _sequenceNumber;
	NSMutableArray* _serviceTags;
	unsigned _timeSinceLastRerouteRequest;
	NSMutableArray* _waypointTypeds;
	char _getRouteForZilchPoints;
	SCD_Struct_GE56 _has;

}

@property (nonatomic,readonly) char hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                    //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) char hasMainTransportTypeMaxRouteCount; 
@property (assign,nonatomic) unsigned mainTransportTypeMaxRouteCount;                 //@synthesize mainTransportTypeMaxRouteCount=_mainTransportTypeMaxRouteCount - In the implementation block
@property (nonatomic,readonly) char hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                       //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) char hasCurrentMapRegion; 
@property (nonatomic,retain) GEOMapRegion * currentMapRegion;                         //@synthesize currentMapRegion=_currentMapRegion - In the implementation block
@property (nonatomic,readonly) char hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID;                                //@synthesize originalRouteID=_originalRouteID - In the implementation block
@property (nonatomic,readonly) char hasOriginalRouteZilchPoints; 
@property (nonatomic,retain) NSData * originalRouteZilchPoints;                       //@synthesize originalRouteZilchPoints=_originalRouteZilchPoints - In the implementation block
@property (assign,nonatomic) char hasTimeSinceLastRerouteRequest; 
@property (assign,nonatomic) unsigned timeSinceLastRerouteRequest;                    //@synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest - In the implementation block
@property (nonatomic,readonly) char hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;              //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) char hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID;                   //@synthesize originalDirectionsResponseID=_originalDirectionsResponseID - In the implementation block
@property (assign,nonatomic) char hasDepartureTime; 
@property (assign,nonatomic) int departureTime;                                       //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) char hasGetRouteForZilchPoints; 
@property (assign,nonatomic) char getRouteForZilchPoints;                             //@synthesize getRouteForZilchPoints=_getRouteForZilchPoints - In the implementation block
@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) char hasFeedback; 
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;                 //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,retain) NSMutableArray * waypointTypeds;                         //@synthesize waypointTypeds=_waypointTypeds - In the implementation block
@property (nonatomic,readonly) char hasOriginalRoute; 
@property (nonatomic,retain) GEOOriginalRoute * originalRoute;                        //@synthesize originalRoute=_originalRoute - In the implementation block
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                                 //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                            //@synthesize serviceTags=_serviceTags - In the implementation block
@property (assign,nonatomic) char hasMaxDecoderVersion; 
@property (assign,nonatomic) unsigned long long maxDecoderVersion;                    //@synthesize maxDecoderVersion=_maxDecoderVersion - In the implementation block
@property (assign,nonatomic) char hasMaxGraphVersion; 
@property (assign,nonatomic) unsigned long long maxGraphVersion;                      //@synthesize maxGraphVersion=_maxGraphVersion - In the implementation block
@property (assign,nonatomic) char hasSharedLibraryVersion; 
@property (assign,nonatomic) unsigned long long sharedLibraryVersion;                 //@synthesize sharedLibraryVersion=_sharedLibraryVersion - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(void)setOriginalDirectionsResponseID:(NSData *)arg1 ;
-(char)hasOriginalDirectionsResponseID;
-(NSData *)originalDirectionsResponseID;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(void)setCurrentMapRegion:(GEOMapRegion *)arg1 ;
-(void)setOriginalRouteID:(NSData *)arg1 ;
-(void)setOriginalRouteZilchPoints:(NSData *)arg1 ;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(void)setWaypointTypeds:(NSMutableArray *)arg1 ;
-(void)setOriginalRoute:(GEOOriginalRoute *)arg1 ;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)addWaypointTyped:(id)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned)waypointTypedsCount;
-(void)clearWaypointTypeds;
-(id)waypointTypedAtIndex:(unsigned)arg1 ;
-(unsigned)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned)arg1 ;
-(char)hasRouteAttributes;
-(unsigned)mainTransportTypeMaxRouteCount;
-(void)setMainTransportTypeMaxRouteCount:(unsigned)arg1 ;
-(void)setHasMainTransportTypeMaxRouteCount:(char)arg1 ;
-(char)hasMainTransportTypeMaxRouteCount;
-(char)hasCurrentUserLocation;
-(char)hasCurrentMapRegion;
-(char)hasOriginalRouteID;
-(char)hasOriginalRouteZilchPoints;
-(unsigned)timeSinceLastRerouteRequest;
-(void)setTimeSinceLastRerouteRequest:(unsigned)arg1 ;
-(void)setHasTimeSinceLastRerouteRequest:(char)arg1 ;
-(char)hasTimeSinceLastRerouteRequest;
-(char)hasClientCapabilities;
-(void)setDepartureTime:(int)arg1 ;
-(void)setHasDepartureTime:(char)arg1 ;
-(char)hasDepartureTime;
-(char)getRouteForZilchPoints;
-(void)setGetRouteForZilchPoints:(char)arg1 ;
-(void)setHasGetRouteForZilchPoints:(char)arg1 ;
-(char)hasGetRouteForZilchPoints;
-(char)hasFeedback;
-(char)hasOriginalRoute;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setHasSequenceNumber:(char)arg1 ;
-(char)hasSequenceNumber;
-(void)setMaxDecoderVersion:(unsigned long long)arg1 ;
-(void)setHasMaxDecoderVersion:(char)arg1 ;
-(char)hasMaxDecoderVersion;
-(void)setMaxGraphVersion:(unsigned long long)arg1 ;
-(void)setHasMaxGraphVersion:(char)arg1 ;
-(char)hasMaxGraphVersion;
-(void)setSharedLibraryVersion:(unsigned long long)arg1 ;
-(void)setHasSharedLibraryVersion:(char)arg1 ;
-(char)hasSharedLibraryVersion;
-(GEORouteAttributes *)routeAttributes;
-(GEOLocation *)currentUserLocation;
-(GEOMapRegion *)currentMapRegion;
-(NSData *)originalRouteID;
-(NSData *)originalRouteZilchPoints;
-(GEOClientCapabilities *)clientCapabilities;
-(int)departureTime;
-(GEODirectionsRequestFeedback *)feedback;
-(NSMutableArray *)waypointTypeds;
-(GEOOriginalRoute *)originalRoute;
-(unsigned)sequenceNumber;
-(NSMutableArray *)serviceTags;
-(unsigned long long)maxDecoderVersion;
-(unsigned long long)maxGraphVersion;
-(unsigned long long)sharedLibraryVersion;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

