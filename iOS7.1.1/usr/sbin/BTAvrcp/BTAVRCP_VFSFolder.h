/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/BTAvrcp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, MPMediaQuery, NSMutableSet;

@interface BTAVRCP_VFSFolder : NSObject {

	NSString* _name;
	unsigned long long _uid;
	BTAVRCP_VFSFolder* _parent;
	MPMediaQuery* _query;
	NSMutableSet* _predicates;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long uid;                  //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) BTAVRCP_VFSFolder * parent;              //@synthesize parent=_parent - In the implementation block
-(unsigned char)createFolderWithUid:(unsigned long long)arg1 folder:(id*)arg2 ;
-(id)replyItemAtIndex:(unsigned)arg1 attributeIDs:(id)arg2 ;
-(id)replyAttributesForUid:(unsigned long long)arg1 attributeIDs:(id)arg2 ;
-(unsigned char)playItemWithUid:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 uid:(unsigned long long)arg2 parent:(id)arg3 ;
-(void)storePredicate:(id)arg1 ;
-(id)replyFolderWithType:(unsigned char)arg1 uid:(id)arg2 name:(id)arg3 ;
-(id)baseQuery;
-(void)addFilterPredicatesToQuery:(id)arg1 ;
-(id)replyItemWithUid:(id)arg1 name:(id)arg2 attributes:(id)arg3 ;
-(void)dealloc;
-(id)query;
-(id)name;
-(unsigned long long)uid;
-(unsigned)childrenCount;
-(id)parent;
@end

