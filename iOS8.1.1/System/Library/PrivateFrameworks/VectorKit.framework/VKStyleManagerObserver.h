/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class VKStyleManager;


@protocol VKStyleManagerObserver <NSObject>
@property (nonatomic,readonly) VKStyleManager * styleManager; 
@optional
-(void)prepareForStylesheetTransitionToMapDisplayStyle:(unsigned long long)arg1 withReadinessBlock:(/*^block*/id)arg2;
-(void)stylesheetWillChange;
-(void)stylesheetTransitionDidProgress;
-(void)stylesheetDidChange;
-(void)stylesheetWillTransition:(unsigned long long)arg1;
-(void)stylesheetDoneChanging;

@required
+(BOOL)reloadOnStylesheetChange;
-(VKStyleManager *)styleManager;

@end

