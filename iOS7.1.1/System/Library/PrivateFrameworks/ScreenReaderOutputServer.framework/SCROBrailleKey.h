/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSMutableArray, NSString;

@interface SCROBrailleKey : NSObject <NSCoding> {

	NSMutableArray* _maskArray;
	NSString* _identifier;
	long long _routerIndex;
	long long _routerToken;
	long long _routerLocation;
	bool _hasRouterInfo;
	id _appToken;
	int _displayToken;

}
-(void)addSpacebarKeyMask;
-(void)addModifierMask:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)identifier;
-(id)keyMasks;
-(void)setDisplayToken:(int)arg1 ;
-(void)addKeyMask:(unsigned)arg1 ;
-(void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4 ;
-(int)displayToken;
-(bool)getRouterIndex:(long long*)arg1 token:(long long*)arg2 location:(long long*)arg3 appToken:(id*)arg4 ;
@end

