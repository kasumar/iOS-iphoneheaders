/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:30 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/NSCopying.h>

@class NSMutableArray;

@interface SBAppSwitcherServices : NSObject <NSCopying> {

	NSMutableArray* _services;

}

@property (nonatomic,readonly) NSMutableArray * services;              //@synthesize services=_services - In the implementation block
-(id)serviceForBundleIdentifier:(id)arg1 ;
-(id)serviceBundleIdentifiers;
-(id)initWithServices:(id)arg1 zone:(NSZone*)arg2 ;
-(id)displayItems;
-(id)serviceAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addService:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(NSMutableArray *)services;
@end

