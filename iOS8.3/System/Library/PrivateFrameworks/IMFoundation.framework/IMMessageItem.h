/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:13:20 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMItem.h>
#import <IMFoundation/NSCoding.h>
#import <IMFoundation/NSCopying.h>
#import <IMFoundation/IMRemoteObjectCoding.h>

@class NSString, NSArray, NSAttributedString, NSData, NSDate;

@interface IMMessageItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding> {

	NSString* _subject;
	NSString* _plainBody;
	unsigned _error;
	NSArray* _fileTransferGUIDs;
	NSAttributedString* _body;
	NSData* _bodyData;
	NSDate* _timeRead;
	NSDate* _timeDelivered;
	NSDate* _timePlayed;
	unsigned long long _flags;
	long long _replaceID;
	long long _expireState;

}

@property (nonatomic,retain) NSString * subject;                       //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSAttributedString * body;                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSData * bodyData;                        //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,retain) NSDate * timeRead;                        //@synthesize timeRead=_timeRead - In the implementation block
@property (nonatomic,retain) NSDate * timeDelivered;                   //@synthesize timeDelivered=_timeDelivered - In the implementation block
@property (nonatomic,retain) NSDate * timePlayed;                      //@synthesize timePlayed=_timePlayed - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                 //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long expireState;                    //@synthesize expireState=_expireState - In the implementation block
@property (nonatomic,retain) NSArray * fileTransferGUIDs;              //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (assign,nonatomic) unsigned errorCode;                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long replaceID;                      //@synthesize replaceID=_replaceID - In the implementation block
@property (assign,nonatomic) char hasDataDetectorResults; 
@property (nonatomic,readonly) char isDelivered; 
@property (nonatomic,readonly) char isSent; 
@property (nonatomic,readonly) char isRead; 
@property (nonatomic,readonly) char isPlayed; 
@property (nonatomic,readonly) char isFinished; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,readonly) char isAlert; 
@property (nonatomic,readonly) char wasDataDetected; 
@property (nonatomic,readonly) char wasDowngraded; 
@property (nonatomic,readonly) char isPrepared; 
@property (nonatomic,readonly) char isTypingMessage; 
@property (nonatomic,readonly) char isLocatingMessage; 
@property (nonatomic,readonly) char isEmote; 
@property (nonatomic,readonly) char isAudioMessage; 
@property (nonatomic,readonly) char isExpirable; 
@property (nonatomic,readonly) char isFromExternalSource; 
@property (nonatomic,retain) NSString * plainBody;                     //@synthesize plainBody=_plainBody - In the implementation block
-(id)_service;
-(id)_newChatItems;
-(char)_hasMessageChatItem;
-(id)message;
-(id)_otherHandle;
-(id)_senderHandle;
-(id)copyDictionaryRepresentation;
-(void)setFlags:(unsigned long long)arg1 ;
-(NSData *)bodyData;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(NSAttributedString *)body;
-(id)sender;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(char)isFinished;
-(void)setBody:(NSAttributedString *)arg1 ;
-(char)isFromMe;
-(NSString *)plainBody;
-(char)isAudioMessage;
-(char)isPlayed;
-(char)hasDataDetectorResults;
-(NSArray *)fileTransferGUIDs;
-(char)isTypingMessage;
-(char)isDelivered;
-(char)isSent;
-(char)isLocatingMessage;
-(char)wasDowngraded;
-(char)isFromExternalSource;
-(char)isRead;
-(unsigned long long)flags;
-(char)isExpirable;
-(long long)expireState;
-(NSDate *)timePlayed;
-(char)wasDataDetected;
-(id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4 ;
-(void)_updateFlags:(unsigned long long)arg1 ;
-(id)copyWithFlags:(unsigned long long)arg1 ;
-(void)setExpireState:(long long)arg1 ;
-(void)setTimePlayed:(NSDate *)arg1 ;
-(NSDate *)timeRead;
-(NSDate *)timeDelivered;
-(char)isEmote;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 errorType:(unsigned)arg22 ;
-(char)isAlert;
-(void)setPlainBody:(NSString *)arg1 ;
-(void)setTimeRead:(NSDate *)arg1 ;
-(void)setTimeDelivered:(NSDate *)arg1 ;
-(void)setBodyData:(NSData *)arg1 ;
-(void)setFileTransferGUIDs:(NSArray *)arg1 ;
-(long long)replaceID;
-(void)setReplaceID:(long long)arg1 ;
-(void)_generateBodyTextIfNeeded;
-(void)_generateBodyDataIfNeeded;
-(id)initWithDictionary:(id)arg1 hint:(id)arg2 ;
-(void)adjustIsEmptyFlag;
-(void)_regenerateBodyData;
-(void)_regenerateBodyText;
-(void)_clearBodyData;
-(id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 ;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 ;
-(char)isPrepared;
-(void)setHasDataDetectorResults:(char)arg1 ;
-(void)setWasDataDetected:(char)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)errorCode;
@end
