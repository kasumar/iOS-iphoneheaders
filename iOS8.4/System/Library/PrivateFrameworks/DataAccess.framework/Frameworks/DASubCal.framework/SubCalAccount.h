/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAAccount.h>
#import <DASubCal/SubCalValidationTaskDelegate.h>

@class NSData, NSString, NSDictionary, NSURL, DACoreDAVTaskManager;

@interface SubCalAccount : DAAccount <SubCalValidationTaskDelegate> {

	BOOL _isManagedCalendar;
	BOOL _isHolidaySubscribedCalendar;
	BOOL _didTrySSL;
	int _subCalAccountVersion;
	NSData* _tmpICSData;

}

@property (assign,nonatomic) BOOL shouldRemoveAlarms; 
@property (nonatomic,retain) NSString * syncId; 
@property (nonatomic,retain) NSDictionary * externalRepresentation; 
@property (nonatomic,readonly) NSURL * subscriptionURL; 
@property (nonatomic,retain) NSString * calDAVURLString; 
@property (nonatomic,readonly) NSString * calendarExternalId; 
@property (assign,nonatomic) BOOL isManagedCalendar;                             //@synthesize isManagedCalendar=_isManagedCalendar - In the implementation block
@property (assign,nonatomic) BOOL isHolidaySubscribedCalendar;                   //@synthesize isHolidaySubscribedCalendar=_isHolidaySubscribedCalendar - In the implementation block
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager; 
@property (assign,nonatomic) int subCalAccountVersion;                           //@synthesize subCalAccountVersion=_subCalAccountVersion - In the implementation block
@property (assign,nonatomic) BOOL didTrySSL;                                     //@synthesize didTrySSL=_didTrySSL - In the implementation block
@property (nonatomic,retain) NSData * tmpICSData;                                //@synthesize tmpICSData=_tmpICSData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isHolidaySubscribedCalendar;
-(void)setIsHolidaySubscribedCalendar:(BOOL)arg1 ;
-(void)setHost:(id)arg1 ;
-(NSString *)syncId;
-(void)setSyncId:(NSString *)arg1 ;
-(NSURL *)subscriptionURL;
-(void)removeDBSyncData;
-(BOOL)isSubscribedCalendarAccount;
-(DACoreDAVTaskManager *)taskManager;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(NSDictionary *)externalRepresentation;
-(void)setExternalRepresentation:(NSDictionary *)arg1 ;
-(NSString *)calendarExternalId;
-(void)setTmpICSData:(NSData *)arg1 ;
-(NSData *)tmpICSData;
-(void)handleTrustChallenge:(id)arg1 forTask:(id)arg2 ;
-(BOOL)isManagedCalendar;
-(void)refreshAllCalendars:(BOOL)arg1 ;
-(NSString *)calDAVURLString;
-(BOOL)shouldRemoveAlarms;
-(void)clearTmpICSData;
-(void)saveTmpICSData;
-(void)quickValidate:(id)arg1 ;
-(BOOL)hasSubscribedCalendarAtURL:(id)arg1 ;
-(void)_checkValidityWithConsumer:(id)arg1 quickValidate:(BOOL)arg2 forceSSL:(BOOL)arg3 ;
-(void)setDidTrySSL:(BOOL)arg1 ;
-(void)_checkValidityWithConsumer:(id)arg1 quickValidate:(BOOL)arg2 ;
-(BOOL)didTrySSL;
-(id)_tmpICSCalendarPath;
-(void)subCalValidationTask:(id)arg1 finishedWithError:(id)arg2 calendarName:(id)arg3 calendarData:(id)arg4 ;
-(void)setCalDAVURLString:(NSString *)arg1 ;
-(void)upgradeAccountSpecificPropertiesOnAccount:(id)arg1 inStore:(id)arg2 parentAccount:(id)arg3 ;
-(void)setShouldRemoveAlarms:(BOOL)arg1 ;
-(void)setIsManagedCalendar:(BOOL)arg1 ;
-(int)subCalAccountVersion;
-(void)setSubCalAccountVersion:(int)arg1 ;
-(void)setAccountDescription:(id)arg1 ;
-(id)accountDescription;
@end
