/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, SKUIEditorialCellLayout, UIView, UIImage;

@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell {

	NSString* _accessibilityLabel;
	UIImageView* _brickImageView;
	UIEdgeInsets _contentInsets;
	SKUIEditorialCellLayout* _editorialCellLayout;
	UIView* _editorialContainerView;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;               //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,retain) UIImage * brickImage; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)applyEditorialLayout:(id)arg1 orientation:(long long)arg2 ;
-(void)setBrickImage:(UIImage *)arg1 ;
-(UIImage *)brickImage;
@end

