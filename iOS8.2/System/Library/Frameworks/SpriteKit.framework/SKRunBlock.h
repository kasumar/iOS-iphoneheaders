/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface SKRunBlock : SKAction {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)runBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(id)reversedAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

