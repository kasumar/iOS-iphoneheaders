/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SBIconIndexNode <NSObject>
@required
-(id)nodeIdentifier;
-(BOOL)containsNodeIdentifier:(id)arg1;
-(id)nodeDescriptionWithPrefix:(id)arg1;
-(void)addNodeObserver:(id)arg1;
-(void)removeNodeObserver:(id)arg1;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;

@end

