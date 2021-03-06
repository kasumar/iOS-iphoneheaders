/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PersistentStoreConfiguration, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL;

@interface PersistentStore : NSObject {

	PersistentStoreConfiguration* _configuration;
	NSManagedObjectModel* _model;
	NSPersistentStoreCoordinator* _storeCoordinator;
	NSString* _threadContextKey;
	NSString* _threadCountKey;

}

@property (readonly) PersistentStoreConfiguration * configuration; 
@property (readonly) NSURL * databaseFileURL; 
@property (readonly) NSURL * modelFileURL; 
-(NSURL *)databaseFileURL;
-(void)checkIntegrityWithInitializationBlock:(/*^block*/id)arg1 ;
-(id)beginThreadContextSession;
-(void)endThreadContextSession;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(char)_loadStoreCoordinatorWithIntegrityCheck:(char)arg1 error:(id*)arg2 ;
-(id)_baseFilePath;
-(id)_newLegacyManagedObjectModel;
-(char)performLightweightMigration:(id*)arg1 ;
-(NSURL *)modelFileURL;
-(char)loadStoreCoordinatorWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)managedObjectModel;
-(PersistentStoreConfiguration *)configuration;
-(char)resetStore:(id*)arg1 ;
@end

