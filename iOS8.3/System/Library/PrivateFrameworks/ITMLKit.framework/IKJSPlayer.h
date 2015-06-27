/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:15:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <ITMLKit/IKJSPlayer.h>
@class IKDOMElement;


@protocol IKJSPlayer <JSExport>
@property (nonatomic,__weak,readonly) IKDOMElement * currentAVMediaElement; 
@required
-(IKDOMElement *)currentAVMediaElement;

@end


@protocol IKJSPlayerAppBridge;
@class IKDOMElement;

@interface IKJSPlayer : IKJSObject <IKJSPlayer> {

	id<IKJSPlayerAppBridge> _appBridge;

}

@property (assign,nonatomic,__weak) id<IKJSPlayerAppBridge> appBridge;                   //@synthesize appBridge=_appBridge - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMElement * currentAVMediaElement; 
-(void)setAppBridge:(id<IKJSPlayerAppBridge>)arg1 ;
-(id<IKJSPlayerAppBridge>)appBridge;
-(IKDOMElement *)currentAVMediaElement;
@end
