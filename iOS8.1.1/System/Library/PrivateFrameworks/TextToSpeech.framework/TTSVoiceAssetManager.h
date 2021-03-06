/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TTSVoiceAssetManager : NSObject
+(id)sharedInstance;
-(id)_voiceAssetQueryForName:(id)arg1 language:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 version:(id)arg5 localOnly:(BOOL)arg6 ;
-(void)automaticallyDownloadVoiceAssetsIfNeeded;
-(id)_autoDownloadedAssets;
-(void)_automaticallyDownloadVoiceAssetsIfNeeded;
-(id)resourcePathForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 name:(id)arg4 ;
-(void)getVoiceAssetsLocalOnly:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)startDownloadingVoiceAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
@end

