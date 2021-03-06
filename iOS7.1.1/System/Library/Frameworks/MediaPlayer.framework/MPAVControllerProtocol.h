/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPAVControllerProtocol <NSObject>
@property (nonatomic,readonly) MPMediaItem * currentMediaItem; 
@property (nonatomic,readonly) MPMediaQuery * currentMediaQuery; 
@property (assign,nonatomic) unsigned long long displayOverridePlaybackState; 
@property (nonatomic,readonly) unsigned long long state; 
@required
-(void)setDisplayOverridePlaybackState:(unsigned long long)arg1;
-(bool)shouldDisplayAsPlaying;
-(id)currentMediaItem;
-(id)currentMediaQuery;
-(unsigned long long)displayOverridePlaybackState;
-(unsigned long long)state;
@end

