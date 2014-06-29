/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUAssetMatcher.h>

@class NSString;

@interface SUAssetStateMatcher : NSObject <SUAssetMatcher> {

	NSString* _assetType;
	int _interestedStates;

}

@property (nonatomic,readonly) NSString * assetType;              //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) int interestedStates;              //@synthesize interestedStates=_interestedStates - In the implementation block
-(int)interestedStates;
-(bool)_matchesFilterType:(id)arg1 ;
-(id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2 ;
-(id)findMatchFromCandidates:(id)arg1 error:(id*)arg2 ;
-(id)initWithType:(id)arg1 interestedStates:(int)arg2 ;
-(id)assetType;
@end
