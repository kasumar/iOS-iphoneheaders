/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:57:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSURL;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse {

	NSURL* _passURL;

}

@property (nonatomic,retain) NSURL * passURL;              //@synthesize passURL=_passURL - In the implementation block
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSURL *)passURL;
@end

