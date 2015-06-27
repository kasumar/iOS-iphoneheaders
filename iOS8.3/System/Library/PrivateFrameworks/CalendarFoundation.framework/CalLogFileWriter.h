/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/CalLogWriter.h>

@class NSString;

@interface CalLogFileWriter : CalLogWriter {

	NSString* _path;
	int _fileDescriptor;
	char _fileDescriptorIsValid;

}

@property (nonatomic,retain) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) int fileDescriptor;                      //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (assign,nonatomic) char fileDescriptorIsValid;              //@synthesize fileDescriptorIsValid=_fileDescriptorIsValid - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setFileDescriptorIsValid:(char)arg1 ;
-(char)fileDescriptorIsValid;
-(int)fileDescriptor;
-(void)write:(id)arg1 ;
-(void)setFileDescriptor:(int)arg1 ;
-(id)initWithParameters:(id)arg1 ;
@end
