/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString, NSDictionary;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob {

	long long _jobType;
	NSArray* _msASComments;
	NSString* _commentGUID;
	NSString* _assetGUID;
	NSString* _albumGUID;
	NSDictionary* _mstreamdInfoDictionary;

}

@property (assign,nonatomic) long long jobType;                                  //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSArray * msASComments;                             //@synthesize msASComments=_msASComments - In the implementation block
@property (nonatomic,retain) NSString * commentGUID;                             //@synthesize commentGUID=_commentGUID - In the implementation block
@property (nonatomic,retain) NSString * assetGUID;                               //@synthesize assetGUID=_assetGUID - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                               //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSDictionary * mstreamdInfoDictionary;              //@synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary - In the implementation block
+(void)locallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4 ;
+(void)publishCommentToServer:(id)arg1 ;
+(void)deleteSharedCommentFromServer:(id)arg1 ;
+(id)directoryPathForInFlightComments:(bool)arg1 ;
+(void)locallyProcessDeletedComments:(id)arg1 info:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)run;
-(id)initFromXPCObject:(id)arg1 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)encodeToXPCObject:(id)arg1 ;
-(bool)shouldArchiveXPCToDisk;
-(id)albumGUID;
-(id)mstreamdInfoDictionary;
-(long long)jobType;
-(void)setMstreamdInfoDictionary:(id)arg1 ;
-(void)setJobType:(long long)arg1 ;
-(void)setAlbumGUID:(id)arg1 ;
-(void)setCommentGUID:(id)arg1 ;
-(void)setAssetGUID:(id)arg1 ;
-(void)setMsASComments:(id)arg1 ;
-(id)msASComments;
-(id)commentGUID;
-(id)assetGUID;
-(void)executeProcessServerNotificationOfCommentChanges;
-(void)executePublishCommentToServer;
-(void)executeDeleteCommentFromServer;
@end
