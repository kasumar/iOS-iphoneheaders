/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface AppleErrorReport : NSObject {

	NSString* _incidentID;
	NSString* _logType;
	NSString* _deviceID;

}
+(void)logSafely:(/*^block*/id)arg1 ;
+(id)systemIDWithDescription:(BOOL)arg1 ;
+(unsigned char)executeWithTimeout:(unsigned)arg1 Code:(/*^block*/id)arg2 ;
+(id)xattr_name;
+(id)kernelVersionDescription;
+(id)systemVersionDescription;
-(id)incidentID;
-(id)getSyslogForPid:(int)arg1 withPrefix:(id)arg2 ;
-(id)logType;
-(BOOL)isAppleTV;
-(BOOL)isInternalOrCarrierInstall;
-(void)dealloc;
-(id)description;
-(id)initWithType:(id)arg1 ;
-(unsigned)uid;
-(id)deviceID;
-(BOOL)isCarrierInstall;
-(id)hardwareModel;
-(BOOL)isInternalInstall;
@end
