/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKBalloonChatItem.h>

@class IMMessage, NSArray;

@interface CKMessagePartChatItem : CKBalloonChatItem

@property (nonatomic,retain,readonly) IMMessage * message; 
@property (nonatomic,readonly) char color; 
@property (nonatomic,copy,readonly) NSArray * pasteboardItems; 
-(id)composition;
-(id)description;
-(IMMessage *)message;
-(char)color;
-(id)time;
-(BOOL)canCopy;
-(id)sender;
-(BOOL)isFromMe;
-(BOOL)canForward;
-(BOOL)canSendAsTextMessage;
-(NSArray *)pasteboardItems;
-(BOOL)failed;
-(void)configureBalloonView:(id)arg1 ;
@end
