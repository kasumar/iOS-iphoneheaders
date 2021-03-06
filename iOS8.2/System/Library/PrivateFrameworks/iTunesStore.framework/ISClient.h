/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSLock;

@interface ISClient : NSObject {

	NSString* _appleClientApplication;
	NSString* _appleClientVersions;
	NSString* _identifier;
	NSLock* _lock;
	NSString* _partnerHeader;
	NSString* _userAgent;

}

@property (copy) NSString * appleClientApplication; 
@property (copy) NSString * userAgent; 
@property (readonly) NSString * appleClientVersions; 
@property (copy) NSString * identifier; 
@property (copy) NSString * partnerHeader; 
+(id)currentClient;
-(NSString *)userAgent;
-(void)dealloc;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)appleClientApplication;
-(NSString *)appleClientVersions;
-(void)setPartnerHeader:(NSString *)arg1 ;
-(void)_softwareMapInvalidatedNotification:(id)arg1 ;
-(id)_appleClientVersions;
-(id)localStoreFrontID;
-(NSString *)partnerHeader;
-(void)setAppleClientApplication:(NSString *)arg1 ;
@end

