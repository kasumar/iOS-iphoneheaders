/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCHDataFormatter <NSObject>
@required
-(id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
-(id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
-(char)isCompatibleWithDataFormatter:(id)arg1;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
-(int)numberOfDecimalPlaces;

@end
