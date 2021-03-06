/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class WorldClockCellView, SAClockObject;

@interface MobileTimerAssistantWorldClockSnippetCell : SiriUIContentCollectionViewCell {

	WorldClockCellView* _clockCellView;
	SAClockObject* _clock;

}

@property (nonatomic,retain) SAClockObject * clock;              //@synthesize clock=_clock - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)reuseIdentifier;
-(void)setClock:(SAClockObject *)arg1 ;
-(SAClockObject *)clock;
@end

