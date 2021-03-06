/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:16:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UsageApp : NSObject {

	char _systemApp;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	float _staticSize;
	float _dynamicSize;
	float _specialSize;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                       //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) float staticSize;                               //@synthesize staticSize=_staticSize - In the implementation block
@property (assign,nonatomic) float dynamicSize;                              //@synthesize dynamicSize=_dynamicSize - In the implementation block
@property (assign,nonatomic) float specialSize;                              //@synthesize specialSize=_specialSize - In the implementation block
@property (assign,getter=isSystemApp,nonatomic) char systemApp;              //@synthesize systemApp=_systemApp - In the implementation block
@property (nonatomic,readonly) float dataSize; 
@property (nonatomic,readonly) float totalSize; 
-(float)specialSize;
-(void)setSpecialSize:(float)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(float)totalSize;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(char)isSystemApp;
-(void)setSystemApp:(char)arg1 ;
-(float)dynamicSize;
-(float)dataSize;
-(float)staticSize;
-(void)setStaticSize:(float)arg1 ;
-(void)setDynamicSize:(float)arg1 ;
@end

