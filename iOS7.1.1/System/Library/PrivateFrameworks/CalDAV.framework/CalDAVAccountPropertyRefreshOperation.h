/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVOperation.h>

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {

	bool _fetchPrincipalSearchProperties;

}

@property (assign,nonatomic,@dynamic) <CalDAVAccountPropertyRefreshDelegate> * delegate; 
@property (assign) bool fetchPrincipalSearchProperties;                                               //@synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties - In the implementation block
-(void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2 ;
-(bool)fetchPrincipalSearchProperties;
-(void)setFetchPrincipalSearchProperties:(bool)arg1 ;
-(void)refreshProperties;
@end

