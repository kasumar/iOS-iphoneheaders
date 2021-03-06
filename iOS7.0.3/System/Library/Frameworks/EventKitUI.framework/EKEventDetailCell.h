/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class EKEvent;

@interface EKEventDetailCell : UITableViewCell {

	EKEvent* _event;
	BOOL _editable;

}

@property (nonatomic,readonly) BOOL isEditable; 
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(int)arg3 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 ;
-(void)layoutForWidth:(float)arg1 position:(int)arg2 ;
-(BOOL)isEditable;
-(BOOL)update;
-(void)setEvent:(id)arg1 ;
-(void).cxx_destruct;
@end

