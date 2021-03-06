/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/Support/voicememod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface RCSXPCTransaction : NSObject {

	NSUUID* _identifier;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(id)activeTransactions;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isActive;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)_identifier;
-(id)initWithName:(id)arg1 ;
-(void)beginTransaction;
-(void)endTransaction;
-(void)endTransactionOnDate:(id)arg1 ;
@end

