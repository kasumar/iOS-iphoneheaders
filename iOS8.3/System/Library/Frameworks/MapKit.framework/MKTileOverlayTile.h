/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:56:25 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSData;

@interface MKTileOverlayTile : NSObject {

	SCD_Struct_MK21 _path;
	SCD_Struct_MK2 _frame;
	float _scale;
	NSData* _image;

}

@property (assign,nonatomic) SCD_Struct_MK21 path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK2 frame;              //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) float scale;                       //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSData * image;                    //@synthesize image=_image - In the implementation block
-(void)setImage:(NSData *)arg1 ;
-(void)setFrame:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)frame;
-(id)description;
-(float)scale;
-(SCD_Struct_MK21)path;
-(NSData *)image;
-(void)setScale:(float)arg1 ;
-(void)setPath:(SCD_Struct_MK21)arg1 ;
@end
