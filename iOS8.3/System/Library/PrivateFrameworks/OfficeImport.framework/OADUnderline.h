/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADStroke, OADFill;

@interface OADUnderline : NSObject {

	OADStroke* mStroke;
	OADFill* mFill;
	unsigned char mType;
	unsigned mIsUsingTextFill : 1;
	unsigned mIsUsingTextStroke : 1;

}
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)fill;
-(id)stroke;
-(void)setFill:(id)arg1 ;
-(void)setStroke:(id)arg1 ;
-(void)setIsUsingTextStroke:(char)arg1 ;
-(void)setIsUsingTextFill:(char)arg1 ;
-(char)isUsingTextFill;
-(char)isUsingTextStroke;
-(id)initWithStroke:(id)arg1 fill:(id)arg2 type:(int)arg3 ;
@end

