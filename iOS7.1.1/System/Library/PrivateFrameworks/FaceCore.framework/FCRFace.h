/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@class NSData, NSDictionary;

@interface FCRFace : NSObject {

	SCD_Struct_FC3 face;
	SCD_Struct_FC3 leftEye;
	SCD_Struct_FC3 rightEye;
	SCD_Struct_FC3 mouth;
	double faceSize;
	double faceAngle;
	long long trackID;
	unsigned long long trackDuration;
	NSData* faceprint;
	int faceType;
	NSDictionary* faceLandmarkPoints;
	NSDictionary* expressionFeatures;

}

@property (assign) SCD_Struct_FC3 face; 
@property (assign) SCD_Struct_FC3 leftEye; 
@property (assign) SCD_Struct_FC3 rightEye; 
@property (assign) SCD_Struct_FC3 mouth; 
@property (assign) double faceSize; 
@property (assign) double faceAngle; 
@property (assign) long long trackID; 
@property (assign) unsigned long long trackDuration; 
@property (retain) NSData * faceprint; 
@property (assign) int faceType; 
@property (retain) NSDictionary * faceLandmarkPoints; 
@property (retain) NSDictionary * expressionFeatures; 
@property (readonly) bool hasLeftEyeBounds; 
@property (readonly) bool hasRightEyeBounds; 
@property (readonly) bool hasMouthBounds; 
-(void)setTrackID:(long long)arg1 ;
-(id)expressionFeatures;
-(SCD_Struct_FC3)leftEye;
-(SCD_Struct_FC3)rightEye;
-(SCD_Struct_FC3)mouth;
-(double)faceAngle;
-(unsigned long long)trackDuration;
-(void)setFaceAngle:(double)arg1 ;
-(long long)trackID;
-(void)dealloc;
-(bool)hasLeftEyeBounds;
-(bool)hasRightEyeBounds;
-(bool)hasMouthBounds;
-(void)setExpressionFeatures:(id)arg1 ;
-(id)faceLandmarkPoints;
-(void)setFaceLandmarkPoints:(id)arg1 ;
-(void)setFaceSize:(double)arg1 ;
-(int)faceType;
-(void)setFaceType:(int)arg1 ;
-(id)faceprint;
-(void)setFaceprint:(id)arg1 ;
-(void)setLeftEye:(SCD_Struct_FC3)arg1 ;
-(void)setMouth:(SCD_Struct_FC3)arg1 ;
-(void)setRightEye:(SCD_Struct_FC3)arg1 ;
-(void)setTrackDuration:(unsigned long long)arg1 ;
-(double)faceSize;
-(SCD_Struct_FC3)face;
-(void)setFace:(SCD_Struct_FC3)arg1 ;
@end

