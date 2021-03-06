/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IKStyleFactory, NSMutableDictionary;

@interface IKViewElementStyleFactory : NSObject {

	IKStyleFactory* _styleFactory;
	NSMutableDictionary* _styleByITMLID;

}

@property (nonatomic,retain,readonly) IKStyleFactory * styleFactory;                    //@synthesize styleFactory=_styleFactory - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * styleByITMLID;              //@synthesize styleByITMLID=_styleByITMLID - In the implementation block
-(id)initWithDocumentStyles:(id)arg1 ;
-(IKStyleFactory *)styleFactory;
-(id)styleForElement:(id)arg1 classSelector:(id)arg2 inlineStyle:(id)arg3 ;
-(NSMutableDictionary *)styleByITMLID;
@end

