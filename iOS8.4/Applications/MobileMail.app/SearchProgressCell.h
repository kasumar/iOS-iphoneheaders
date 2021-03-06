/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIActivityIndicatorView;

@interface SearchProgressCell : UITableViewCell {

	UILabel* _titleLabel;
	UIActivityIndicatorView* _spinner;
	int _state;

}

@property (assign,nonatomic) int state;              //@synthesize state=_state - In the implementation block
+(id)_progressFont;
+(float)defaultRowHeight;
+(void)invalidateCachedLayoutInformation;
-(void)_layoutChanged;
-(void)_getBaseTitleFrame:(CGRect*)arg1 baseSpinnerFrame:(CGRect*)arg2 withBounds:(CGRect)arg3 ;
-(float)_rowHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
@end

