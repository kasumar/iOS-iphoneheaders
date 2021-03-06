/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:38:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKContainer, NSOperationQueue;

@interface CKDatabase : NSObject {

	CKContainer* _container;
	int _scope;
	NSOperationQueue* _operationQueue;
	int _statusReportToken;

}

@property (assign,nonatomic,__weak) CKContainer * container;                   //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) int scope;                                        //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) int statusReportToken;                            //@synthesize statusReportToken=_statusReportToken - In the implementation block
-(id)_initWithContainer:(id)arg1 scope:(int)arg2 ;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(int)statusReportToken;
-(void)setStatusReportToken:(int)arg1 ;
-(void)clearRecordCache;
-(void)clearAuthTokensForRecordWithID:(id)arg1 ;
-(void)getPCSDiagnosticsForZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_scheduleOperation:(id)arg1 ;
-(void)fetchRecordWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteRecordWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchAllRecordZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveSubscription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSubscriptionWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllSubscriptionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchAllSharesWithRecordZoneID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchShareWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteShareWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptShareWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setContainer:(CKContainer *)arg1 ;
-(CKContainer *)container;
-(void)addOperation:(id)arg1 ;
-(void)setScope:(int)arg1 ;
-(int)scope;
-(NSOperationQueue *)operationQueue;
-(id)statusReport;
-(void)clearAssetCache;
-(id)CKPropertiesDescription;
-(void)saveRecordZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchSubscriptionWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

