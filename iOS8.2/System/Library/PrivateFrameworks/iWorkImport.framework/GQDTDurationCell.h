/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDTCell.h>

@class GQDTComputedFormatSpec;

@interface GQDTDurationCell : GQDTCell {

	double mValue;
	GQDTComputedFormatSpec* mComputedFormat;
	CFBundleRef mProcessorBundle;

}
-(void)setProcessorBundle:(CFBundleRef)arg1 ;
-(CFStringRef)createStringValue;
-(int)readAttributesForDurationCell:(xmlTextReaderRef)arg1 ;
-(void)dealloc;
@end

