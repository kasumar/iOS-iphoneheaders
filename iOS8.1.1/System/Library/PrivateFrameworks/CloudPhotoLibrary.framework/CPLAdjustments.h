/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <CloudPhotoLibrary/NSSecureCoding.h>
#import <CloudPhotoLibrary/NSCopying.h>

@class NSString, NSData, CPLResource;

@interface CPLAdjustments : NSObject <NSSecureCoding, NSCopying> {

	NSString* _adjustmentType;
	NSString* _adjustmentCompoundVersion;
	NSString* _adjustmentCreatorCode;
	unsigned long long _adjustmentSourceType;
	NSData* _simpleAdjustmentData;
	NSString* _similarToOriginalAdjustmentsFingerprint;
	NSString* _otherAdjustmentsFingerprint;
	CPLResource* _adjustmentData;
	NSString* _creatorCode;

}

@property (nonatomic,copy) NSString * adjustmentType;                                       //@synthesize adjustmentType=_adjustmentType - In the implementation block
@property (nonatomic,copy) NSString * adjustmentCompoundVersion;                            //@synthesize adjustmentCompoundVersion=_adjustmentCompoundVersion - In the implementation block
@property (nonatomic,copy) NSString * adjustmentCreatorCode;                                //@synthesize adjustmentCreatorCode=_adjustmentCreatorCode - In the implementation block
@property (assign,nonatomic) unsigned long long adjustmentSourceType;                       //@synthesize adjustmentSourceType=_adjustmentSourceType - In the implementation block
@property (nonatomic,retain) NSData * simpleAdjustmentData;                                 //@synthesize simpleAdjustmentData=_simpleAdjustmentData - In the implementation block
@property (nonatomic,copy) NSString * similarToOriginalAdjustmentsFingerprint;              //@synthesize similarToOriginalAdjustmentsFingerprint=_similarToOriginalAdjustmentsFingerprint - In the implementation block
@property (nonatomic,copy) NSString * otherAdjustmentsFingerprint;                          //@synthesize otherAdjustmentsFingerprint=_otherAdjustmentsFingerprint - In the implementation block
@property (nonatomic,retain) CPLResource * adjustmentData;                                  //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (nonatomic,copy) NSString * creatorCode;                                          //@synthesize creatorCode=_creatorCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAdjustmentData:(CPLResource *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)similarToOriginalAdjustmentsFingerprint;
-(void)setSimilarToOriginalAdjustmentsFingerprint:(NSString *)arg1 ;
-(NSString *)creatorCode;
-(void)setCreatorCode:(NSString *)arg1 ;
-(CPLResource *)adjustmentData;
-(NSString *)adjustmentType;
-(void)setAdjustmentType:(NSString *)arg1 ;
-(void)setAdjustmentCompoundVersion:(NSString *)arg1 ;
-(void)setAdjustmentSourceType:(unsigned long long)arg1 ;
-(void)setAdjustmentCreatorCode:(NSString *)arg1 ;
-(void)setSimpleAdjustmentData:(NSData *)arg1 ;
-(NSString *)otherAdjustmentsFingerprint;
-(void)setOtherAdjustmentsFingerprint:(NSString *)arg1 ;
-(id)adjustmentSimpleDescription;
-(NSData *)simpleAdjustmentData;
-(NSString *)adjustmentCompoundVersion;
-(NSString *)adjustmentCreatorCode;
-(unsigned long long)adjustmentSourceType;
@end

