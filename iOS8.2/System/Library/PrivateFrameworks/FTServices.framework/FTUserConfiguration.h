/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FTUserConfiguration : NSObject

@property (assign,nonatomic) char cellularFaceTimeEnabled; 
@property (assign,nonatomic) char allowAnyNetwork; 
@property (nonatomic,readonly) char _nonWifiFaceTimeEntitled; 
+(id)sharedInstance;
-(void)setCellularFaceTimeEnabled:(char)arg1 ;
-(char)_nonWifiFaceTimeEntitled;
-(char)_adequateInternalOrCarrierInstall;
-(void)setAllowAnyNetwork:(char)arg1 ;
-(char)allowAnyNetwork;
-(char)cellularFaceTimeEnabled;
@end

