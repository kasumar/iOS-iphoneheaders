/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface TUAudioRoute : NSObject {

	NSDictionary* _route;

}

@property (getter=isReceiver,nonatomic,readonly) BOOL receiver; 
@property (getter=isSpeaker,nonatomic,readonly) BOOL speaker; 
@property (getter=isWirelessHeadset,nonatomic,readonly) BOOL wirelessHeadset; 
@property (getter=isAirTunes,nonatomic,readonly) BOOL airTunes; 
@property (getter=isCarAudio,nonatomic,readonly) BOOL carAudio; 
@property (getter=isBluetooth,nonatomic,readonly) BOOL bluetooth; 
@property (nonatomic,readonly) long long bluetoothEndpointType; 
@property (nonatomic,retain) NSDictionary * route;                                         //@synthesize route=_route - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)_routeNameEqualTo:(id)arg1 ;
-(BOOL)isBluetooth;
-(BOOL)isReceiver;
-(BOOL)isSpeaker;
-(BOOL)isWirelessHeadset;
-(BOOL)isAirTunes;
-(BOOL)isCarAudio;
-(long long)bluetoothEndpointType;
-(void)setRoute:(NSDictionary *)arg1 ;
-(NSDictionary *)route;
@end

