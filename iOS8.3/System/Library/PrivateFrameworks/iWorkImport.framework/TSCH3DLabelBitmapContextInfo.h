/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@interface TSCH3DLabelBitmapContextInfo : NSObject <NSCopying> {

	char mIsPrinting;
	char mIsPDF;
	char mHasSuppressedBackgrounds;

}

@property (nonatomic,readonly) char isPDF; 
@property (nonatomic,readonly) char isPrinting; 
@property (nonatomic,readonly) char hasSuppressedBackgrounds; 
+(id)contextInfoWithIsPrinting:(char)arg1 isPDF:(char)arg2 hasSuppressedBackgrounds:(char)arg3 ;
+(id)contextInfoForScene:(id)arg1 ;
+(void)setIsPrinting:(char)arg1 isPDF:(char)arg2 hasSuppressedBackgrounds:(char)arg3 forScene:(id)arg4 ;
+(id)context;
-(id)initWithIsPrinting:(char)arg1 isPDF:(char)arg2 hasSuppressedBackgrounds:(char)arg3 ;
-(void)setTSDCGContextInfoForCGContext:(CGContextRef)arg1 ;
-(char)hasSuppressedBackgrounds;
-(char)isPrinting;
-(char)isPDF;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

