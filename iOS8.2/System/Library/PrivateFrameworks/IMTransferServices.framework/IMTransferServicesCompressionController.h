/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMTransferServicesCompressionController : NSObject {

	NSMutableDictionary* _blockMap;

}
+(id)sharedInstance;
-(void)compressFileTransfer:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)fileCopierDidStart:(id)arg1 ;
-(void)fileCopierDidFinish:(id)arg1 ;
-(void)_mapCopier:(id)arg1 toBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)_blockForCopier:(id)arg1 ;
-(void)_unmapCopier:(id)arg1 ;
@end
