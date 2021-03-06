/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class MusicLibraryBrowseCollectionViewConfiguration;

@interface MusicLibraryCollectionBasedTableViewConfiguration : MusicLibraryBrowseTableViewConfiguration {

	MusicLibraryBrowseCollectionViewConfiguration* _collectionViewConfiguration;

}
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4 ;
-(id)initWithBrowseCollectionViewConfiguration:(id)arg1 ;
@end

