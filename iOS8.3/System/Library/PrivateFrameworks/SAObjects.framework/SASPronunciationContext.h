/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString, NSNumber;

@interface SASPronunciationContext : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * domainObjectIdentifier; 
@property (nonatomic,copy) NSString * domainObjectPropertyIdentifier; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSNumber * tokenOffset; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pronunciationContext;
+(id)pronunciationContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)orthography;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setOrthography:(NSString *)arg1 ;
-(NSNumber *)tokenOffset;
-(void)setTokenOffset:(NSNumber *)arg1 ;
-(NSURL *)domainObjectIdentifier;
-(void)setDomainObjectIdentifier:(NSURL *)arg1 ;
-(NSString *)domainObjectPropertyIdentifier;
-(void)setDomainObjectPropertyIdentifier:(NSString *)arg1 ;
@end
