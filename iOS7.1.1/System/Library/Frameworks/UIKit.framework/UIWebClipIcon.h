/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSURL;

@interface UIWebClipIcon : NSObject {

	bool _precomposed;
	bool _siteWide;
	CGSize _bestSize;
	NSURL* _url;

}

@property (assign,getter=isPrecomposed,nonatomic) bool precomposed;              //@synthesize precomposed=_precomposed - In the implementation block
@property (assign,getter=isSiteWide,nonatomic) bool siteWide;                    //@synthesize siteWide=_siteWide - In the implementation block
@property (assign,nonatomic) CGSize bestSize;                                    //@synthesize bestSize=_bestSize - In the implementation block
@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(bool)isSiteWide;
-(CGSize)bestSize;
-(bool)isPrecomposed;
-(long long)compare:(id)arg1 preferringDeviceIconSizes:(bool)arg2 ;
-(void)setPrecomposed:(bool)arg1 ;
-(void)setSiteWide:(bool)arg1 ;
-(void)setBestSize:(CGSize)arg1 ;
-(id)url;
-(void)setUrl:(id)arg1 ;
@end

