/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoAppRegistry/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray;

@interface NARApplication : NSObject <NSSecureCoding> {

	unsigned long long _sequenceNumber;
	NSString* _launchServicesBundleType;
	NSDictionary* _infoPlist;
	NSDictionary* _localizedStrings;
	NSDictionary* _iTunesPlistStrings;

}

@property (nonatomic,readonly) NSString * applicationIdentifier; 
@property (nonatomic,readonly) NSString * bundleName; 
@property (nonatomic,readonly) NSDictionary * localizedBundleNames; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * localizedDisplayName; 
@property (nonatomic,readonly) NSDictionary * localizedDisplayNames; 
@property (nonatomic,readonly) NSArray * supportedSchemes; 
@property (nonatomic,readonly) NSString * vendorName; 
@property (nonatomic,readonly) NSString * itemName; 
@property (assign,nonatomic) unsigned long long sequenceNumber;                   //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * launchServicesBundleType;                   //@synthesize launchServicesBundleType=_launchServicesBundleType - In the implementation block
@property (nonatomic,readonly) NSArray * localizations; 
@property (nonatomic,retain) NSDictionary * infoPlist;                            //@synthesize infoPlist=_infoPlist - In the implementation block
@property (nonatomic,retain) NSDictionary * localizedStrings;                     //@synthesize localizedStrings=_localizedStrings - In the implementation block
@property (nonatomic,retain) NSDictionary * iTunesPlistStrings;                   //@synthesize iTunesPlistStrings=_iTunesPlistStrings - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)vendorName;
-(NSString *)itemName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(NSArray *)localizations;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(void)setInfoPlist:(NSDictionary *)arg1 ;
-(NSString *)localizedDisplayName;
-(NSString *)bundleVersion;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setLocalizedStrings:(NSDictionary *)arg1 ;
-(NSDictionary *)localizedStrings;
-(NSDictionary *)iTunesPlistStrings;
-(NSDictionary *)localizedBundleNames;
-(NSDictionary *)localizedDisplayNames;
-(id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2 ;
-(NSString *)launchServicesBundleType;
-(void)setLaunchServicesBundleType:(NSString *)arg1 ;
-(void)setITunesPlistStrings:(NSDictionary *)arg1 ;
-(NSDictionary *)infoPlist;
-(NSArray *)supportedSchemes;
-(NSString *)bundleName;
@end
