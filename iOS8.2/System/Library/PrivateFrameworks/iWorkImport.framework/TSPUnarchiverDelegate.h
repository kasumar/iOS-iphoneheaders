/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPUnarchiverDelegate <NSObject>
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) char didFinishResolvingReferences; 
@property (nonatomic,readonly) char isFromPasteboard; 
@property (nonatomic,readonly) char isCrossDocumentPaste; 
@property (nonatomic,readonly) char isCrossAppPaste; 
@optional
-(char)isCrossAppPaste;
-(char)isCrossDocumentPaste;
-(char)isFromPasteboard;

@required
-(unsigned long long)fileFormatVersion;
-(char)didFinishResolvingReferences;
-(void)unarchiver:(id)arg1 didReadLazyReference:(id)arg2 isExternal:(char*)arg3;
-(id)dataForIdentifier:(long long)arg1;
-(id)UUIDForObjectIdentifier:(long long)arg1;

@end

