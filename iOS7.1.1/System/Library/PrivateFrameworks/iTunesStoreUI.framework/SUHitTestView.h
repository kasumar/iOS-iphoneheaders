/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SUHitTestView : UIView {

	NSMutableArray* _hitTestTargets;

}
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeHitTestTarget:(id)arg1 ;
-(void)addHitTestTarget:(id)arg1 ;
@end

