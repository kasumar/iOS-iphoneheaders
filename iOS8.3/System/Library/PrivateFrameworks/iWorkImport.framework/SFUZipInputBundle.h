/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/SFUInputBundle.h>

@class SFUZipArchive, NSString;

@interface SFUZipInputBundle : NSObject <SFUInputBundle> {

	SFUZipArchive* _zipArchive;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)hasEntryWithName:(id)arg1 ;
-(id)inputStreamForEntry:(id)arg1 ;
-(id)bufferedInputStreamForEntry:(id)arg1 ;
-(long long)lengthOfEntry:(id)arg1 ;
-(unsigned)crc32ForEntry:(id)arg1 ;
-(void)copyEntry:(id)arg1 toFile:(id)arg2 ;
-(id)initWithZipArchive:(id)arg1 ;
@end

