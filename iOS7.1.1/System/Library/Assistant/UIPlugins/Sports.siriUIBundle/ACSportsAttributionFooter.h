/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@class ACSportsAttributionView;

@interface ACSportsAttributionFooter : SiriUIReusableFooterView {

	ACSportsAttributionView* _attributionView;

}

@property (nonatomic,readonly) ACSportsAttributionView * attributionView;              //@synthesize attributionView=_attributionView - In the implementation block
+(double)defaultHeightBelowKeyline;
+(double)defaultHeight;
-(id)attributionView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end

