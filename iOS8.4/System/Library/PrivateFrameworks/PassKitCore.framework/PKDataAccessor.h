/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSData, NSBundle, PKRemoteAssetManager;

@interface PKDataAccessor : NSObject {

	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,retain,readonly) NSData * manifestHash; 
@property (nonatomic,retain,readonly) NSData * archiveData; 
@property (nonatomic,retain,readonly) NSData * serializedFileWrapper; 
@property (nonatomic,retain,readonly) NSBundle * bundle; 
@property (nonatomic,readonly) BOOL remoteAssetsDownloaded; 
@property (nonatomic,retain,readonly) PKRemoteAssetManager * remoteAssetManager; 
-(id)dictionary;
-(NSBundle *)bundle;
-(id)content;
-(NSData *)archiveData;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(NSData *)manifestHash;
-(NSData *)serializedFileWrapper;
-(BOOL)remoteAssetsDownloaded;
-(PKRemoteAssetManager *)remoteAssetManager;
-(id)displayProfileOfType:(long long)arg1 ;
-(void)noteShared;
-(void)updateSettings:(long long)arg1 ;
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 ;
-(id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3 ;
-(void)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
@end

