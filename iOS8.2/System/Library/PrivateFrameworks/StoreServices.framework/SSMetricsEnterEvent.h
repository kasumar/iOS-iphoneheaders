/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsEnterEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * enterType; 
@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
-(id)init;
-(id)description;
-(void)setReferringAppName:(NSString *)arg1 ;
-(void)setReferringURL:(NSString *)arg1 ;
-(NSString *)referringAppName;
-(NSString *)referringURL;
-(void)setEnterType:(NSString *)arg1 ;
-(NSString *)enterType;
-(void)setEnterTypeWithLaunchReason:(int)arg1 ;
@end
