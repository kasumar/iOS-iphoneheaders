/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ICCameraFile.h>

@class NSString;

@interface PTPCameraFile : ICCameraFile {

	void* _ptpCameraFileProperties;
	NSString* _path;

}

@property (readonly) unsigned long long type; 
@property (readonly) unsigned storageID; 
@property (readonly) unsigned objHandle; 
@property (copy) id info; 
@property (retain) NSString * path;                        //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(unsigned long long)type;
-(id)path;
-(id)info;
-(void)setPath:(id)arg1 ;
-(void)setInfo:(id)arg1 ;
-(id)thumbData;
-(id)metadataDict;
-(int)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3 ;
-(unsigned)objHandle;
-(unsigned)storageID;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned long long)arg4 storageID:(unsigned)arg5 objectHandle:(unsigned)arg6 ;
-(void)finalize;
@end

