/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSArray;

@interface NSPullChangeHistoryRequest : NSPersistentStoreRequest {

	NSArray* _generationTokens;

}
-(id)initWithGenerationTokens:(id)arg1 ;
-(id)generationTokens;
-(void)setGenerationTokens:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)requestType;
@end
