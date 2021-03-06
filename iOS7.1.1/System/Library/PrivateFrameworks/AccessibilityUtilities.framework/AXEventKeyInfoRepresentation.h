/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {

	bool _keyDown;
	unsigned short _keyCode;
	unsigned _modifierState;
	NSString* _unmodifiedInput;
	NSString* _modifiedInput;
	NSString* _shiftModifiedInput;

}

@property (assign,nonatomic) unsigned short keyCode;                     //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) bool keyDown;                               //@synthesize keyDown=_keyDown - In the implementation block
@property (nonatomic,retain) NSString * unmodifiedInput;                 //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,retain) NSString * modifiedInput;                   //@synthesize modifiedInput=_modifiedInput - In the implementation block
@property (nonatomic,retain) NSString * shiftModifiedInput;              //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (assign,nonatomic) unsigned modifierState;                     //@synthesize modifierState=_modifierState - In the implementation block
+(bool)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setKeyCode:(unsigned short)arg1 ;
-(void)setKeyDown:(bool)arg1 ;
-(void)setUnmodifiedInput:(id)arg1 ;
-(void)setModifiedInput:(id)arg1 ;
-(void)setShiftModifiedInput:(id)arg1 ;
-(void)setModifierState:(unsigned)arg1 ;
-(id)unmodifiedInput;
-(id)shiftModifiedInput;
-(unsigned)modifierState;
-(id)modifiedInput;
-(bool)keyDown;
-(id)_hardwareKeyboardLayout;
-(void)translateKeycode;
-(unsigned short)keyCode;
@end

