/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSString;

@interface MachineDataProvisioningOperation : ISOperation {

	unsigned long long _accountID;
	BOOL _allowsBootstrapCellularData;
	BOOL _hidesServerDrivenDialogs;
	NSData* _inputData;
	NSString* _userAgent;

}

@property (assign) BOOL allowsBootstrapCellularData; 
@property (assign) BOOL hidesServerDrivenDialogs; 
@property (copy) NSString * userAgent; 
-(void)setHidesServerDrivenDialogs:(BOOL)arg1 ;
-(id)_newFinishProvisioningOperationWithData:(id)arg1 ;
-(BOOL)_finishProvisioningWithResponse:(id)arg1 sessionID:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)hidesServerDrivenDialogs;
-(id)initWithAccountIdentifier:(unsigned long long)arg1 provisioningData:(id)arg2 ;
-(NSString *)userAgent;
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
@end

