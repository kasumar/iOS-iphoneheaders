/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumberFormatter, NSString;

@interface SUScriptNumberFormatter : SUScriptObject {

	NSNumberFormatter* _numberFormatter;

}

@property (retain) NSString * localeIdentifier; 
@property (retain) NSString * style; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setStyle:(id)arg1 ;
-(id)style;
-(id)numberFromString:(id)arg1 ;
-(id)localeIdentifier;
-(id)stringFromNumber:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)setLocaleIdentifier:(id)arg1 ;
@end

