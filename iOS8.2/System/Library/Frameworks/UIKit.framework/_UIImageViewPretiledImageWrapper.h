/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, _UIImageViewPretiledImageCacheKey;

@interface _UIImageViewPretiledImageWrapper : NSObject {

	UIImage* _pretiledImage;
	_UIImageViewPretiledImageCacheKey* _cacheKey;

}

@property (nonatomic,readonly) UIImage * pretiledImage;              //@synthesize pretiledImage=_pretiledImage - In the implementation block
+(id)cacheValueWithPretiledImage:(id)arg1 cacheKey:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(UIImage *)pretiledImage;
@end

