/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate, BKJaliscoServerDatabase;

@interface BKJaliscoServerItem : NSManagedObject

@property (nonatomic,retain) NSString * storeID; 
@property (nonatomic,retain) NSString * artist; 
@property (nonatomic,retain) NSString * artworkTokenCode; 
@property (nonatomic,retain) NSString * artworkURLString; 
@property (nonatomic,retain) NSString * cloudID; 
@property (nonatomic,retain) NSString * genre; 
@property (nonatomic,retain) NSNumber * isHidden; 
@property (nonatomic,retain) NSDate * purchasedAt; 
@property (nonatomic,retain) NSString * purchasedTokenCode; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSNumber * isExplicit; 
@property (nonatomic,retain) NSNumber * isDisabled; 
@property (nonatomic,retain) NSDate * expectedDate; 
@property (nonatomic,retain) NSString * sortedTitle; 
@property (nonatomic,retain) NSString * sortedAuthor; 
@property (nonatomic,retain) NSNumber * pageProgressionDirection; 
@property (nonatomic,retain) NSString * version; 
@property (nonatomic,retain) NSString * displayVersion; 
@property (nonatomic,retain) NSString * storeDownloadParameters; 
@property (nonatomic,retain) BKJaliscoServerDatabase * database; 
@property (nonatomic,retain) NSString * fileExtension; 
+(id)allStoreIDsInManagedObjectContext:(id)arg1 ;
+(id)artworkQueue;
+(id)imageCache;
-(id)initIntoManagedObjectContext:(id)arg1 ;
-(id)artworkImageWithCompletionHandler:(/*^block*/id)arg1 ;
@end

