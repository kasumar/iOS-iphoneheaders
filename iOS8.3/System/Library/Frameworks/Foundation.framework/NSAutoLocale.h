/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:23 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSLocale.h>

@class NSLocale;

@interface NSAutoLocale : NSLocale {

	NSLocale* loc;

}
+(char)supportsSecureCoding;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(id)_prefs;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(void)_update:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
@end
