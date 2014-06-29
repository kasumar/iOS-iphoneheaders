/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRadioArtworkImageCacheRequest.h>

@class RadioStation;

@interface MPRadioStationImageCacheRequest : MPRadioArtworkImageCacheRequest {

	RadioStation* _radioStation;

}

@property (nonatomic,readonly) RadioStation * radioStation;              //@synthesize radioStation=_radioStation - In the implementation block
@property (assign,nonatomic) bool usePlaceholderAsFallback; 
-(id)initWithRadioStation:(id)arg1 ;
-(id)radioStation;
-(void).cxx_destruct;
@end
