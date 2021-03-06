/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHDataFormatter.h>
#import <iWorkImport/TSCHDataFormatterPersistableStyleObject.h>
#import <iWorkImport/TSCHDataFormatterSupportedClientFormatObject.h>
#import <iWorkImport/TSCHCustomFormatSupport.h>
#import <iWorkImport/NSCopying.h>
#import <iWorkImport/NSMutableCopying.h>

@class NSString;

@interface TSUFormatObject : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHCustomFormatSupport, NSCopying, NSMutableCopying> {

	SCD_Struct_TS65 mFormatStruct;
	char mUseExpandedContents;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_TS66 formatStruct; 
@property (nonatomic,readonly) char useExpandedContents; 
+(id)defaultDateFormat:(id)arg1 ;
+(id)instanceWithArchive:(const FormatStructArchive*)arg1 unarchiver:(id)arg2 ;
+(id)defaultDurationFormat;
-(void)saveToArchive:(FormatStructArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FormatStructArchive*)arg1 unarchiver:(id)arg2 ;
-(id)customFormatListKey;
-(id)dataFormatterForDocumentRoot:(id)arg1 ;
-(id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2 ;
-(id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2 ;
-(char)isCompatibleWithDataFormatter:(id)arg1 ;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg1 ;
-(int)numberOfDecimalPlaces;
-(char)isCustom;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)formatType;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_TS66)arg1 ;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_TS66)arg1 useExpandedContents:(char)arg2 ;
-(SCD_Struct_TS66)formatStruct;
-(char)useExpandedContents;
-(void)p_setFormatStruct:(SCD_Struct_TS66)arg1 ;
@end

