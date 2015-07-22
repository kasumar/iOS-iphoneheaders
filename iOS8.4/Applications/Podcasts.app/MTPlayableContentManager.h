/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MPPlayableContentDataSource.h>
#import <Podcasts/MPPlayableContentDelegate.h>
#import <Podcasts/MTLibraryChangeNotifier.h>

@protocol OS_dispatch_queue;
@class NSString, MTPlayableContentItem, MTLibraryChanges, NSObject, NSMutableArray, NSMapTable, NSMutableDictionary;

@interface MTPlayableContentManager : NSObject <MPPlayableContentDataSource, MPPlayableContentDelegate, MTLibraryChangeNotifier> {

	NSString* _derivedPropertyCallbackToken;
	MTPlayableContentItem* _rootItem;
	MTLibraryChanges* _libraryChanges;
	NSObject*<OS_dispatch_queue> _serialQueue;
	char _forcedReloadData;
	char _lastDumpFailed;
	char _reloadingData;
	char _libraryChangedWhileReloading;
	char _running;
	char _contentActive;
	NSMutableArray* _storeTopPodcastsChart;
	NSMapTable* _contentItems;
	NSMutableDictionary* _uuidCache;

}

@property (nonatomic,retain) NSMutableArray * storeTopPodcastsChart;                 //@synthesize storeTopPodcastsChart=_storeTopPodcastsChart - In the implementation block
@property (nonatomic,retain) NSMapTable * contentItems;                              //@synthesize contentItems=_contentItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uuidCache;                        //@synthesize uuidCache=_uuidCache - In the implementation block
@property (assign,getter=isReloadingData,nonatomic) char reloadingData;              //@synthesize reloadingData=_reloadingData - In the implementation block
@property (assign,nonatomic) char libraryChangedWhileReloading;                      //@synthesize libraryChangedWhileReloading=_libraryChangedWhileReloading - In the implementation block
@property (assign,getter=isRunning,nonatomic) char running;                          //@synthesize running=_running - In the implementation block
@property (assign,getter=isContentActive,nonatomic) char contentActive;              //@synthesize contentActive=_contentActive - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)forceReloadData;
-(void)context:(id)arg1 didInsertObjects:(id)arg2 ;
-(void)context:(id)arg1 didUpdateObjects:(id)arg2 ;
-(void)context:(id)arg1 didDeleteObjects:(id)arg2 ;
-(void)_loadChildrenIfNeeded:(id)arg1 ;
-(void)setContentActive:(char)arg1 ;
-(void)loadTopPodcastsChartsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isPlaybackForcedForIndexPath:(id)arg1 ;
-(id)_childOfItem:(id)arg1 atIndex:(unsigned)arg2 ;
-(char)isReloadingData;
-(void)setLibraryChangedWhileReloading:(char)arg1 ;
-(void)reloadDataAfterDelay;
-(char)libraryChangedWhileReloading;
-(void)libraryChanged:(id)arg1 ;
-(void)setReloadingData:(char)arg1 ;
-(char)rootItemNeedsFullReload;
-(char)dataForSiriHasChanged;
-(void)reloadPlayableContentItemsForUpatedEntities:(id)arg1 ;
-(char)dumpPlistForRootItem;
-(char)dumpDiffForRootItem;
-(char)shouldReloadAllDataForUpdatedPodcastUuids:(id)arg1 ;
-(char)shouldReloadAllDataForUpdatedStationUuids:(id)arg1 ;
-(char)isPropertyWithName:(id)arg1 ofCachedObjectWithUuid:(id)arg2 equalToValue:(id)arg3 ;
-(void)updatePodcastContentItem:(id)arg1 ;
-(void)updateStationContentItem:(id)arg1 ;
-(void)updateEpisodeContentItem:(id)arg1 ;
-(void)updatePlayableContentItem:(id)arg1 withPodcast:(id)arg2 ;
-(void)updatePlayableContentItem:(id)arg1 withStation:(id)arg2 ;
-(void)updatePlayableContentItem:(id)arg1 withEpisode:(id)arg2 ;
-(id)_rootItem;
-(id)dumpPlistTraversal:(id)arg1 ;
-(char)dumpNewDiffToFile:(id)arg1 podcastItems:(id)arg2 stationsItem:(id)arg3 ;
-(id)_diffForSet:(id)arg1 deleteSet:(id)arg2 currentMap:(id)arg3 ;
-(id)_defaultChildOfItem:(id)arg1 ;
-(id)_latestChildOfItem:(id)arg1 ;
-(id)_oldestChildOfItem:(id)arg1 ;
-(id)latestEpisodeForPodcastUuid:(id)arg1 ;
-(id)_createEpisodeItem:(id)arg1 ;
-(id)oldestEpisodeForPodcastUuid:(id)arg1 ;
-(id)defaultEpisodeForPlayback;
-(id)defaultEpisodeForPodcastUuid:(id)arg1 ;
-(id)latestEpisodeOutOfAllPodcasts;
-(id)oldestEpisodeOutOfAllPodcasts;
-(id)episodeMostRecentlyPlayed;
-(id)episodeAfterEpisode:(id)arg1 ;
-(id)latestUncompletedEpisode;
-(id)_createRootItem;
-(id)_createChildrenItemsForTopCharts;
-(id)_createEpisodeItemUnsafe:(id)arg1 ;
-(void)cacheKeys:(id)arg1 forObject:(id)arg2 withUuid:(id)arg3 ;
-(void)invalidatePlayableContentForObjects:(id)arg1 andChangeType:(int)arg2 ;
-(void)invalidateImageCacheForObjects:(id)arg1 ;
-(NSMutableArray *)storeTopPodcastsChart;
-(void)setStoreTopPodcastsChart:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)uuidCache;
-(void)setUuidCache:(NSMutableDictionary *)arg1 ;
-(char)isContentActive;
-(id)_itemAtIndexPath:(id)arg1 ;
-(void)playableContentManager:(id)arg1 initiatePlaybackOfContentItemAtIndexPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)contentItemAtIndexPath:(id)arg1 ;
-(int)numberOfChildItemsAtIndexPath:(id)arg1 ;
-(char)childItemsDisplayPlaybackProgressAtIndexPath:(id)arg1 ;
-(void)beginLoadingChildItemsAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(id)copy;
-(void)start;
-(char)isRunning;
-(void)setRunning:(char)arg1 ;
-(void)setContentItems:(NSMapTable *)arg1 ;
-(NSMapTable *)contentItems;
@end
