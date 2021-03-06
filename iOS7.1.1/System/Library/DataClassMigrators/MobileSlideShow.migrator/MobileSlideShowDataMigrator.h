/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/DataClassMigrators/MobileSlideShow.migrator/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class NSMutableArray;

@interface MobileSlideShowDataMigrator : DataClassMigrator {

	NSMutableArray* _fileGroupsToMigrate;
	NSMutableArray* _fileGroupProcessingOptions;
	NSMutableArray* _strayFileGroups;
	double _migrationProgress;
	unsigned long long _secondsToCleanupModelAfteriTunesRestore;
	bool _didSetOTARestoreToken;

}
-(bool)_migrateMetadatFilesToPhotoData;
-(id)_fileGroupProcessingOptions;
-(id)_fileGroupsToMigrate;
-(bool)_isDCIMAssetsDirectory:(id)arg1 ;
-(bool)_migrateCameraRollFiles;
-(void)_generateMigrationFilegroupsAndOptions;
-(void)_generateAlbumMetadataFromLastSyncedPlist;
-(void)_setOTARestoreTokenIfNeeded;
-(id)_strayFileGroups;
-(void)_removeOldLargeThubnails;
-(void)_migrateAssetsdPrefs;
-(id)dataClassName;
-(bool)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
-(void)dealloc;
-(id)init;
@end

