/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class SKUIIndexBarEntryDescriptor, SKUIViewElement, SKUIIndexBarEntryViewElement;

@interface SKUIIndexBarSingleEntryListController : SKUIIndexBarEntryListController {

	SKUIIndexBarEntryDescriptor* _entryDescriptor;
	SKUIViewElement* _descriptiveViewElement;
	SKUIIndexBarEntryViewElement* _entryViewElement;

}

@property (nonatomic,readonly) SKUIIndexBarEntryViewElement * entryViewElement;              //@synthesize entryViewElement=_entryViewElement - In the implementation block
-(void)reloadViewElementData;
-(id)initWithEntryViewElement:(id)arg1 ;
-(id)entryDescriptorAtIndex:(long long)arg1 ;
-(BOOL)hidesIndexBar;
-(BOOL)needsRootTargetViewElement;
-(long long)numberOfEntryDescriptors;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2 ;
-(SKUIIndexBarEntryViewElement *)entryViewElement;
@end
