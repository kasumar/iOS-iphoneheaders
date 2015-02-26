/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:12 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVOctetStreamParser.h>

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {

	NSFileHandle* _fileHandle;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(void)dealloc;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
-(id)initWithFileHandle:(id)arg1 ;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(NSFileHandle *)fileHandle;
@end
