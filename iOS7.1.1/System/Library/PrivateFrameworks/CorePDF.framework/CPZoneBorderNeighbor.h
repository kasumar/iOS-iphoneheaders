/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CorePDF/CPCopying.h>

@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying> {

	CPShape* neighborShape;
	int shapeSide;

}
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initSuper;
-(id)neighborShape;
-(int)shapeSide;
-(void)setNeighborShape:(id)arg1 ;
-(void)setShapeSide:(int)arg1 ;
@end

