/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class NSMutableDictionary;

@interface OADColorScheme : NSObject <NSCopying> {

	NSMutableDictionary* mColors;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addColor:(id)arg1 index:(int)arg2 ;
-(id)colorForIndex:(int)arg1 ;
-(unsigned long long)colorCount;
-(void)setColor:(id)arg1 index:(int)arg2 ;
-(void)addDefaultColors;
@end

