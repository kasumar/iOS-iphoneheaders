/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob {

	long long _actionType;
	NSString* _albumUUID;
	NSArray* _assetUUIDs;
	long long _cloudFeedContent;

}

@property (assign) long long actionType;                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * albumUUID;                      //@synthesize albumUUID=_albumUUID - In the implementation block
@property (nonatomic,retain) NSArray * assetUUIDs;                    //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (assign,nonatomic) long long cloudFeedContent;              //@synthesize cloudFeedContent=_cloudFeedContent - In the implementation block
+(void)userDidDeleteSharedAlbum:(id)arg1 ;
+(void)userDidDeleteSharedAssets:(id)arg1 ;
+(void)userDidViewCloudFeedContent:(long long)arg1 ;
+(void)userDidNavigateIntoSharedAlbum:(id)arg1 ;
+(void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1 ;
+(void)userDidNavigateAwayFromSharedAlbum:(id)arg1 ;
+(void)userDidNavigateAwayFromAllSharedAlbums;
+(void)userDidReadCommentOnSharedAsset:(id)arg1 ;
+(void)userDidLeavePhotosApplication;
-(void)dealloc;
-(void)run;
-(id)assetUUIDs;
-(void)setAlbumUUID:(id)arg1 ;
-(void)setAssetUUIDs:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)albumUUID;
-(void)setActionType:(long long)arg1 ;
-(void)setCloudFeedContent:(long long)arg1 ;
-(long long)actionType;
-(long long)cloudFeedContent;
@end

