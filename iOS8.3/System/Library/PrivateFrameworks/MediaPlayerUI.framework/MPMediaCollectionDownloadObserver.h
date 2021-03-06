/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:24:54 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>

@class NSMutableArray;

@interface MPMediaCollectionDownloadObserver : MPUMediaDownloadObserver {

	NSMutableArray* _downloadObservers;
	char _callingProgressHandler;

}
-(id)initWithCollection:(id)arg1 ;
-(char)isPurchasing;
-(void)dealloc;
-(void)invalidate;
-(unsigned)downloadsCount;
-(char)isCurrentlyPlayable;
-(void)_callProgressHandler;
-(double)downloadProgress;
@end

