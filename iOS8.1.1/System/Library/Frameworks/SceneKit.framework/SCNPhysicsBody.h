/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/NSCopying.h>
#import <SceneKit/NSSecureCoding.h>

@class SCNNode, SCNPhysicsShape;

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding> {

	id _reserved;
	SCNNode* _node;
	double _mass;
	double _charge;
	double _friction;
	double _restitution;
	double _rollingFriction;
	SCNPhysicsShape* _physicsShape;
	long long _type;
	double _damping;
	SCNVector4 _angularVelocity;
	double _angularDamping;
	SCNVector3 _velocityFactor;
	SCNVector3 _angularVelocityFactor;
	SCNVector3 _velocity;
	unsigned long long _categoryBitMask;
	unsigned long long _collisionBitMask;
	BOOL _resting;
	BOOL _allowsResting;
	BOOL _isDefaultShape;
	btRigidBody* _body;

}

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double charge; 
@property (assign,nonatomic) double friction; 
@property (assign,nonatomic) double restitution; 
@property (assign,nonatomic) double rollingFriction; 
@property (nonatomic,retain) SCNPhysicsShape * physicsShape; 
@property (nonatomic,readonly) BOOL isResting; 
@property (assign,nonatomic) BOOL allowsResting; 
@property (assign,nonatomic) SCNVector3 velocity; 
@property (assign,nonatomic) SCNVector4 angularVelocity; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double angularDamping; 
@property (assign,nonatomic) SCNVector3 velocityFactor; 
@property (assign,nonatomic) SCNVector3 angularVelocityFactor; 
@property (assign,nonatomic) unsigned long long categoryBitMask; 
@property (assign,nonatomic) unsigned long long collisionBitMask; 
+(id)SCNJSExportProtocol;
+(id)bodyWithType:(long long)arg1 shape:(id)arg2 ;
+(id)staticBody;
+(id)dynamicBody;
+(id)kinematicBody;
+(BOOL)supportsSecureCoding;
-(void)_removeOwner;
-(void)_setOwner:(id)arg1 ;
-(id)_owner;
-(btRigidBody*)_handle;
-(C3DSceneRef)sceneRef;
-(btRigidBody*)_createBody;
-(id)initWithType:(long long)arg1 shape:(id)arg2 ;
-(void)moveToTransform:(SCNMatrix4)arg1 ;
-(void)applyForce:(SCNVector3)arg1 impulse:(BOOL)arg2 ;
-(void)applyForce:(SCNVector3)arg1 atPosition:(SCNVector3)arg2 impulse:(BOOL)arg3 ;
-(void)applyTorque:(SCNVector4)arg1 impulse:(BOOL)arg2 ;
-(void)clearAllForces;
-(double)rollingFriction;
-(void)setRollingFriction:(double)arg1 ;
-(SCNPhysicsShape *)physicsShape;
-(void)setPhysicsShape:(SCNPhysicsShape *)arg1 ;
-(BOOL)allowsResting;
-(void)setAllowsResting:(BOOL)arg1 ;
-(SCNVector3)velocityFactor;
-(void)setVelocityFactor:(SCNVector3)arg1 ;
-(SCNVector3)angularVelocityFactor;
-(void)setAngularVelocityFactor:(SCNVector3)arg1 ;
-(void)_didDecodeSCNPhysicsBody:(id)arg1 ;
-(void)_activate;
-(void)resetToTransform:(SCNMatrix4)arg1 ;
-(void)moveToPosition:(SCNVector3)arg1 ;
-(void)rotateToAxisAngle:(SCNVector4)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copy;
-(void)setVelocity:(SCNVector3)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(double)charge;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCharge:(double)arg1 ;
-(double)damping;
-(void)setFriction:(double)arg1 ;
-(void)setRestitution:(double)arg1 ;
-(double)friction;
-(void)setAngularDamping:(double)arg1 ;
-(SCNVector3)velocity;
-(SCNVector4)angularVelocity;
-(void)setAngularVelocity:(SCNVector4)arg1 ;
-(double)restitution;
-(double)angularDamping;
-(double)mass;
-(void)resetTransform;
-(unsigned long long)collisionBitMask;
-(void)setCollisionBitMask:(unsigned long long)arg1 ;
-(unsigned long long)categoryBitMask;
-(void)setCategoryBitMask:(unsigned long long)arg1 ;
-(BOOL)isResting;
@end
