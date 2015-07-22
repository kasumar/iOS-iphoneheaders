/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MapPluginUserLocationSO : NSObject {

	double latitude;
	double longitude;
	double altitude;
	double horizontalAccuracy;
	double verticalAccuracy;

}

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double altitude; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy; 
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(double)latitude;
-(double)longitude;
-(double)horizontalAccuracy;
-(double)verticalAccuracy;
-(double)altitude;
-(id)attributeKeys;
@end
