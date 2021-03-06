/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/NSCopying.h>

@protocol AEAnnotation;
@class AEAnnotationTheme;

@interface AEMarginNote : NSObject <NSCopying> {

	int mSide;
	float mYStart;
	float mXOffset;
	id<AEAnnotation> mAnnotation;
	AEAnnotationTheme* mTheme;

}

@property (nonatomic,retain) AEAnnotationTheme * theme; 
@property (assign,nonatomic) int side; 
@property (nonatomic,retain) id<AEAnnotation> annotation; 
@property (assign,nonatomic) float yStart; 
@property (assign,nonatomic) float xOffset; 
-(int)side;
-(void)setSide:(int)arg1 ;
-(float)yStart;
-(void)setYStart:(float)arg1 ;
-(float)xOffset;
-(void)setXOffset:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<AEAnnotation>)annotation;
-(void)setAnnotation:(id<AEAnnotation>)arg1 ;
-(AEAnnotationTheme *)theme;
-(void)setTheme:(AEAnnotationTheme *)arg1 ;
@end

