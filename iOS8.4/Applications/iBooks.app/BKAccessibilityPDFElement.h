/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityReadingContent.h>

@interface BKAccessibilityPDFElement : UIAccessibilityElement <UIAccessibilityReadingContent> {

	int _page;
	int _pageCount;
	CGPDFPageRef _pdfPage;

}

@property (assign,nonatomic) int page;                          //@synthesize page=_page - In the implementation block
@property (assign,nonatomic) int pageCount;                     //@synthesize pageCount=_pageCount - In the implementation block
@property (nonatomic,retain) CGPDFPageRef pdfPage;              //@synthesize pdfPage=_pdfPage - In the implementation block
-(id)_imaxLineSelections;
-(CGPDFSelectionRef)_imaxLineSelectionForSelection:(CGPDFSelectionRef)arg1 ;
-(void)setPdfPage:(CGPDFPageRef)arg1 ;
-(int)accessibilityLineNumberForPoint:(CGPoint)arg1 ;
-(id)accessibilityContentForLineNumber:(int)arg1 ;
-(CGRect)accessibilityFrameForLineNumber:(int)arg1 ;
-(id)accessibilityPageContent;
-(void)dealloc;
-(CGRect)frame;
-(int)pageCount;
-(CGRect)accessibilityFrame;
-(int)page;
-(void)setPage:(int)arg1 ;
-(void)setPageCount:(int)arg1 ;
-(CGPDFPageRef)pdfPage;
-(char)_accessibilityReadAllContinuesWithScroll;
@end
