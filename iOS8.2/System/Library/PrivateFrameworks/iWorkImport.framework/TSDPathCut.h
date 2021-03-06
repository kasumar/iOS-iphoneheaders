/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSDPathCut : NSObject {

	int mSegment;
	float mT;
	float mSkew;

}

@property (nonatomic,readonly) int segment; 
@property (nonatomic,readonly) float t; 
@property (nonatomic,readonly) float skew; 
-(id)initWithSegment:(int)arg1 atT:(float)arg2 withSkew:(float)arg3 ;
-(int)segment;
-(float)t;
-(float)skew;
-(id)description;
@end

