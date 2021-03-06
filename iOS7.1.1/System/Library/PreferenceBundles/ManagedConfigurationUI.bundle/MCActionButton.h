/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIButton.h>

@interface MCActionButton : UIButton {

	int _state;
	CGRect _area;

}
-(void)_layout;
-(id)_titleForConfigState:(int)arg1 ;
-(void)_updateButtonImages:(int)arg1 animate:(bool)arg2 ;
-(void)_animationFinished:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(id)initWithConfigState:(int)arg1 ;
-(void)setEnclosingArea:(CGRect)arg1 ;
-(void)_cacheImages;
@end

