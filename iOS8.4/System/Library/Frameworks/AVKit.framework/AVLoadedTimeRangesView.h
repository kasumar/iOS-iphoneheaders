/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface AVLoadedTimeRangesView : UIView {

	NSArray* _loadedTimeRanges;
	CGRect _clipRect;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIColor * fillColor;                     //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) NSArray * loadedTimeRanges; 
@property (assign,nonatomic) CGRect clipRect; 
-(CGRect)clipRect;
-(void)setClipRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(NSArray *)loadedTimeRanges;
@end

