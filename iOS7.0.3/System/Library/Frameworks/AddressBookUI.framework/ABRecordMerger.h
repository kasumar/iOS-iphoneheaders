/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@interface ABRecordMerger : NSObject
+(void)_addValue:(void*)arg1 withProperty:(int)arg2 toExistingValues:(CFSetRef)arg3 ;
+(BOOL)_addMultiValueEntry:(void*)arg1 atIndex:(long)arg2 toMultiValue:(void*)arg3 withProperty:(int)arg4 existingValues:(CFSetRef)arg5 ;
+(BOOL)_propertiesArray:(id)arg1 containsProperty:(int)arg2 ;
+(BOOL)mergeMultiValueProperty:(int)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3 ;
+(BOOL)_mergeSingleValueProperty:(int)arg1 fromRecord:(void*)arg2 intoRecord:(void*)arg3 ;
+(void)mergeVCardRecord:(void*)arg1 withProperties:(CFArrayRef)arg2 intoRecord:(void*)arg3 ;
@end

