/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage;

@interface StockGraphImageSet : NSObject {

	UIImage* _lineGraphImage;
	UIImage* _highlightOverlayImage;
	UIImage* _volumeGraphImage;

}

@property (nonatomic,retain) UIImage * lineGraphImage;                     //@synthesize lineGraphImage=_lineGraphImage - In the implementation block
@property (nonatomic,retain) UIImage * highlightOverlayImage;              //@synthesize highlightOverlayImage=_highlightOverlayImage - In the implementation block
@property (nonatomic,retain) UIImage * volumeGraphImage;                   //@synthesize volumeGraphImage=_volumeGraphImage - In the implementation block
-(UIImage *)lineGraphImage;
-(void)setLineGraphImage:(UIImage *)arg1 ;
-(UIImage *)highlightOverlayImage;
-(void)setHighlightOverlayImage:(UIImage *)arg1 ;
-(UIImage *)volumeGraphImage;
-(void)setVolumeGraphImage:(UIImage *)arg1 ;
@end

