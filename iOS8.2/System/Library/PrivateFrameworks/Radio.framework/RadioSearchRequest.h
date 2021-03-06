/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, SSMetricsConfiguration, SSMetricsPageEvent;

@interface RadioSearchRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	char _excludeFeaturedStations;
	char _shouldProcessCategories;
	NSString* _searchTerm;
	int _searchCategory;
	unsigned _numberOfSearchResults;
	unsigned _searchResultsOffset;
	SSMetricsConfiguration* _metricsConfiguration;
	SSMetricsPageEvent* _metricsPageEvent;

}

@property (nonatomic,readonly) NSString * searchTerm;                                             //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) int searchCategory;                                                  //@synthesize searchCategory=_searchCategory - In the implementation block
@property (assign,nonatomic) unsigned numberOfSearchResults;                                      //@synthesize numberOfSearchResults=_numberOfSearchResults - In the implementation block
@property (assign,nonatomic) unsigned searchResultsOffset;                                        //@synthesize searchResultsOffset=_searchResultsOffset - In the implementation block
@property (assign,nonatomic) char excludeFeaturedStations;                                        //@synthesize excludeFeaturedStations=_excludeFeaturedStations - In the implementation block
@property (assign,nonatomic) char shouldProcessCategories;                                        //@synthesize shouldProcessCategories=_shouldProcessCategories - In the implementation block
@property (nonatomic,retain,readonly) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,copy,readonly) SSMetricsPageEvent * metricsPageEvent;                        //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
-(NSString *)searchTerm;
-(unsigned)numberOfSearchResults;
-(void)cancel;
-(id)init;
-(id)description;
-(char)shouldProcessCategories;
-(void)setExcludeFeaturedStations:(char)arg1 ;
-(void)setShouldProcessCategories:(char)arg1 ;
-(void)startWithSearchCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned)searchResultsOffset;
-(int)searchCategory;
-(id)initWithSearchTerm:(id)arg1 ;
-(void)setSearchCategory:(int)arg1 ;
-(void)setSearchResultsOffset:(unsigned)arg1 ;
-(char)excludeFeaturedStations;
-(SSMetricsPageEvent *)metricsPageEvent;
-(SSMetricsConfiguration *)metricsConfiguration;
-(void)setNumberOfSearchResults:(unsigned)arg1 ;
@end

