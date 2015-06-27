/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:43 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKDAccountInfoProvider <NSObject>
@optional
-(id)additionalHeaderValues;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;

@required
-(id)languageCode;
-(id)containerID;
-(id)bundleID;
-(id)applicationBundle;
-(char)isAnonymousAccount;
-(char)canAccessAccount;
-(void)fetchContainerScopedUserIDUsingBackgroundSession:(char)arg1 allowsCellularAccess:(char)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(char)isUnitTestingAccount;
-(id)serverPreferredPushEnvironment;
-(char)accountWantsPushRegistration;
-(id)config;
-(id)containerScopedUserID;
-(id)mescalSession;
-(id)trafficContainerIdentifier;
-(id)hardwareID;
-(id)regionCode;
-(id)enabledKeyboards;
-(void)renewAuthTokenWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchConfigurationUsingBackgroundSession:(char)arg1 allowsCellularAccess:(char)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)resetMescalSession;
-(void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)baseURLForServerType:(int)arg1 partitionType:(int)arg2;
-(void)fetchPublicURLUsingBackgroundSession:(char)arg1 allowsCellularAccess:(char)arg2 serverType:(int)arg3 completionHandler:(/*^block*/id)arg4;
-(id)dsid;
-(void)fetchDeviceIDUsingBackgroundSession:(char)arg1 allowsCellularAccess:(char)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(char)shouldFailAllTasks;
-(id)cloudKitAuthToken;
-(id)iCloudAuthToken;
-(id)deviceName;

@end
