/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSAPdfHyperlinkController : NSObject {

	NSMutableArray* mHyperlinks;

}
-(id)p_hyperlinkRegionsForRep:(id)arg1 context:(CGContextRef)arg2 ;
-(void)addHyperlinksForRep:(id)arg1 context:(CGContextRef)arg2 ;
-(CGRect)canvasRect;
-(char)ignoreUrl:(id)arg1 ;
-(id)p_chopBezierIntoRects:(id)arg1 ;
-(void)p_combineSimilarElements:(id)arg1 ;
-(char)isDestination:(id)arg1 ;
-(void)p_commitDestinationToPDF:(id)arg1 cgrect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)p_commitUrlToPDF:(id)arg1 cgrect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(id)p_splitIntoSubshapes:(id)arg1 ;
-(id)destinationFromUrl:(id)arg1 ;
-(void)addHyperlinkForRect:(CGRect)arg1 withUrl:(id)arg2 context:(CGContextRef)arg3 ;
-(void)addHyperlinksForContents:(id)arg1 context:(CGContextRef)arg2 ;
-(void)commitHyperlinksToPDF:(CGContextRef)arg1 targetRect:(CGRect)arg2 ;
-(void)dealloc;
-(id)init;
@end
