/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLManagedObject, NSKnownKeysDictionary;

@interface PLObjectSnapshot : NSObject {

	PLManagedObject* _managedObject;
	NSKnownKeysDictionary* _snapshotValues;
	CFDictionaryRef _indexMaps;

}

@property (nonatomic,readonly) PLManagedObject * managedObject;              //@synthesize managedObject=_managedObject - In the implementation block
+(id)snapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 useCommitedValues:(bool)arg3 ;
+(CFDictionaryRef)_createIndexMapsSnapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setAssetsSnapshot:(id)arg1 ;
-(bool)hasSnapshotValueForProperty:(id)arg1 ;
-(id)managedObject;
-(id)_allSnapshotValuesDescription;
-(id)initWithManagedObject:(id)arg1 properties:(id)arg2 toOneRelationships:(id)arg3 indexMaps:(CFDictionaryRef)arg4 useCommitedValues:(bool)arg5 ;
-(id)_snapshotValueForProperty:(id)arg1 ;
-(id)indexMapStateForDerivedObject:(id)arg1 ;
-(id)snapshotValueForProperty:(id)arg1 ;
-(id)filteredIndexesForFilter:(id)arg1 ;
@end
