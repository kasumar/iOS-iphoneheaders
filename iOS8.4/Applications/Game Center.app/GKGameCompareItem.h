/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GKGameRecordInternal;

@interface GKGameCompareItem : NSObject {

	GKGameRecordInternal* _localRecord;
	GKGameRecordInternal* _playerRecord;

}

@property (retain) GKGameRecordInternal * localRecord;               //@synthesize localRecord=_localRecord - In the implementation block
@property (retain) GKGameRecordInternal * playerRecord;              //@synthesize playerRecord=_playerRecord - In the implementation block
+(id)itemWithLocal:(id)arg1 other:(id)arg2 ;
-(GKGameRecordInternal *)playerRecord;
-(void)setPlayerRecord:(GKGameRecordInternal *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setLocalRecord:(GKGameRecordInternal *)arg1 ;
-(GKGameRecordInternal *)localRecord;
@end
