/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface ISHashError : NSObject <NSCopying> {

	NSString* _actualHashString;
	NSString* _expectedHashString;
	long long _rangeEnd;
	long long _rangeStart;

}

@property (nonatomic,copy) NSString * actualHashString;                         //@synthesize actualHashString=_actualHashString - In the implementation block
@property (nonatomic,copy) NSString * expectedHashString;                       //@synthesize expectedHashString=_expectedHashString - In the implementation block
@property (nonatomic,readonly) NSString * hashFailureHeaderString; 
@property (assign,nonatomic) long long rangeEnd;                                //@synthesize rangeEnd=_rangeEnd - In the implementation block
@property (assign,nonatomic) long long rangeStart;                              //@synthesize rangeStart=_rangeStart - In the implementation block
-(long long)rangeStart;
-(long long)rangeEnd;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setActualHashString:(id)arg1 ;
-(void)setExpectedHashString:(id)arg1 ;
-(void)setRangeEnd:(long long)arg1 ;
-(void)setRangeStart:(long long)arg1 ;
-(id)hashFailureHeaderString;
-(id)actualHashString;
-(id)expectedHashString;
@end

