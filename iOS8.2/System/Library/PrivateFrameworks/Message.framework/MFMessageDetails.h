/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFMessageLibrary, NSString;

@interface MFMessageDetails : NSObject {

	MFMessageLibrary* library;
	unsigned libraryID;
	unsigned long long messageFlags;
	unsigned long uid;
	unsigned long encoding;
	char isInvalid;
	unsigned mailboxID;
	long long conversationHash;
	long long messageIDHash;
	unsigned dateReceived;
	unsigned dateSent;
	NSString* externalID;

}
-(id)externalID;
-(unsigned)libraryID;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long)uid;
-(unsigned long long)messageFlags;
-(double)dateReceivedAsTimeIntervalSince1970;
-(double)dateSentAsTimeIntervalSince1970;
-(unsigned)mailboxID;
-(id)messageID;
-(id)remoteID;
-(id)mailbox;
-(id)copyMessageInfo;
-(long long)messageIDHash;
@end

