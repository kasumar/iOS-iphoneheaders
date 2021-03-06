/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCRDFileReaderDelegate;
@class NSThread, NSFileHandle;

@interface SCRDFileReader : NSObject {

	<SCRDFileReaderDelegate>* _delegate;
	NSThread* _readerThread;
	NSFileHandle* _fileHandle;
	int _threadStartCount;

}
-(void)dealloc;
-(void)invalidate;
-(bool)isValid;
-(void)start;
-(void)_readHandler:(id)arg1 ;
-(bool)hasStarted;
-(id)initWithDelegate:(id)arg1 fileHandle:(id)arg2 ;
@end

