/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:07 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSULocale;

@interface TSCECellValue : NSObject {

	int mValueType;
	TSULocale* mLocale;

}

@property (assign,nonatomic) int valueType; 
@property (nonatomic,retain) TSULocale * locale; 
-(char)isEqualToCellValue:(id)arg1 ;
-(id)initCellValueWithArchive:(const CellValueArchive*)arg1 locale:(id)arg2 ;
-(void)encodeCellValueToArchive:(CellValueArchive*)arg1 ;
-(void)dealloc;
-(id)displayString;
-(void)setLocale:(TSULocale *)arg1 ;
-(TSULocale *)locale;
-(id)initWithLocale:(id)arg1 ;
-(SCD_Struct_TS66)formatStruct;
-(int)valueType;
-(void)setValueType:(int)arg1 ;
@end

