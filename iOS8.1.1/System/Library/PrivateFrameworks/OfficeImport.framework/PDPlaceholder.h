/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PDPlaceholder : NSObject {

	int mType;
	int mOrientation;
	int mSize;
	int mIndex;
	int mBoundsTrack;

}
+(BOOL)isTextType:(int)arg1 ;
-(int)size;
-(id)init;
-(id)description;
-(int)orientation;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setSize:(int)arg1 ;
-(int)index;
-(void)setOrientation:(int)arg1 ;
-(void)setIndex:(int)arg1 ;
-(int)boundsTrack;
-(void)setBoundsTrack:(int)arg1 ;
@end
