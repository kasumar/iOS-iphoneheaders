/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PTPInitFailPacket : NSObject {

	unsigned long _reason;

}
-(id)description;
-(unsigned long)reason;
-(id)initWithReason:(unsigned long)arg1 ;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(void)setReason:(unsigned long)arg1 ;
@end
