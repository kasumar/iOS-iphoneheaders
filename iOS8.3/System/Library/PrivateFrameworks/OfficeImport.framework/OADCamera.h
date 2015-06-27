/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {

	OADRotation3D* mRotation;
	int mCameraType;
	float mFieldOfView;
	float mZoom;

}
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRotation:(id)arg1 ;
-(id)rotation;
-(void)setZoom:(float)arg1 ;
-(float)zoom;
-(void)setCameraType:(int)arg1 ;
-(void)setFieldOfView:(float)arg1 ;
-(int)cameraType;
-(float)fieldOfView;
@end
