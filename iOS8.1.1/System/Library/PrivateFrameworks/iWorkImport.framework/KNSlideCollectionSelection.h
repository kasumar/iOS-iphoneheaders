/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>

@class NSSet, KNSlideNode;

@interface KNSlideCollectionSelection : TSKSelection {

	NSSet* mSlideNodes;
	KNSlideNode* mSlideNodeToEdit;

}

@property (nonatomic,readonly) NSSet * slideNodes; 
@property (nonatomic,readonly) KNSlideNode * slideNodeToEdit; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(void)saveToArchive:(SlideCollectionSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const SlideCollectionSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(NSSet *)slideNodes;
-(id)initWithSlideNode:(id)arg1 ;
-(id)initWithSlideNodes:(id)arg1 slideNodeToEdit:(id)arg2 ;
-(KNSlideNode *)slideNodeToEdit;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEmpty;
@end

