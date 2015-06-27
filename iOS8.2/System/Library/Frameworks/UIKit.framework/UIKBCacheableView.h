/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol UIKBCacheableView <NSObject>
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) char cacheDeferable; 
@property (nonatomic,readonly) float cachedWidth; 
@property (nonatomic,readonly) char keepNonPersistent; 
@optional
-(void)drawContentsOfRenderers:(id)arg1;

@required
-(NSString *)cacheKey;
-(float)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1;
-(char)cacheDeferable;
-(char)keepNonPersistent;

@end
