/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKSAlternateSystemAppClientProtocol <NSObject>
@required
-(void)didBlockSystemAppForAlternateSystemApp;
-(void)didUnblockSystemAppForAlternateSystemApp;
-(void)alternateSystemAppWithBundleID:(id)arg1 failedToOpenWithResult:(id)arg2;
-(void)alternateSystemAppWithBundleID:(id)arg1 didExitWithReason:(unsigned long long)arg2;
-(void)alternateSystemAppWithBundleIDDidOpen:(id)arg1;
-(void)alternateSystemAppWithBundleIDDidTerminate:(id)arg1;

@end

