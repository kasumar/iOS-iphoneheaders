/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:00:49 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FMF/FMF-Structs.h>
@interface ISSystemLog : NSObject {

	dispatch_queue_sRef dq;
	asl_object_sRef _aslClient;
	int _logFileFD;

}
+(id)sharedInstance;
+(void)load;
-(void)writeLevel:(unsigned)arg1 facility:(id)arg2 path:(const char*)arg3 line:(unsigned)arg4 format:(id)arg5 ;
-(void)processASLMessage:(asl_object_sRef)arg1 ;
-(id)init;
-(char)isLoggingToFile;
-(void)startLoggingToFile:(id)arg1 ;
-(void)stopLoggingToFile;
-(void)finalize;
@end

