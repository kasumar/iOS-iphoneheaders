/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFContactsSearchConsumer <NSObject>
@required
-(void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;
-(void)finishedSearchingForType:(int)arg1;
-(void)finishedTaskWithID:(id)arg1;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
@end
