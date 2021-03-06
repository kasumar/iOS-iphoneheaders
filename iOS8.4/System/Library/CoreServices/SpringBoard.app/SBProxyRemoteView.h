/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBApplication, NSString;

@interface SBProxyRemoteView : UIView {

	id _delegate;
	SBApplication* _app;
	NSString* _remoteViewIdentifier;
	BOOL _remoteViewOpaque;
	NSString* _hostRequester;

}

@property (nonatomic,retain) NSString * remoteViewIdentifier;              //@synthesize remoteViewIdentifier=_remoteViewIdentifier - In the implementation block
@property (assign,nonatomic) BOOL remoteViewOpaque;                        //@synthesize remoteViewOpaque=_remoteViewOpaque - In the implementation block
@property (assign,nonatomic) id delegate;                                  //@synthesize delegate=_delegate - In the implementation block
+(Class)layerClass;
-(void)setRemoteViewIdentifier:(NSString *)arg1 ;
-(void)_setIsConnected:(BOOL)arg1 ;
-(void)connectToContextID:(unsigned)arg1 forIdentifier:(id)arg2 application:(id)arg3 ;
-(void)noteConnectionLost;
-(BOOL)remoteViewOpaque;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)didMoveToSuperview;
-(void)setRemoteViewOpaque:(BOOL)arg1 ;
-(NSString *)remoteViewIdentifier;
-(void)disconnect;
@end

