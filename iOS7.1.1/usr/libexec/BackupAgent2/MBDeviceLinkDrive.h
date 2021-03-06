/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <BackupAgent2/MBDrive.h>
#import <BackupAgent2/MBProgressDelegate.h>

@interface MBDeviceLinkDrive : MBDrive <MBProgressDelegate> {

	void* _connection;

}

@property (nonatomic,readonly) void* connection;              //@synthesize connection=_connection - In the implementation block
+(id)deviceLinkDriveWithConnection:(void*)arg1 ;
-(int)mapStatus:(int)arg1 ;
-(id)mapFileType:(id)arg1 ;
-(CFDictionaryRef)mapOptions:(id)arg1 ;
-(BOOL)mapStatus:(int)arg1 errorString:(id)arg2 path:(id)arg3 error:(id*)arg4 ;
-(id)mapAttributes:(id)arg1 ;
-(id)mapResults:(id)arg1 ;
-(void)progressUpdatedWithPercentage:(double)arg1 size:(unsigned long long)arg2 ;
-(BOOL)createDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)contentsOfDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)uploadFileAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)uploadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(BOOL)downloadFileAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)downloadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)moveItemsAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(BOOL)removeItemAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeItemsAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(BOOL)freeSpace:(unsigned long long*)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void*)connection;
-(id)initWithConnection:(void*)arg1 ;
@end

