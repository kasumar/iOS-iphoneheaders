/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:21:45 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebUI/WBSURLCompletionMatch.h>

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {

	RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>* _match;

}

@property (nonatomic,readonly) id<WBSURLCompletionMatchData> data; 
@property (nonatomic,readonly) float weight; 
-(id)title;
-(id<WBSURLCompletionMatchData>)data;
-(float)weight;
-(id)originalURLString;
-(id)initWithBookmarkAndHistoryCompletionMatch:(PassRefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>*)arg1 ;
-(id)userVisibleURLString;
-(id)parsecDomainIdentifier;
@end

