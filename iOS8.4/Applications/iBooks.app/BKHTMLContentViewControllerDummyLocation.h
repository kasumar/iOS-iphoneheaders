/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKLocation.h>
#import <iBooks/BKDOMRangeable.h>

@class DOMRange;

@interface BKHTMLContentViewControllerDummyLocation : BKLocation <BKDOMRangeable> {

	DOMRange* _DOMRange;

}

@property (nonatomic,retain) DOMRange * DOMRange;              //@synthesize DOMRange=_DOMRange - In the implementation block
-(id)DOMRangeInWebView:(id)arg1 ;
-(id)extendedDOMRangeInWebView:(id)arg1 ;
-(DOMRange *)DOMRange;
-(void)setDOMRange:(DOMRange *)arg1 ;
-(void)dealloc;
@end

