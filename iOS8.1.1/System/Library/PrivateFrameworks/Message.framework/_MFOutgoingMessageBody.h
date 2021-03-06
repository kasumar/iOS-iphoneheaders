/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>
#import <Message/MFCollectingDataConsumer.h>

@class MFBufferedDataConsumer, NSData, NSString;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer> {

	MFBufferedDataConsumer* _consumer;
	NSData* _rawData;
	unsigned long long _count;
	BOOL _lastNewLine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)data;
-(id)rawData;
-(void)done;
-(long long)appendData:(id)arg1 ;
-(BOOL)isLastCharacterNewLine;
@end

