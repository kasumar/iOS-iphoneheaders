/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:09:07 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SCNNode;

@interface SCNIKJoint : NSObject {

	SCNNode* joint;
	float maxAllowedRotationAngle;

}

@property (assign,nonatomic,__weak) SCNNode * joint; 
@property (assign,nonatomic) float maxAllowedRotationAngle; 
-(SCNNode *)joint;
-(void)setJoint:(SCNNode *)arg1 ;
-(float)maxAllowedRotationAngle;
-(void)setMaxAllowedRotationAngle:(float)arg1 ;
@end
