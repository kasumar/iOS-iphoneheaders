/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BSXPCReply : NSObject {

	NSObject*<OS_xpc_object> _message;

}
+(id)messageWithReply:(id)arg1 ;
-(void)dealloc;
-(id)message;
-(id)initWithReply:(id)arg1 ;
-(long long)messageKind;
-(void)sendReply:(/*^block*/id)arg1 ;
@end

