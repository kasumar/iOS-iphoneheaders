/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPList;

@interface CPListItem : NSObject <CPDisposable> {

	CPList* list;
	int number;
	CFArrayRef paragraphs;

}

@property (nonatomic,retain) CPList * list; 
@property (assign,nonatomic) int number; 
-(void)dealloc;
-(id)init;
-(void)dispose;
-(void)setList:(CPList *)arg1 ;
-(void)addParagraph:(id)arg1 ;
-(CPList *)list;
-(id)paragraphAtIndex:(unsigned)arg1 ;
-(unsigned)paragraphCount;
-(void)setNumber:(int)arg1 ;
-(int)number;
-(void)finalize;
@end

