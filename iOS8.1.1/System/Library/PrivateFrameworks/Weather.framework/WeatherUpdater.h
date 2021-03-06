/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WeatherXMLHTTPRequest.h>

@protocol WeatherUpdaterDelegate;
@class NSMutableArray;

@interface WeatherUpdater : WeatherXMLHTTPRequest {

	NSMutableArray* _updatingCities;
	NSMutableArray* _pendingCities;
	id<WeatherUpdaterDelegate> _delegate;
	/*^block*/id _weatherCompletionUpdaterHandler;

}

@property (nonatomic,copy) id weatherCompletionUpdaterHandler;              //@synthesize weatherCompletionUpdaterHandler=_weatherCompletionUpdaterHandler - In the implementation block
-(void)failWithError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)aggregateDictionaryDomain;
-(BOOL)isUpdatingCity:(id)arg1 ;
-(void)_updateNextPendingCity;
-(void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2 ;
-(void)_failed:(unsigned long long)arg1 ;
-(void)processDocument:(xmlDoc*)arg1 ;
-(void)didProcessDocument;
-(id)weatherCompletionUpdaterHandler;
-(void)parsedResultCity:(id)arg1 ;
-(void)handleNilCity;
-(void)failCity:(id)arg1 ;
-(void)runAndClearWeatherCompletionWithDetail:(unsigned long long)arg1 ;
-(BOOL)isDataValid:(id)arg1 ;
-(void)addUpdatingCity:(id)arg1 ;
-(void)removeAllUpdatingCities;
-(void)addCityToPendingQueue:(id)arg1 ;
-(void)loadRequestURL:(id)arg1 parameters:(id)arg2 ;
-(void)setWeatherCompletionUpdaterHandler:(id)arg1 ;
@end

