/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:40:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBCentral, CBCharacteristic, NSNumber, NSMutableData, NSData;

@interface CBATTRequest : NSObject {

	CBCentral* _central;
	CBCharacteristic* _characteristic;
	unsigned _offset;
	NSNumber* _transactionID;
	NSMutableData* _value;
	char _ignoreResponse;

}

@property (nonatomic,retain,readonly) CBCentral * central;                   //@synthesize central=_central - In the implementation block
@property (nonatomic,retain) CBCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) unsigned offset;                              //@synthesize offset=_offset - In the implementation block
@property (copy) NSData * value;                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionID;                     //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,nonatomic) char ignoreResponse;                            //@synthesize ignoreResponse=_ignoreResponse - In the implementation block
-(char)ignoreResponse;
-(id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned)arg3 transactionID:(id)arg4 ;
-(void)appendValueData:(id)arg1 ;
-(void)setIgnoreResponse:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(NSData *)value;
-(void)setValue:(NSData *)arg1 ;
-(unsigned)endOffset;
-(unsigned)offset;
-(NSNumber *)transactionID;
-(CBCharacteristic *)characteristic;
-(void)setCharacteristic:(CBCharacteristic *)arg1 ;
-(CBCentral *)central;
@end

