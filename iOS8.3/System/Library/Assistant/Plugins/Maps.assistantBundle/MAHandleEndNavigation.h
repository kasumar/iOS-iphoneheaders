/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:01:06 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/Plugins/Maps.assistantBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SALocalSearchNavigationEnd.h>
#import <Maps/AFServiceCommand.h>

@class NSString;

@interface MAHandleEndNavigation : SALocalSearchNavigationEnd <AFServiceCommand>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)_performWithServiceHelper:(id)arg1 ;
@end

