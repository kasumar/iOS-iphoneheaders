/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMNode.h>

@class NSString, DOMCSSStyleDeclaration;

@interface DOMElement : DOMNode

@property (readonly) char mf_isContainedInTable; 
@property (readonly) char mf_isContainedInQuoteBlock; 
@property (readonly) DOMElement * mf_containingQuoteBlockElement; 
@property (copy,readonly) NSString * tagName; 
@property (readonly) DOMCSSStyleDeclaration * style; 
@property (readonly) int offsetLeft; 
@property (readonly) int offsetTop; 
@property (readonly) int offsetWidth; 
@property (readonly) int offsetHeight; 
@property (readonly) int clientLeft; 
@property (readonly) int clientTop; 
@property (readonly) int clientWidth; 
@property (readonly) int clientHeight; 
@property (assign) int scrollLeft; 
@property (assign) int scrollTop; 
@property (readonly) int scrollWidth; 
@property (readonly) int scrollHeight; 
@property (readonly) DOMElement * offsetParent; 
@property (copy) NSString * className; 
@property (readonly) DOMElement * firstElementChild; 
@property (readonly) DOMElement * lastElementChild; 
@property (readonly) DOMElement * previousElementSibling; 
@property (readonly) DOMElement * nextElementSibling; 
@property (readonly) unsigned childElementCount; 
@property (copy,readonly) NSString * innerText; 
+(char)isRichTextStyle:(id)arg1 ;
+(id)_DOMElementFromJSContext:(OpaqueJSContextRef)arg1 value:(OpaqueJSValueRef)arg2 ;
-(void)mf_stripCSSStyle;
-(char)isRichTextElementType;
-(char)hasMarginsOfZero;
-(void)recursivelyRemoveMailAttributes;
-(DOMElement *)mf_containingQuoteBlockElement;
-(id)mf_computedBackgroundColor;
-(char)isRichTextElement;
-(int)mf_quoteLevelDelta;
-(char)mf_isContainedInTable;
-(char)mf_isContainedInQuoteBlock;
-(char)mf_isContainedInAnyElementInSet:(id)arg1 ;
-(char)mf_hasBackgroundColorOrImage;
-(char)selectable;
-(char)hasCustomLineHeight;
-(char)exceedsStructuralComplexity:(int)arg1 ;
-(char)isHidden;
-(char)inDocument;
-(char)touchCalloutEnabled;
-(id)tapHighlightColor;
-(void)getTextWritingDirection:(int*)arg1 override:(char*)arg2 ;
-(DOMCSSStyleDeclaration *)style;
-(CTFontRef)_font;
-(void)setAttribute:(id)arg1 value:(id)arg2 ;
-(NSString *)innerText;
-(NSString *)tagName;
-(id)getAttribute:(id)arg1 ;
-(int)scrollLeft;
-(int)scrollTop;
-(int)scrollWidth;
-(int)scrollHeight;
-(void)setScrollLeft:(int)arg1 ;
-(void)setScrollTop:(int)arg1 ;
-(char)isFocused;
-(NSString *)className;
-(id)getElementsByTagName:(id)arg1 ;
-(int)offsetWidth;
-(int)offsetHeight;
-(int)structuralComplexityContribution;
-(DOMElement *)firstElementChild;
-(DOMElement *)nextElementSibling;
-(void)remove;
-(void)blur;
-(void)focus;
-(id)_getURLAttribute:(id)arg1 ;
-(id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2 ;
-(id)getElementsByTagNameNS:(id)arg1 :(id)arg2 ;
-(id)getElementsByClassName:(id)arg1 ;
-(id)querySelector:(id)arg1 ;
-(id)querySelectorAll:(id)arg1 ;
-(int)offsetLeft;
-(int)offsetTop;
-(int)clientLeft;
-(int)clientTop;
-(int)clientWidth;
-(int)clientHeight;
-(DOMElement *)offsetParent;
-(void)setClassName:(NSString *)arg1 ;
-(id)classList;
-(DOMElement *)lastElementChild;
-(DOMElement *)previousElementSibling;
-(unsigned)childElementCount;
-(id)webkitRegionOverset;
-(void)setAttribute:(id)arg1 :(id)arg2 ;
-(void)removeAttribute:(id)arg1 ;
-(id)getAttributeNode:(id)arg1 ;
-(id)setAttributeNode:(id)arg1 ;
-(id)removeAttributeNode:(id)arg1 ;
-(id)getAttributeNS:(id)arg1 localName:(id)arg2 ;
-(id)getAttributeNS:(id)arg1 :(id)arg2 ;
-(void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3 ;
-(void)setAttributeNS:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)removeAttributeNS:(id)arg1 localName:(id)arg2 ;
-(void)removeAttributeNS:(id)arg1 :(id)arg2 ;
-(id)getAttributeNodeNS:(id)arg1 localName:(id)arg2 ;
-(id)getAttributeNodeNS:(id)arg1 :(id)arg2 ;
-(id)setAttributeNodeNS:(id)arg1 ;
-(char)hasAttribute:(id)arg1 ;
-(char)hasAttributeNS:(id)arg1 localName:(id)arg2 ;
-(char)hasAttributeNS:(id)arg1 :(id)arg2 ;
-(void)scrollIntoView:(char)arg1 ;
-(void)scrollIntoViewIfNeeded:(char)arg1 ;
-(void)scrollByLines:(int)arg1 ;
-(void)scrollByPages:(int)arg1 ;
-(char)matches:(id)arg1 ;
-(char)webkitMatchesSelector:(id)arg1 ;
@end

