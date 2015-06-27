/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MPAction.h>
#import <iLifeSlideshow/MPActionSupport.h>

@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport> {

	NSMutableArray* _actions;

}
+(id)actionGroup;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)removeAllActions;
-(void)addAction:(id)arg1 ;
-(void)addActions:(id)arg1 ;
-(void)configureTarget;
-(void)copyActions:(id)arg1 ;
-(void)insertActions:(id)arg1 atIndex:(int)arg2 ;
-(void)configureAction:(id)arg1 atIndex:(int)arg2 ;
-(void)removeActionsAtIndices:(id)arg1 ;
-(void)insertAction:(id)arg1 atIndex:(int)arg2 ;
-(unsigned)numberOfActions;
@end
