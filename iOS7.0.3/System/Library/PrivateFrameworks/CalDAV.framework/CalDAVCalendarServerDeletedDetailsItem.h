/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString, ICSDateValue;

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem {

	NSString* _componentType;
	NSString* _summary;
	NSString* _displayName;
	ICSDateValue* _nextInstance;
	BOOL _hadMoreInstances;

}

@property (retain) NSString * componentType;                 //@synthesize componentType=_componentType - In the implementation block
@property (retain) NSString * summary;                       //@synthesize summary=_summary - In the implementation block
@property (retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (retain) ICSDateValue * nextInstance;              //@synthesize nextInstance=_nextInstance - In the implementation block
@property (assign) BOOL hadMoreInstances;                    //@synthesize hadMoreInstances=_hadMoreInstances - In the implementation block
-(void)dealloc;
-(id)init;
-(id)displayName;
-(void)setDisplayNameItem:(id)arg1 ;
-(void)setComponentType:(id)arg1 ;
-(void)setNextInstance:(id)arg1 ;
-(void)setHadMoreInstances:(BOOL)arg1 ;
-(void)setComponentTypeItem:(id)arg1 ;
-(void)setSummaryItem:(id)arg1 ;
-(void)setNextInstanceItem:(id)arg1 ;
-(void)setHadMoreInstancesItem:(id)arg1 ;
-(id)nextInstance;
-(BOOL)hadMoreInstances;
-(id)copyParseRules;
-(void)setDisplayName:(id)arg1 ;
-(id)componentType;
-(id)summary;
-(void)setSummary:(id)arg1 ;
@end

