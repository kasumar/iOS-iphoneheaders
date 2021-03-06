/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/BulletinBoardPlugins/SocialBulletinBoardProvider.bundle/SocialBulletinBoardProvider
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SLUploadCompletionSession, NSString, NSArray;

@interface SLUploadService : NSObject {

	SLUploadCompletionSession* _session;
	NSString* _XPCServiceName;
	NSArray* _notificationNames;
	int _bulletinSubtype;
	NSString* _variantIconResourceName;

}

@property (retain) NSString * XPCServiceName;                          //@synthesize XPCServiceName=_XPCServiceName - In the implementation block
@property (retain) NSArray * notificationNames;                        //@synthesize notificationNames=_notificationNames - In the implementation block
@property (readonly) SLUploadCompletionSession * session; 
@property (readonly) int bulletinSubtype;                              //@synthesize bulletinSubtype=_bulletinSubtype - In the implementation block
@property (readonly) NSString * variantIconResourceName;               //@synthesize variantIconResourceName=_variantIconResourceName - In the implementation block
-(id)XPCServiceName;
-(int)bulletinSubtype;
-(void)setNotificationNames:(id)arg1 ;
-(id)notificationNames;
-(id)variantIconResourceName;
-(id)initWithXPCServiceName:(id)arg1 notificationNames:(id)arg2 bulletinSubtype:(int)arg3 variantIconResourceName:(id)arg4 ;
-(void)setXPCServiceName:(id)arg1 ;
-(id)session;
-(void).cxx_destruct;
@end

