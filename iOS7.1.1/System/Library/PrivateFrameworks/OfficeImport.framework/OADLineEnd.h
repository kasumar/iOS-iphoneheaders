/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <CoreFoundation/NSCopying.h>

@interface OADLineEnd : OADProperties <NSCopying> {

	unsigned char mType;
	unsigned char mWidth;
	unsigned char mLength;
	unsigned mIsTypeOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsLengthOverridden : 1;

}
+(id)defaultProperties;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)length;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)width;
-(void)setLength:(int)arg1 ;
-(void)setWidth:(int)arg1 ;
-(bool)isWidthOverridden;
-(id)initWithType:(int)arg1 width:(int)arg2 length:(int)arg3 ;
-(id)initWithDefaults;
-(bool)isTypeOverridden;
-(bool)isLengthOverridden;
@end

