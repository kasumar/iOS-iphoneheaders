/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NKIssue, NSString, NSData, NSURLRequest, NSURLConnection, NSDictionary;

@interface NKAssetDownload : NSObject {

	NKIssue* _issue;
	NSString* _identifier;
	NSData* _userInfoData;
	NSURLRequest* _request;
	NSURLConnection* _connection;
	bool _attemptedConnection;
	bool _isDecodingValid;

}

@property (assign) NKIssue * issue;                           //@synthesize issue=_issue - In the implementation block
@property (copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSDictionary * userInfo; 
@property (copy) NSURLRequest * URLRequest;                   //@synthesize request=_request - In the implementation block
@property (retain) NSData * userInfoData;                     //@synthesize userInfoData=_userInfoData - In the implementation block
@property (retain) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign) bool attemptedConnection;                  //@synthesize attemptedConnection=_attemptedConnection - In the implementation block
-(id)URLRequest;
-(bool)_attemptedConnection;
-(bool)_isDecodingValid;
-(void)_issueWasRemovedFromLibrary;
-(void)_setIssue:(id)arg1 ;
-(id)_initWithURLRequest:(id)arg1 issue:(id)arg2 ;
-(void)setIssue:(id)arg1 ;
-(void)setUserInfoData:(id)arg1 ;
-(id)userInfoData;
-(id)issue;
-(bool)attemptedConnection;
-(void)_connectionBackgroundDownloadPreCompleted:(id)arg1 ;
-(void)_connectionBackgroundDownloadPostCompleted:(id)arg1 ;
-(void)setAttemptedConnection:(bool)arg1 ;
-(id)downloadWithDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)userInfo;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)connection;
-(id)_connection;
-(void)_cancel;
-(void)setConnection:(id)arg1 ;
-(void)setURLRequest:(id)arg1 ;
@end

