/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AAUIAccountCreationDelegate
@required
-(void)accountCreationWillBeginWithAppleID:(id)arg1 password:(id)arg2;
-(void)accountCreationDidFailWithError:(id)arg1;
-(void)accountCreationDidSucceedWithAppleID:(id)arg1 password:(id)arg2 emailChoice:(id)arg3;
-(void)accountCreationWasCanceled;

@end
