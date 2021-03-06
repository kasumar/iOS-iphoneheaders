/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicSongsViewController.h>
#import <MusicUI/MusicPickerOverlayDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class MusicPlaylistActionsView, UIActionSheet, NSOperationQueue;

@interface MusicPlaylistSongsViewController : MusicSongsViewController <MusicPickerOverlayDelegate, UIActionSheetDelegate> {

	MusicPlaylistActionsView* _actionsView;
	UIActionSheet* _clearActionSheet;
	UIActionSheet* _deleteActionSheet;
	NSOperationQueue* _downloadabilityOperationQueue;
	bool _isTransitioning;
	bool _isDownloading;
	long long _downloadableSongCount;

}

@property (nonatomic,readonly) long long downloadableSongCount;              //@synthesize downloadableSongCount=_downloadableSongCount - In the implementation block
@property (nonatomic,readonly) bool isDownloading;                           //@synthesize isDownloading=_isDownloading - In the implementation block
+(bool)_supportsSearch;
+(bool)_shouldDisplayActions;
+(bool)_shouldPopWhenEmpty;
+(id)actionCellConfigurationClasses;
-(bool)isDownloading;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)dealloc;
-(void)reloadData;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void).cxx_destruct;
-(bool)shouldShowActionCellConfiguration:(Class)arg1 ;
-(void)_updateActionsView;
-(id)_playlist;
-(void)_updateDownloadabilityStateWithCanReloadActionRows:(bool)arg1 animated:(bool)arg2 ;
-(id)_playlistTitle;
-(void)_updateCloudPlaylist;
-(bool)_allowsIndividualTrackDeletion;
-(bool)_allowsAddingSongs;
-(void)_addItemsAction:(id)arg1 ;
-(id)_seedItem;
-(void)pickerOverlayRequestsFinish:(id)arg1 ;
-(void)pickerOverlayDidFinish:(id)arg1 ;
-(void)_clearAction:(id)arg1 ;
-(void)_doneEditingAction:(id)arg1 ;
-(void)_downloadAllButtonAction:(id)arg1 ;
-(void)_geniusNewAction:(id)arg1 ;
-(void)_geniusRefreshAction:(id)arg1 ;
-(void)_geniusSaveAction:(id)arg1 ;
-(bool)_allowsEditing;
-(long long)downloadableSongCount;
-(void)_deleteAction:(id)arg1 ;
-(void)_editAction:(id)arg1 ;
@end

