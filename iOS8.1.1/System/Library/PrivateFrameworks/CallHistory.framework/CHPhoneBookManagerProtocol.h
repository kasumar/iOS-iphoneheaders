/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CHPhoneBookManagerProtocol <NSObject>
@required
-(void)releaseCachedRecord;
-(id)getRecordId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(BOOL)arg3;
-(id)getCallerIdPropertyMultiValueId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(BOOL)arg3;
-(const void*)getABRecordRef;
-(void)setABRecordId:(id)arg1;
-(void)setABRecordRef:(const void*)arg1;
-(void)setABRecordMultiValueId:(id)arg1;
-(id)getPersonsNameForRecordId:(id)arg1;
-(id)getLocalizedCallerIdLabelForRecordId:(id)arg1;
-(BOOL)isABContactASuggestion;

@end

