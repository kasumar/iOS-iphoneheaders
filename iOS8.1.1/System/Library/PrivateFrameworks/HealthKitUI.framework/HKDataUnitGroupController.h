/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface HKDataUnitGroupController : NSObject {

	NSArray* _dataUnitGroups;
	NSDictionary* _dataUnitGroupsByGroupID;
	NSDictionary* _dataUnitGroupsByCategoryID;
	NSDictionary* _dataUnitGroupsByType;

}
+(id)sharedInstance;
-(id)init;
-(id)initWithDataFromURL:(id)arg1 ;
-(id)allDataUnitGroups;
-(id)dataUnitGroupForType:(id)arg1 ;
-(id)dataUnitGroupWithID:(id)arg1 ;
-(id)dataUnitGroupsForCategoryID:(unsigned long long)arg1 ;
@end

