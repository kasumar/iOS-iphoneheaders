/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, TCDumpType;

@interface TCDumpArray : TCDumpType {

	int mCount;
	int mCountFieldType;
	NSString* mCountFieldName;
	int mPaddingSize;
	TCDumpType* mElementType;

}
-(void)dealloc;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithCount:(int)arg1 countFieldType:(int)arg2 countFieldName:(id)arg3 elementType:(id)arg4 ;
-(id)initWithCount:(int)arg1 elementType:(id)arg2 ;
-(id)initWithCountFieldType:(int)arg1 elementType:(id)arg2 ;
-(id)initWithCountFieldName:(id)arg1 elementType:(id)arg2 ;
@end

