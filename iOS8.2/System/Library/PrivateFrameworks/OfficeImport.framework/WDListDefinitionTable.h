/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDDocument, NSMutableArray, NSMutableDictionary, WDListDefinition;

@interface WDListDefinitionTable : NSObject {

	WDDocument* mDocument;
	NSMutableArray* mListDefinitions;
	NSMutableDictionary* mListDefinitionMapById;
	NSMutableDictionary* mListDefinitionMapByStyleId;
	WDListDefinition* mNullListDefinition;

}
-(void)dealloc;
-(id)initWithDocument:(id)arg1 ;
-(id)definitionWithDefinitionId:(long)arg1 ;
-(id)definitionWithStyleId:(id)arg1 ;
-(id)definitions;
-(id)addDefinitionWithDefinitionId:(long)arg1 styleId:(id)arg2 ;
-(void)setStyleId:(id)arg1 forDefinitionWithDefinitionId:(long)arg2 ;
-(id)resolvedDefinitionWithDefinitionId:(long)arg1 ;
@end

