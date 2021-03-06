/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:12:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@interface CPFontKerning : NSObject <CPDisposable> {

	CFDataRef kernTable;
	const char* dataPtr;
	unsigned offset;
	unsigned kernTableLength;
	CFDictionaryRef kernDictionary;
	char override;
	char valid;

}
-(void)dealloc;
-(void)dispose;
-(unsigned char)readByte;
-(unsigned)readUnsignedLong;
-(id)initWithKernData:(CFDataRef)arg1 ;
-(unsigned short)readUnsignedShort;
-(void)doKerningPair;
-(void)doSubtableFormat0;
-(void)doSubtableFormat1;
-(void)doSubtableFormat2;
-(void)doSubtableFormat3;
-(void)doOTSubtable;
-(void)doTTSubtable;
-(void)doTable;
-(id)initWithCGFont:(CGFontRef)arg1 ;
-(short)readShort;
-(CFDictionaryRef)createKernTable;
-(void)finalize;
@end

