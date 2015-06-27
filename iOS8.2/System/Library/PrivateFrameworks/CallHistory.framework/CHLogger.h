/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <CallHistory/CHLoggerProtocol.h>

@interface CHLogger : NSObject <CHLoggerProtocol> {

	StaticLogger* _logger;

}
+(void)logWithLevel:(unsigned char)arg1 logger:(LoggerBase<std::__1::shared_ptr<ctu::LogServer> >*)arg2 format:(id)arg3 argList:(void*)arg4 ;
-(id)initWithDomain:(id)arg1 ;
-(char)shouldLogForLevel:(unsigned)arg1 ;
-(void)logWithLevel:(unsigned)arg1 withFormat:(id)arg2 ;
-(void)logWithLevel:(unsigned)arg1 withFormat:(id)arg2 withArgs:(void*)arg3 ;
@end
