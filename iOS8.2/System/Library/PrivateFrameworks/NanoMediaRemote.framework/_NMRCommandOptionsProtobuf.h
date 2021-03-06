/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoMediaRemote/NSCopying.h>

@class NSString, NSData;

@interface _NMRCommandOptionsProtobuf : PBCodable <NSCopying> {

	double _playbackPosition;
	long long _radioStationID;
	unsigned long long _trackID;
	NSString* _destinationAppDisplayID;
	NSString* _mediaType;
	float _playbackRate;
	NSString* _radioStationHash;
	float _rating;
	int _repeatMode;
	unsigned _sendOptions;
	int _shuffleMode;
	float _skipInterval;
	NSString* _sourceID;
	NSData* _systemAppPlaybackQueueData;
	char _externalPlayerCommand;
	char _negative;
	char _requestDefermentToPlaybackQueuePosition;
	SCD_Struct_NM6 _has;

}

@property (nonatomic,readonly) char hasSourceID; 
@property (nonatomic,retain) NSString * sourceID;                                          //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) char hasMediaType; 
@property (nonatomic,retain) NSString * mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) char hasExternalPlayerCommand; 
@property (assign,nonatomic) char externalPlayerCommand;                                   //@synthesize externalPlayerCommand=_externalPlayerCommand - In the implementation block
@property (assign,nonatomic) char hasSkipInterval; 
@property (assign,nonatomic) float skipInterval;                                           //@synthesize skipInterval=_skipInterval - In the implementation block
@property (assign,nonatomic) char hasPlaybackRate; 
@property (assign,nonatomic) float playbackRate;                                           //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) char hasRating; 
@property (assign,nonatomic) float rating;                                                 //@synthesize rating=_rating - In the implementation block
@property (assign,nonatomic) char hasNegative; 
@property (assign,nonatomic) char negative;                                                //@synthesize negative=_negative - In the implementation block
@property (assign,nonatomic) char hasPlaybackPosition; 
@property (assign,nonatomic) double playbackPosition;                                      //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (assign,nonatomic) char hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                               //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) char hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                              //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (assign,nonatomic) char hasTrackID; 
@property (assign,nonatomic) unsigned long long trackID;                                   //@synthesize trackID=_trackID - In the implementation block
@property (assign,nonatomic) char hasRadioStationID; 
@property (assign,nonatomic) long long radioStationID;                                     //@synthesize radioStationID=_radioStationID - In the implementation block
@property (nonatomic,readonly) char hasRadioStationHash; 
@property (nonatomic,retain) NSString * radioStationHash;                                  //@synthesize radioStationHash=_radioStationHash - In the implementation block
@property (nonatomic,readonly) char hasSystemAppPlaybackQueueData; 
@property (nonatomic,retain) NSData * systemAppPlaybackQueueData;                          //@synthesize systemAppPlaybackQueueData=_systemAppPlaybackQueueData - In the implementation block
@property (nonatomic,readonly) char hasDestinationAppDisplayID; 
@property (nonatomic,retain) NSString * destinationAppDisplayID;                           //@synthesize destinationAppDisplayID=_destinationAppDisplayID - In the implementation block
@property (assign,nonatomic) char hasSendOptions; 
@property (assign,nonatomic) unsigned sendOptions;                                         //@synthesize sendOptions=_sendOptions - In the implementation block
@property (assign,nonatomic) char hasRequestDefermentToPlaybackQueuePosition; 
@property (assign,nonatomic) char requestDefermentToPlaybackQueuePosition;                 //@synthesize requestDefermentToPlaybackQueuePosition=_requestDefermentToPlaybackQueuePosition - In the implementation block
-(void)setTrackID:(unsigned long long)arg1 ;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(void)setRating:(float)arg1 ;
-(float)rating;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasRating;
-(char)hasMediaType;
-(void)setHasRepeatMode:(char)arg1 ;
-(char)hasRepeatMode;
-(void)setHasShuffleMode:(char)arg1 ;
-(char)hasShuffleMode;
-(char)externalPlayerCommand;
-(char)negative;
-(double)playbackPosition;
-(NSString *)radioStationHash;
-(long long)radioStationID;
-(NSData *)systemAppPlaybackQueueData;
-(NSString *)destinationAppDisplayID;
-(unsigned)sendOptions;
-(char)requestDefermentToPlaybackQueuePosition;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(void)setSystemAppPlaybackQueueData:(NSData *)arg1 ;
-(void)setDestinationAppDisplayID:(NSString *)arg1 ;
-(char)hasSourceID;
-(void)setExternalPlayerCommand:(char)arg1 ;
-(void)setHasExternalPlayerCommand:(char)arg1 ;
-(char)hasExternalPlayerCommand;
-(void)setHasSkipInterval:(char)arg1 ;
-(char)hasSkipInterval;
-(void)setHasPlaybackRate:(char)arg1 ;
-(char)hasPlaybackRate;
-(void)setHasRating:(char)arg1 ;
-(void)setNegative:(char)arg1 ;
-(void)setHasNegative:(char)arg1 ;
-(char)hasNegative;
-(void)setPlaybackPosition:(double)arg1 ;
-(void)setHasPlaybackPosition:(char)arg1 ;
-(char)hasPlaybackPosition;
-(void)setHasTrackID:(char)arg1 ;
-(char)hasTrackID;
-(void)setRadioStationID:(long long)arg1 ;
-(void)setHasRadioStationID:(char)arg1 ;
-(char)hasRadioStationID;
-(char)hasRadioStationHash;
-(char)hasSystemAppPlaybackQueueData;
-(char)hasDestinationAppDisplayID;
-(void)setSendOptions:(unsigned)arg1 ;
-(void)setHasSendOptions:(char)arg1 ;
-(char)hasSendOptions;
-(void)setRequestDefermentToPlaybackQueuePosition:(char)arg1 ;
-(void)setHasRequestDefermentToPlaybackQueuePosition:(char)arg1 ;
-(char)hasRequestDefermentToPlaybackQueuePosition;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(void)setSkipInterval:(float)arg1 ;
-(float)skipInterval;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)trackID;
@end

