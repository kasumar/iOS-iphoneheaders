/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/NSCopying.h>

@class NSNumber, NSString, NSURL;

@interface SKUISearchRequest : NSObject <NSCopying> {

	NSNumber* _searchHintIndex;
	NSString* _searchHintOriginalTerm;
	NSString* _term;
	NSURL* _url;

}

@property (nonatomic,copy) NSNumber * searchHintIndex;                     //@synthesize searchHintIndex=_searchHintIndex - In the implementation block
@property (nonatomic,copy) NSString * searchHintOriginalTerm;              //@synthesize searchHintOriginalTerm=_searchHintOriginalTerm - In the implementation block
@property (nonatomic,copy) NSString * term;                                //@synthesize term=_term - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                    //@synthesize url=_url - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)term;
-(void)setTerm:(NSString *)arg1 ;
-(void)setSearchHintOriginalTerm:(NSString *)arg1 ;
-(void)setSearchHintIndex:(NSNumber *)arg1 ;
-(NSNumber *)searchHintIndex;
-(NSString *)searchHintOriginalTerm;
@end

