/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _accessLevel;

}

@property (retain) CoreDAVItemWithNoChildren * accessLevel;              //@synthesize accessLevel=_accessLevel - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setAccessLevel:(id)arg1 ;
-(id)initWithAccess:(int)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(id)accessLevel;
@end

