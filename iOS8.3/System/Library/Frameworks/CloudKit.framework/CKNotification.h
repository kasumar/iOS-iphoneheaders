/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:38:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/NSSecureCoding.h>

@class CKNotificationID, NSString, NSArray, NSNumber;

@interface CKNotification : NSObject <NSSecureCoding> {

	char _isPruned;
	int _notificationType;
	CKNotificationID* _notificationID;
	NSString* _containerIdentifier;
	NSString* _alertBody;
	NSString* _alertLocalizationKey;
	NSArray* _alertLocalizationArgs;
	NSString* _alertActionLocalizationKey;
	NSString* _alertLaunchImage;
	NSNumber* _badge;
	NSString* _soundName;

}

@property (assign,nonatomic) int notificationType;                             //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,copy) CKNotificationID * notificationID;                  //@synthesize notificationID=_notificationID - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                     //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) char isPruned;                                    //@synthesize isPruned=_isPruned - In the implementation block
@property (nonatomic,copy) NSString * alertBody;                               //@synthesize alertBody=_alertBody - In the implementation block
@property (nonatomic,copy) NSString * alertLocalizationKey;                    //@synthesize alertLocalizationKey=_alertLocalizationKey - In the implementation block
@property (nonatomic,copy) NSArray * alertLocalizationArgs;                    //@synthesize alertLocalizationArgs=_alertLocalizationArgs - In the implementation block
@property (nonatomic,copy) NSString * alertActionLocalizationKey;              //@synthesize alertActionLocalizationKey=_alertActionLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * alertLaunchImage;                        //@synthesize alertLaunchImage=_alertLaunchImage - In the implementation block
@property (nonatomic,copy) NSNumber * badge;                                   //@synthesize badge=_badge - In the implementation block
@property (nonatomic,copy) NSString * soundName;                               //@synthesize soundName=_soundName - In the implementation block
+(id)_realNotificationFromRemoteNotificationDictionary:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)notificationFromRemoteNotificationDictionary:(id)arg1 ;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setIsPruned:(char)arg1 ;
-(char)isPruned;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)alertBody;
-(NSString *)soundName;
-(void)setAlertBody:(NSString *)arg1 ;
-(void)setAlertLaunchImage:(NSString *)arg1 ;
-(void)setSoundName:(NSString *)arg1 ;
-(NSString *)alertLaunchImage;
-(id)CKPropertiesDescription;
-(id)_initBare;
-(CKNotificationID *)notificationID;
-(void)setAlertLocalizationKey:(NSString *)arg1 ;
-(void)setAlertLocalizationArgs:(NSArray *)arg1 ;
-(void)setAlertActionLocalizationKey:(NSString *)arg1 ;
-(NSString *)alertLocalizationKey;
-(NSArray *)alertLocalizationArgs;
-(NSString *)alertActionLocalizationKey;
-(void)setNotificationID:(CKNotificationID *)arg1 ;
-(void)setBadge:(NSNumber *)arg1 ;
-(char)isRead;
-(void)setNotificationType:(int)arg1 ;
-(NSNumber *)badge;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(int)notificationType;
@end

