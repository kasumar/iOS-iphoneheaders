/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainer.h>

@class NSString, NSSet, ICSDuration, NSURL, NSTimeZone;

@interface CalDAVContainer : CoreDAVContainer {

	NSString* _calendarDescription;
	NSString* _ctag;
	NSString* _calendarColor;
	NSString* _symbolicColorName;
	NSString* _calendarOrder;
	NSSet* _supportedCalendarComponentSet;
	char _subscribedStripAlarms;
	char _subscribedStripTodos;
	char _subscribedStripAttachments;
	ICSDuration* _subscribedRefreshRate;
	NSURL* _publishURL;
	NSURL* _prePublishURL;
	char _isScheduleTransparent;
	NSTimeZone* _timeZone;
	char _canBePublished;
	char _canBeShared;
	NSURL* _source;
	NSSet* _freeBusySet;
	NSURL* _scheduleDefaultCalendarURL;
	NSString* _defaultTimedAlarms;
	NSString* _defaultAllDayAlarms;
	NSSet* _sharees;
	NSString* _supportedCalendarComponentSets;
	NSString* _locationCode;
	NSString* _languageCode;
	char _autoprovisioned;
	char _isMarkedUndeletable;
	char _isMarkedImmutableSharees;

}

@property (nonatomic,readonly) char isCalendar; 
@property (nonatomic,readonly) char isSubscribed; 
@property (nonatomic,readonly) char isScheduleInbox; 
@property (nonatomic,readonly) char isScheduleOutbox; 
@property (nonatomic,readonly) char isNotification; 
@property (nonatomic,readonly) char isSharedOwner; 
@property (nonatomic,readonly) char isShared; 
@property (nonatomic,readonly) char isEventContainer; 
@property (nonatomic,readonly) char isTaskContainer; 
@property (nonatomic,readonly) char isJournalContainer; 
@property (nonatomic,readonly) char isPollContainer; 
@property (nonatomic,readonly) char supportsFreebusy; 
@property (nonatomic,readonly) char isFamilyCalendar; 
@property (nonatomic,retain) NSString * calendarDescription;                         //@synthesize calendarDescription=_calendarDescription - In the implementation block
@property (nonatomic,retain) NSString * ctag;                                        //@synthesize ctag=_ctag - In the implementation block
@property (nonatomic,retain) NSString * calendarColor;                               //@synthesize calendarColor=_calendarColor - In the implementation block
@property (nonatomic,retain) NSString * symbolicColorName;                           //@synthesize symbolicColorName=_symbolicColorName - In the implementation block
@property (nonatomic,retain) NSString * calendarOrder;                               //@synthesize calendarOrder=_calendarOrder - In the implementation block
@property (nonatomic,retain) NSString * defaultTimedAlarms;                          //@synthesize defaultTimedAlarms=_defaultTimedAlarms - In the implementation block
@property (nonatomic,retain) NSString * defaultAllDayAlarms;                         //@synthesize defaultAllDayAlarms=_defaultAllDayAlarms - In the implementation block
@property (nonatomic,retain) NSSet * supportedCalendarComponentSet;                  //@synthesize supportedCalendarComponentSet=_supportedCalendarComponentSet - In the implementation block
@property (assign,nonatomic) char subscribedStripAlarms;                             //@synthesize subscribedStripAlarms=_subscribedStripAlarms - In the implementation block
@property (assign,nonatomic) char subscribedStripTodos;                              //@synthesize subscribedStripTodos=_subscribedStripTodos - In the implementation block
@property (assign,nonatomic) char subscribedStripAttachments;                        //@synthesize subscribedStripAttachments=_subscribedStripAttachments - In the implementation block
@property (nonatomic,retain) ICSDuration * subscribedRefreshRate;                    //@synthesize subscribedRefreshRate=_subscribedRefreshRate - In the implementation block
@property (nonatomic,retain) NSURL * publishURL;                                     //@synthesize publishURL=_publishURL - In the implementation block
@property (nonatomic,retain) NSURL * prePublishURL;                                  //@synthesize prePublishURL=_prePublishURL - In the implementation block
@property (assign,nonatomic) char isScheduleTransparent;                             //@synthesize isScheduleTransparent=_isScheduleTransparent - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                  //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) char canBePublished;                                    //@synthesize canBePublished=_canBePublished - In the implementation block
@property (assign,nonatomic) char canBeShared;                                       //@synthesize canBeShared=_canBeShared - In the implementation block
@property (assign,nonatomic) char isMarkedUndeletable;                               //@synthesize isMarkedUndeletable=_isMarkedUndeletable - In the implementation block
@property (assign,nonatomic) char isMarkedImmutableSharees;                          //@synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees - In the implementation block
@property (nonatomic,retain) NSURL * source;                                         //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSSet * freeBusySet;                                    //@synthesize freeBusySet=_freeBusySet - In the implementation block
@property (nonatomic,retain) NSURL * scheduleDefaultCalendarURL;                     //@synthesize scheduleDefaultCalendarURL=_scheduleDefaultCalendarURL - In the implementation block
@property (nonatomic,retain) NSSet * sharees;                                        //@synthesize sharees=_sharees - In the implementation block
@property (nonatomic,retain) NSString * supportedCalendarComponentSets;              //@synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets - In the implementation block
@property (nonatomic,retain) NSString * locationCode;                                //@synthesize locationCode=_locationCode - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                                //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) char autoprovisioned;                                   //@synthesize autoprovisioned=_autoprovisioned - In the implementation block
+(id)copyPropertyMappingsForParser;
-(char)isSubscribed;
-(NSSet *)sharees;
-(void)setCanBeShared:(char)arg1 ;
-(void)setCanBePublished:(char)arg1 ;
-(NSString *)symbolicColorName;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(char)canBePublished;
-(char)canBeShared;
-(char)isFamilyCalendar;
-(char)isMarkedUndeletable;
-(char)isMarkedImmutableSharees;
-(void)setSharees:(NSSet *)arg1 ;
-(void)setIsMarkedUndeletable:(char)arg1 ;
-(void)setIsMarkedImmutableSharees:(char)arg1 ;
-(char)isShared;
-(void)dealloc;
-(id)description;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSURL *)source;
-(void)setSource:(NSURL *)arg1 ;
-(NSString *)languageCode;
-(void)setCalendarColor:(NSString *)arg1 ;
-(void)setCalendarOrder:(NSString *)arg1 ;
-(void)setSupportedCalendarComponentSet:(NSSet *)arg1 ;
-(void)setSubscribedRefreshRate:(ICSDuration *)arg1 ;
-(void)setFreeBusySet:(NSSet *)arg1 ;
-(void)setScheduleDefaultCalendarURL:(NSURL *)arg1 ;
-(void)setDefaultTimedAlarms:(NSString *)arg1 ;
-(void)setDefaultAllDayAlarms:(NSString *)arg1 ;
-(char)isCalendar;
-(char)isSharedOwner;
-(char)isScheduleTransparent;
-(NSString *)calendarColor;
-(NSString *)calendarOrder;
-(char)subscribedStripAlarms;
-(char)subscribedStripTodos;
-(char)subscribedStripAttachments;
-(ICSDuration *)subscribedRefreshRate;
-(NSSet *)freeBusySet;
-(NSURL *)scheduleDefaultCalendarURL;
-(NSString *)defaultTimedAlarms;
-(NSString *)defaultAllDayAlarms;
-(void)setSubscribedStripAlarms:(char)arg1 ;
-(void)setSubscribedStripAttachments:(char)arg1 ;
-(void)setSubscribedStripTodos:(char)arg1 ;
-(void)setIsScheduleTransparent:(char)arg1 ;
-(void)_setTimeZoneFromProperties:(id)arg1 onCalendar:(id)arg2 ;
-(char)_isComponentSupportedForString:(id)arg1 ;
-(char)isJournalContainer;
-(char)isPollContainer;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)applyParsedProperties:(id)arg1 ;
-(NSString *)calendarDescription;
-(void)setCalendarDescription:(NSString *)arg1 ;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(NSString *)supportedCalendarComponentSets;
-(char)supportsFreebusy;
-(void)setSupportedCalendarComponentSets:(NSString *)arg1 ;
-(char)isEventContainer;
-(char)isTaskContainer;
-(NSURL *)publishURL;
-(void)setPublishURL:(NSURL *)arg1 ;
-(NSURL *)prePublishURL;
-(void)setPrePublishURL:(NSURL *)arg1 ;
-(char)isScheduleInbox;
-(char)isScheduleOutbox;
-(char)isNotification;
-(char)autoprovisioned;
-(void)setAutoprovisioned:(char)arg1 ;
-(NSString *)locationCode;
-(void)setLocationCode:(NSString *)arg1 ;
-(NSSet *)supportedCalendarComponentSet;
@end

