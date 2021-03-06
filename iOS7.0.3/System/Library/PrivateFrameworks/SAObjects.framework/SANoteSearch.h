/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSDate;

@interface SANoteSearch : SADomainCommand

@property (nonatomic,copy) NSString * contentQuery; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSDate * toDate; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)groupIdentifier;
-(id)toDate;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)contentQuery;
-(void)setContentQuery:(id)arg1 ;
-(id)fromDate;
-(void)setFromDate:(id)arg1 ;
-(void)setToDate:(id)arg1 ;
@end

