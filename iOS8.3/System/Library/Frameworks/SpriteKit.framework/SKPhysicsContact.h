/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:16:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@class SKPhysicsBody;

@interface SKPhysicsContact : NSObject {

	SKPhysicsBody* _bodyA;
	SKPhysicsBody* _bodyB;
	float _collisionImpulse;
	CGPoint _contactPoint;
	CGVector _contactNormal;

}

@property (nonatomic,readonly) SKPhysicsBody * bodyA;               //@synthesize bodyA=_bodyA - In the implementation block
@property (nonatomic,readonly) SKPhysicsBody * bodyB;               //@synthesize bodyB=_bodyB - In the implementation block
@property (nonatomic,readonly) CGPoint contactPoint;                //@synthesize contactPoint=_contactPoint - In the implementation block
@property (nonatomic,readonly) CGVector contactNormal;              //@synthesize contactNormal=_contactNormal - In the implementation block
@property (nonatomic,readonly) float collisionImpulse;              //@synthesize collisionImpulse=_collisionImpulse - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)copyWithZone:(NSZone*)arg1 ;
-(CGVector)contactNormal;
-(float)collisionImpulse;
-(SKPhysicsBody *)bodyA;
-(SKPhysicsBody *)bodyB;
-(CGPoint)contactPoint;
@end

