/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:19:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Resources/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString, NSMutableArray;

@interface PluginPolicy : NSObject <NSCoding> {

	NSString* pluginName;
	BOOL isValid;
	double remoteFirmwareCheckInterval;
	NSMutableArray* groups;
	NSMutableArray* matchingFilters;

}

@property (retain) NSString * pluginName; 
@property (assign) BOOL isValid; 
@property (assign) double remoteFirmwareCheckInterval; 
@property (retain) NSMutableArray * matchingFilters; 
@property (retain) NSMutableArray * groups; 
-(id)getMatchingFilterWithName:(id)arg1 ;
-(id)pluginName;
-(id)initWithPolicyDictionary:(id)arg1 pluginName:(id)arg2 ;
-(id)matchingFilters;
-(void)parsePolicyDict:(id)arg1 ;
-(BOOL)doesPolicyContainGroup:(id)arg1 ;
-(void)setPluginName:(id)arg1 ;
-(double)remoteFirmwareCheckInterval;
-(void)setRemoteFirmwareCheckInterval:(double)arg1 ;
-(void)setMatchingFilters:(id)arg1 ;
-(void)setGroups:(id)arg1 ;
-(id)groups;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid;
-(void)setIsValid:(BOOL)arg1 ;
@end
