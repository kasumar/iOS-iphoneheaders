/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <UITriggerVC/NSCopying.h>

@class NSMutableArray;

@interface CSLUIPBUIPluginListResponse : PBCodable <NSCopying> {

	NSMutableArray* _names;
	NSMutableArray* _usages;

}

@property (nonatomic,retain) NSMutableArray * names;               //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * usages;              //@synthesize usages=_usages - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)namesCount;
-(NSMutableArray *)names;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)addName:(id)arg1 ;
-(void)clearNames;
-(id)nameAtIndex:(unsigned long long)arg1 ;
-(void)setUsages:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addUsage:(id)arg1 ;
-(unsigned long long)usagesCount;
-(void)clearUsages;
-(id)usageAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)usages;
@end
