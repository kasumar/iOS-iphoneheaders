/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OISFUDataRepresentation.h>
#import <OfficeImport/SFUZipArchiveDataRepresentation.h>

@class OISFUFileDataRepresentation, NSString;

@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation> {

	OISFUFileDataRepresentation* mFileRepresentation;
	int mFd;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(id)inputStream;
-(char)hasSameLocationAs:(id)arg1 ;
-(char)isReadable;
-(id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(char)isEncrypted;
-(id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(long long)dataLength;
@end
