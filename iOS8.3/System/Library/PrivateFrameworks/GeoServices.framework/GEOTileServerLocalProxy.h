/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:07 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileServerProxy.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>

@class GEODBWriter, GEODBReader, NSString, NSMapTable, NSMutableArray, NSLock;

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOResourceManifestTileGroupObserver> {

	GEODBWriter* _dbWriter;
	GEODBReader* _dbReader;
	NSString* _cacheLocation;
	NSMapTable* _providers;
	NSMutableArray* _inProgress;
	NSLock* _inProgressLock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)open;
-(id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 ;
-(void)cancel:(const GEOTileKey*)arg1 ;
-(void)loadTiles:(id)arg1 priorities:(unsigned*)arg2 options:(unsigned)arg3 client:(id)arg4 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(char)arg2 ;
-(void)endPreloadSession;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
-(void)calculateFreeableSize;
-(void)registerProvider:(Class)arg1 ;
-(void)flushPendingWrites;
-(char)skipNetworkForKeysWhenPreloading:(id)arg1 ;
-(void)_registerBuiltInProviders;
-(void)_updateExpiringTilesets;
-(id)userInfoForRequesterUserInfo:(id)arg1 tileEdition:(unsigned)arg2 tileSet:(unsigned)arg3 eTag:(id)arg4 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 ;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 etag:(id)arg5 forKey:(GEOTileKey)arg6 userInfo:(id)arg7 ;
-(void)tileRequesterFinished:(id)arg1 ;
@end

