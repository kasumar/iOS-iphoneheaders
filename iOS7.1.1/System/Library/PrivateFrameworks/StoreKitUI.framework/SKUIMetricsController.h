/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSNumber, SKUIMetricsImpressionSession, NSString, SSMetricsController, SSMetricsConfiguration, NSObject;

@interface SKUIMetricsController : NSObject {

	NSNumber* _accountID;
	SKUIMetricsImpressionSession* _activeImpressionsSession;
	NSString* _applicationIdentifier;
	SSMetricsController* _controller;
	bool _flushesImmediately;
	SSMetricsConfiguration* _globalConfiguration;
	bool _impressionsEnabled;
	NSObject<OS_dispatch_source>* _impressionsTimer;
	bool _loggingEnabled;
	SSMetricsConfiguration* _pageConfiguration;
	NSString* _pageContext;
	NSString* _pageURL;
	NSString* _topic;
	NSString* _userAgent;
	NSString* _windowOrientation;

}

@property (nonatomic,readonly) SKUIMetricsImpressionSession * activeImpressionsSession; 
@property (nonatomic,readonly) double flushInterval; 
@property (nonatomic,readonly) SSMetricsConfiguration * globalConfiguration;                         //@synthesize globalConfiguration=_globalConfiguration - In the implementation block
@property (nonatomic,retain) SSMetricsConfiguration * pageConfiguration;                             //@synthesize pageConfiguration=_pageConfiguration - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                                             //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                                         //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pageContext;                                                   //@synthesize pageContext=_pageContext - In the implementation block
@property (nonatomic,copy) NSString * pageURL;                                                       //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy) NSString * topic;                                                         //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                                                     //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,copy) NSString * windowOrientation;                                             //@synthesize windowOrientation=_windowOrientation - In the implementation block
+(void)flushImmediately;
-(void)flushImmediately;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)applicationIdentifier;
-(void)setPageURL:(id)arg1 ;
-(id)pageURL;
-(void).cxx_destruct;
-(void)setUserAgent:(id)arg1 ;
-(void)setTopic:(id)arg1 ;
-(id)topic;
-(id)accountIdentifier;
-(void)recordEvent:(id)arg1 ;
-(void)setWindowOrientation:(id)arg1 ;
-(void)setPageConfiguration:(id)arg1 ;
-(void)setPageContext:(id)arg1 ;
-(void)pingURLs:(id)arg1 withClientContext:(id)arg2 ;
-(id)activeImpressionsSession;
-(id)itemOfferClickEventWithItem:(id)arg1 locationPosition:(long long)arg2 ;
-(id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3 ;
-(id)locationWithPageComponent:(id)arg1 ;
-(id)performActionForItem:(id)arg1 clientContext:(id)arg2 ;
-(bool)canRecordEventWithType:(id)arg1 ;
-(id)clickEventWithItem:(id)arg1 locationPosition:(long long)arg2 ;
-(id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 ;
-(void)setApplicationIdentifier:(id)arg1 ;
-(id)initWithGlobalConfiguration:(id)arg1 ;
-(id)performActionForItem:(id)arg1 ;
-(void)closeImpressionsSession;
-(void)_recordActiveImpressions;
-(id)compoundStringWithElements:(id)arg1 ;
-(void)_insertEvent:(id)arg1 ;
-(id)tokenStringWithElements:(id)arg1 ;
-(double)flushInterval;
-(void)pingURLs:(id)arg1 ;
-(void)recordBuyConfirmedEventsForItems:(id)arg1 purchaseResponses:(id)arg2 ;
-(void)_waitUntilRecordingComplete;
-(id)globalConfiguration;
-(id)pageConfiguration;
-(id)pageContext;
-(id)windowOrientation;
-(id)userAgent;
@end

