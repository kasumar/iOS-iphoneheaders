/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVLeafItem* _commonName;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                    //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * commonName;              //@synthesize commonName=_commonName - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(void)setCommonName:(CoreDAVLeafItem *)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(CoreDAVLeafItem *)commonName;
@end

