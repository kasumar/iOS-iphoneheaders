/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:03:16 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCTermDumper, PQLConnection, NSString;

@interface BRCDumpContext : NSObject {

	int _indentation;
	BRCTermDumper* _termDumper;
	char _liveDaemon;
	_sFILE* _fp;
	PQLConnection* _db;
	NSString* _indentationBaseString;

}

@property (nonatomic,readonly) PQLConnection * db;                          //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) _sFILE* fp;                                  //@synthesize fp=_fp - In the implementation block
@property (nonatomic,retain) NSString * indentationBaseString;              //@synthesize indentationBaseString=_indentationBaseString - In the implementation block
@property (assign,nonatomic) char liveDaemon;                               //@synthesize liveDaemon=_liveDaemon - In the implementation block
+(id)stringFromItemID:(id)arg1 context:(id)arg2 ;
+(id)stringFromByteCount:(long long)arg1 context:(id)arg2 ;
+(id)highlightedString:(id)arg1 type:(int)arg2 context:(id)arg3 ;
+(id)stringFromThrottleState:(int)arg1 context:(id)arg2 ;
+(id)stringFromDueStamp:(unsigned long long)arg1 now:(unsigned long long)arg2 context:(id)arg3 allowsPast:(char)arg4 ;
+(id)stringFromItemAsString:(id)arg1 context:(id)arg2 ;
+(id)stringFromByteCount:(long long)arg1 showActualByteCount:(char)arg2 suffix:(id)arg3 context:(id)arg4 ;
+(id)stringFromErrorString:(id)arg1 context:(id)arg2 ;
+(id)stringFromError:(id)arg1 context:(id)arg2 ;
+(id)stringFromBackoff:(double)arg1 context:(id)arg2 ;
-(PQLConnection *)db;
-(void)writeLineWithFormat:(id)arg1 ;
-(id)highlightedString:(id)arg1 type:(int)arg2 ;
-(void)pushIndentation;
-(char)liveDaemon;
-(void)popIndentation;
-(id)initWithFile:(_sFILE*)arg1 db:(id)arg2 ;
-(void)setLiveDaemon:(char)arg1 ;
-(_sFILE*)fp;
-(NSString *)indentationBaseString;
-(void)setIndentationBaseString:(NSString *)arg1 ;
@end
