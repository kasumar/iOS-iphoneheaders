/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SKUISearchRelatedQuery : NSObject {

	NSString* _searchTerm;
	NSURL* _URL;

}

@property (nonatomic,copy) NSString * searchTerm;              //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,retain) NSURL * URL;                      //@synthesize URL=_URL - In the implementation block
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
@end
