/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPFontCacheValue : NSObject {

	CTFontRef _ctFont;

}

@property (nonatomic,readonly) CTFontRef ctFont;              //@synthesize ctFont=_ctFont - In the implementation block
+(id)cacheValueWithCTFont:(CTFontRef)arg1 ;
-(CTFontRef)ctFont;
-(id)initWithCTFont:(CTFontRef)arg1 ;
-(void)dealloc;
@end

