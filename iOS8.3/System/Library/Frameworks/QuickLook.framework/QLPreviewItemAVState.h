/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:07:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/NSSecureCoding.h>

@interface QLPreviewItemAVState : NSObject <NSSecureCoding> {

	char playing;
	double position;
	double duration;

}

@property (assign) double position; 
@property (assign) double duration; 
@property (getter=isPlaying) char playing; 
+(id)avStateWithPosition:(double)arg1 duration:(double)arg2 playing:(char)arg3 ;
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(char)isPlaying;
-(void)setPlaying:(char)arg1 ;
@end
