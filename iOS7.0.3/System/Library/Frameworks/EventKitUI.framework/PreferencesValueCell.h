/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol EKCellShortener;
@interface PreferencesValueCell : UITableViewCell {

	<EKCellShortener>* _shortener;

}

@property (assign,nonatomic,__weak) <EKCellShortener> * shortener;              //@synthesize shortener=_shortener - In the implementation block
-(void)setShortener:(id)arg1 ;
-(void)_checkValueWidth;
-(id)shortener;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end

