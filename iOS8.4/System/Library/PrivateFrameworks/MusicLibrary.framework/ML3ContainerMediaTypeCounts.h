/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3ContainerMediaTypeCounts : NSObject {

	CFDictionaryRef _map;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(void)setCount:(unsigned long long)arg1 ;
-(void)addMediaType:(unsigned)arg1 count:(unsigned long long)arg2 ;
-(void)enumerateMediaTypesWithBlock:(/*^block*/id)arg1 ;
@end
