/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OIXMLNode.h>

@interface OIXMLElement : OIXMLNode {

	id _attributes;
	id _children;
	bool _hasMultipleAttributes;
	bool _hasMultipleChildren;

}
+(void)_initEmptyHTMLNames;
+(bool)isEmptyHTMLElement:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setObjectValue:(id)arg1 ;
-(id)objectValue;
-(id)stringValue;
-(void)addChild:(id)arg1 ;
-(void)addAttribute:(id)arg1 ;
-(id)openingTagString;
-(id)closingTagString;
-(long long)childrenCount;
-(id)initWithName:(id)arg1 stringValue:(id)arg2 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
-(id)contentString;
-(long long)attributeCount;
@end

