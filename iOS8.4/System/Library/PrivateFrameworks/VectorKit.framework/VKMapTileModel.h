/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKMapLayer.h>
#import <VectorKit/VKStyleManagerObserver.h>

@class VKStyleManager, NSMutableSet, VKMapModel, NSSet, NSString;

@interface VKMapTileModel : VKModelObject <VKMapLayer, VKStyleManagerObserver> {

	NSMutableSet* _tilesWillEnterScene;
	NSMutableSet* _tilesInScene;
	NSMutableSet* _tilesInScenePlusExitingTiles;
	NSMutableSet* _tilesWillExitScene;
	NSMutableSet* _tilesExitingScene;
	NSMutableSet* _previousTilesInScene;
	VKMapModel* _mapModel;
	unsigned char _minimumZ;
	unsigned char _maximumZ;

}

@property (assign,nonatomic) VKMapModel * mapModel;                               //@synthesize mapModel=_mapModel - In the implementation block
@property (nonatomic,readonly) NSSet * tilesInScene;                              //@synthesize tilesInScene=_tilesInScene - In the implementation block
@property (nonatomic,readonly) NSSet * tilesInScenePlusExitingTiles;              //@synthesize tilesInScenePlusExitingTiles=_tilesInScenePlusExitingTiles - In the implementation block
@property (nonatomic,readonly) unsigned char minimumZ;                            //@synthesize minimumZ=_minimumZ - In the implementation block
@property (nonatomic,readonly) unsigned char maximumZ;                            //@synthesize maximumZ=_maximumZ - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) VKStyleManager * styleManager; 
+(BOOL)reloadOnStylesheetChange;
+(BOOL)reloadOnActiveTileGroupChange;
-(void)dealloc;
-(id)init;
-(void)reset;
-(VKStyleManager *)styleManager;
-(void)setMapModel:(VKMapModel *)arg1 ;
-(void)didMoveToSupermodel;
-(BOOL)shouldLayoutWithoutStyleManager;
-(void)stylesheetWillChange;
-(void)stylesheetDidChange;
-(void)activeTileGroupChanged;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(unsigned long long)mapLayerPosition;
-(void)updateTilesInScene:(id)arg1 withContext:(id)arg2 categorize:(BOOL)arg3 ;
-(VKMapModel *)mapModel;
-(void)createCollections;
-(void)clearCollections;
-(void)createCollectionsIfNecessary;
-(void)removePersistingExitingTiles:(id)arg1 ;
-(void)willStartDrawingTiles:(id)arg1 ;
-(void)willStopDrawingTiles:(id)arg1 ;
-(NSSet *)tilesInScene;
-(NSSet *)tilesInScenePlusExitingTiles;
-(unsigned char)minimumZ;
-(unsigned char)maximumZ;
@end

