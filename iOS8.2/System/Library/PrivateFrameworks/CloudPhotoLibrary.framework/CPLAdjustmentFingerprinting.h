/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPLAdjustments, CPLResource;

@interface CPLAdjustmentFingerprinting : NSObject {

	char _hasRedEye;
	char _hasAutoEnhance;
	char _hasSimpleLightenDarken;
	char _hasOtherAdjustments;
	CPLAdjustments* _otherAdjustments;
	CPLResource* _baseImage;
	CPLResource* _largeAdjustmentData;
	CPLResource* _secondaryAdjustmentData;

}

@property (assign,nonatomic) char hasRedEye;                                     //@synthesize hasRedEye=_hasRedEye - In the implementation block
@property (assign,nonatomic) char hasAutoEnhance;                                //@synthesize hasAutoEnhance=_hasAutoEnhance - In the implementation block
@property (assign,nonatomic) char hasSimpleLightenDarken;                        //@synthesize hasSimpleLightenDarken=_hasSimpleLightenDarken - In the implementation block
@property (assign,nonatomic) char hasOtherAdjustments;                           //@synthesize hasOtherAdjustments=_hasOtherAdjustments - In the implementation block
@property (nonatomic,retain) CPLAdjustments * otherAdjustments;                  //@synthesize otherAdjustments=_otherAdjustments - In the implementation block
@property (nonatomic,retain) CPLResource * baseImage;                            //@synthesize baseImage=_baseImage - In the implementation block
@property (nonatomic,retain) CPLResource * largeAdjustmentData;                  //@synthesize largeAdjustmentData=_largeAdjustmentData - In the implementation block
@property (nonatomic,retain) CPLResource * secondaryAdjustmentData;              //@synthesize secondaryAdjustmentData=_secondaryAdjustmentData - In the implementation block
-(CPLResource *)baseImage;
-(id)similarToOriginalAdjustmentsFingerprint;
-(char)hasRedEye;
-(char)hasAutoEnhance;
-(char)hasSimpleLightenDarken;
-(CPLAdjustments *)otherAdjustments;
-(char)hasOtherAdjustments;
-(CPLResource *)largeAdjustmentData;
-(CPLResource *)secondaryAdjustmentData;
-(void)setHasRedEye:(char)arg1 ;
-(void)setHasAutoEnhance:(char)arg1 ;
-(void)setHasSimpleLightenDarken:(char)arg1 ;
-(void)setLargeAdjustmentData:(CPLResource *)arg1 ;
-(void)setSecondaryAdjustmentData:(CPLResource *)arg1 ;
-(void)setOtherAdjustments:(CPLAdjustments *)arg1 ;
-(void)setHasOtherAdjustments:(char)arg1 ;
-(void)setBaseImage:(CPLResource *)arg1 ;
-(id)otherAdjustmentsFingerprint;
@end

