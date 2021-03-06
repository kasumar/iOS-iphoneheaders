/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray;

@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {

	UIEdgeInsets _contentInset;
	double _arrowHeight;
	CGSize _preferredContentSize;
	unsigned long long _preferredArrowDirections;
	CGRect _containingFrame;
	UIEdgeInsets _containingFrameInsets;
	CGRect _targetRect;
	bool _constrainToTargetRect;
	CGRect _frame;
	double _offset;
	unsigned long long _arrowDirection;
	bool _preferLandscapeOrientations;
	bool _updatesEnabled;
	NSMutableArray* _candidates;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) double arrowHeight;                                                                 //@synthesize arrowHeight=_arrowHeight - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                                                        //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) unsigned long long preferredArrowDirections;                                        //@synthesize preferredArrowDirections=_preferredArrowDirections - In the implementation block
@property (assign,nonatomic) CGRect containingFrame;                                                             //@synthesize containingFrame=_containingFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets containingFrameInsets;                                                 //@synthesize containingFrameInsets=_containingFrameInsets - In the implementation block
@property (assign,nonatomic) CGRect targetRect;                                                                  //@synthesize targetRect=_targetRect - In the implementation block
@property (assign,nonatomic) bool constrainToTargetRect;                                                         //@synthesize constrainToTargetRect=_constrainToTargetRect - In the implementation block
@property (assign,nonatomic) bool preferLandscapeOrientations;                                                   //@synthesize preferLandscapeOrientations=_preferLandscapeOrientations - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                                                     //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) double offset;                                                                    //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long arrowDirection;                                                //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (assign,setter=_setUpdatesEnabled:,getter=_updatesEnabled,nonatomic) bool updatesEnabled;              //@synthesize updatesEnabled=_updatesEnabled - In the implementation block
+(id)_observationKeys;
-(void)dealloc;
-(id)init;
-(CGRect)frame;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)candidates;
-(CGSize)preferredContentSize;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(double)offset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGRect)targetRect;
-(void)setTargetRect:(CGRect)arg1 ;
-(unsigned long long)arrowDirection;
-(void)_setUpdatesEnabled:(bool)arg1 ;
-(void)setArrowHeight:(double)arg1 ;
-(void)setPreferredArrowDirections:(unsigned long long)arg1 ;
-(void)setContainingFrame:(CGRect)arg1 ;
-(void)setContainingFrameInsets:(UIEdgeInsets)arg1 ;
-(void)setConstrainToTargetRect:(bool)arg1 ;
-(void)setPreferLandscapeOrientations:(bool)arg1 ;
-(void)_updateOutputs;
-(unsigned long long)preferredArrowDirections;
-(CGRect)containingFrame;
-(UIEdgeInsets)containingFrameInsets;
-(bool)constrainToTargetRect;
-(bool)preferLandscapeOrientations;
-(CGSize)_popoverViewSizeForContentSize:(CGSize)arg1 arrowDirection:(unsigned long long)arg2 ;
-(void)setProperties:(/*^block*/ id)arg1 ;
-(double)arrowHeight;
-(bool)_updatesEnabled;
@end

