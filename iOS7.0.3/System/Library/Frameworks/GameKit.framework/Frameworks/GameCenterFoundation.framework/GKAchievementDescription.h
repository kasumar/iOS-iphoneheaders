/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class GKAchievementInternal, UIImage, NSString;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding> {

	GKAchievementInternal* _internal;
	UIImage* _image;

}

@property (nonatomic,@dynamic,readonly) NSString * identifier; 
@property (nonatomic,@dynamic,readonly) NSString * groupIdentifier; 
@property (nonatomic,@dynamic,readonly) NSString * title; 
@property (nonatomic,@dynamic,readonly) NSString * achievedDescription; 
@property (nonatomic,@dynamic,readonly) NSString * unachievedDescription; 
@property (nonatomic,@dynamic,readonly) int maximumPoints; 
@property (getter=isHidden,nonatomic,@dynamic,readonly) BOOL hidden; 
@property (getter=isReplayable,nonatomic,@dynamic,readonly) BOOL replayable; 
@property (nonatomic,retain) UIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (retain) GKAchievementInternal * internal;                                      //@synthesize internal=_internal - In the implementation block
+(void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)loadAchievementDescriptionsWithCompletionHandler:(/*^block*/ id)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(void)setInternal:(id)arg1 ;
-(id)internal;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)image;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

