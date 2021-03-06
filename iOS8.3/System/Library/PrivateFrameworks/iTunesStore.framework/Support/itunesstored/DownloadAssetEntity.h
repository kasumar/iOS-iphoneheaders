/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray;

@interface DownloadAssetEntity : SSSQLiteEntity

@property (nonatomic,readonly) NSArray * sinfs; 
+(id)newDownloadKeyCookieWithValue:(id)arg1 URL:(id)arg2 ;
+(id)copyDatabaseDictionaryWithRequestProperties:(id)arg1 ;
+(void)initialize;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(Class)memoryEntityClass;
-(id)copyStoreDownloadKeyCookie;
-(id)copyURLRequestProperties;
-(NSArray *)sinfs;
-(char)deleteFromDatabase;
@end

