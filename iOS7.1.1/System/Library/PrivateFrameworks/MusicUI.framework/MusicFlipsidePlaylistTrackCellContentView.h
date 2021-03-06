/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/_MusicSongListTableViewCellContentView.h>

@class UILabel, NSString;

@interface MusicFlipsidePlaylistTrackCellContentView : _MusicSongListTableViewCellContentView {

	UILabel* _durationLabel;
	UILabel* _trackNumberLabel;
	double _maximumDurationWidth;

}

@property (nonatomic,copy) NSString * durationText; 
@property (assign,nonatomic) double maximumDurationWidth;              //@synthesize maximumDurationWidth=_maximumDurationWidth - In the implementation block
@property (nonatomic,copy) NSString * trackNumberText; 
-(void)setArtist:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void).cxx_destruct;
-(double)maximumDurationWidth;
-(void)setDurationText:(id)arg1 ;
-(void)setMaximumDurationWidth:(double)arg1 ;
-(void)setTrackNumberText:(id)arg1 ;
-(void)setDisplayAsDisabled:(bool)arg1 ;
-(id)durationText;
-(id)trackNumberText;
-(void)setAlbum:(id)arg1 ;
@end

