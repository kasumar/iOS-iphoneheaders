/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/VoiceServices.migrator/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface VoiceServicesDataMigrator : DataClassMigrator {

	float _progress;

}
-(id)dataClassName;
-(float)estimatedDuration;
-(float)migrationProgress;
-(id)init;
-(BOOL)performMigration;
@end
