/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/atc
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSDownloadHandlerDelegate <NSObject>
@optional
-(void)downloadHandlerDidDisconnect:(id)arg1;
-(void)downloadHandler:(id)arg1 handleSession:(id)arg2;
-(void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
-(BOOL)downloadHandler:(id)arg1 pauseSession:(id)arg2;
-(void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2;
@end

