/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/NSCopying.h>
#import <CoreMotion/NSSecureCoding.h>

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) SCD_Struct_CM8 rotationMatrix; 
@property (nonatomic,readonly) SCD_Struct_CM7 quaternion; 
+(char)supportsSecureCoding;
-(_GLKQuaternion)GLKQuaternion;
-(id)initWithQuaternion:(SCD_Struct_CM7)arg1 ;
-(SCD_Struct_CM8)rotationMatrix;
-(void)multiplyByInverseOfAttitude:(id)arg1 ;
-(void)setQuaternion:(SCD_Struct_CM7)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CM7)quaternion;
-(double)pitch;
-(double)yaw;
-(double)roll;
@end

