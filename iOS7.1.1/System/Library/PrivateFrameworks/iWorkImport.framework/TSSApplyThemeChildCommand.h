/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCommand.h>

@class TSSApplyThemeCommand;

@interface TSSApplyThemeChildCommand : TSKCommand {

	TSSApplyThemeCommand* mParent;

}

@property (nonatomic,readonly) TSSApplyThemeCommand * parent; 
-(void)saveToArchive:(ApplyThemeChildCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ApplyThemeChildCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithParentCommand:(id)arg1 ;
-(id)parent;
@end

