/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/NSCopying.h>

@interface RadioRequestContext : NSObject <NSCopying> {

	BOOL _usesLocalNetworking;

}

@property (assign,nonatomic) BOOL usesLocalNetworking;              //@synthesize usesLocalNetworking=_usesLocalNetworking - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)usesLocalNetworking;
-(void)setUsesLocalNetworking:(BOOL)arg1 ;
@end
