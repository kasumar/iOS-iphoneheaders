/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL, NSMutableDictionary, NSData, NSDictionary;

@interface MBURLRequest : NSObject {

	NSString* _method;
	NSURL* _URL;
	NSMutableDictionary* _headers;
	NSData* _data;
	BOOL _MMePreAuth;
	BOOL _log;

}

@property (nonatomic,retain) NSString * method;                                 //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,retain) NSData * data;                                     //@synthesize data=_data - In the implementation block
@property (assign,getter=useMMePreAuth,nonatomic) BOOL MMePreAuth;              //@synthesize MMePreAuth=_MMePreAuth - In the implementation block
@property (assign,getter=shouldLog,nonatomic) BOOL log;                         //@synthesize log=_log - In the implementation block
+(id)requestWithMethod:(id)arg1 URL:(id)arg2 ;
+(id)requestWithURL:(id)arg1 ;
+(id)request;
-(id)NSURLRequest;
-(void)setValue:(id)arg1 forHeader:(id)arg2 ;
-(BOOL)useMMePreAuth;
-(void)setMMePreAuth:(BOOL)arg1 ;
-(void)setLog:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)method;
-(BOOL)shouldLog;
-(void)setMethod:(id)arg1 ;
-(id)headers;
-(void)setHeaders:(id)arg1 ;
@end

