/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISPropertyListProvider, NSDictionary;

@interface ISProcessPropertyListOperation : ISOperation {

	ISPropertyListProvider* _dataProvider;
	NSDictionary* _propertyList;

}

@property (retain) ISPropertyListProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
-(id)initWithPropertyList:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(void)setDataProvider:(ISPropertyListProvider *)arg1 ;
-(ISPropertyListProvider *)dataProvider;
@end
