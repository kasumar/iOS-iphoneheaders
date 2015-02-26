/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheet.h>
#import <UIKit/UIActionSheetDelegate.h>

@class NSString;

@interface EasyCallbackActionSheet : UIActionSheet <UIActionSheetDelegate> {

	/*^block*/id _willPresentCallback;
	/*^block*/id _didPresentCallback;
	/*^block*/id _willDismissCallback;
	/*^block*/id _didDismissCallback;

}

@property (nonatomic,copy) id willPresentCallback;                  //@synthesize willPresentCallback=_willPresentCallback - In the implementation block
@property (nonatomic,copy) id didPresentCallback;                   //@synthesize didPresentCallback=_didPresentCallback - In the implementation block
@property (nonatomic,copy) id willDismissCallback;                  //@synthesize willDismissCallback=_willDismissCallback - In the implementation block
@property (nonatomic,copy) id didDismissCallback;                   //@synthesize didDismissCallback=_didDismissCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionSheet;
-(id)willPresentCallback;
-(void)setWillPresentCallback:(id)arg1 ;
-(id)didDismissCallback;
-(id)willDismissCallback;
-(void)setDidPresentCallback:(id)arg1 ;
-(void)setDidDismissCallback:(id)arg1 ;
-(id)didPresentCallback;
-(void)setWillDismissCallback:(id)arg1 ;
-(void)showWithPositioningBlock:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)willPresentActionSheet:(id)arg1 ;
-(void)didPresentActionSheet:(id)arg1 ;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
