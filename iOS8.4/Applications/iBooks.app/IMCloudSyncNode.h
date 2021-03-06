/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IMCloudSyncTransaction, NSString, NSData, NSNumber, NSDate, NSArray, NSDictionary;

@interface IMCloudSyncNode : NSObject {

	IMCloudSyncTransaction* _transaction;
	NSString* _key;
	NSString* _version;
	NSData* _value;
	char _mismatch;
	NSString* _wrapperRevision;
	NSString* _name;

}

@property (nonatomic,retain) IMCloudSyncTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * value;                                    //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * wrapperRevision;                        //@synthesize wrapperRevision=_wrapperRevision - In the implementation block
@property (assign,nonatomic) char mismatch;                                     //@synthesize mismatch=_mismatch - In the implementation block
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * stringValue; 
@property (nonatomic,retain) NSNumber * numberValue; 
@property (nonatomic,retain) NSDate * dateValue; 
@property (nonatomic,retain) NSData * dataValue; 
@property (nonatomic,retain) NSArray * arrayValue; 
@property (nonatomic,retain) NSDictionary * dictionaryValue; 
@property (nonatomic,retain) id objectValue; 
+(id)keyWithPrefix:(id)arg1 assetID:(id)arg2 ;
+(id)serverRevisionNewerThanClientKeys;
+(id)cloudDataCurrentRevision;
+(char)isServerRevisionNewerThanClient:(id)arg1 ;
+(id)cloudDataMaxRevision;
+(void)setServerRevisionNewerThanClient:(id)arg1 ;
+(id)keysWithPrefix:(id)arg1 assetIDs:(id)arg2 ;
+(id)assetIDForKey:(id)arg1 withPrefix:(id)arg2 ;
-(void)setMismatch:(char)arg1 ;
-(void)setWrapperRevision:(NSString *)arg1 ;
-(void)setArrayValue:(NSArray *)arg1 ;
-(NSArray *)arrayValue;
-(char)mismatch;
-(void)setDictionaryValue:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionaryValue;
-(id)objectValueMatchingClass:(Class)arg1 ;
-(id)_payload;
-(NSString *)wrapperRevision;
-(void)setTransaction:(IMCloudSyncTransaction *)arg1 ;
-(IMCloudSyncTransaction *)transaction;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)key;
-(NSData *)value;
-(void)setValue:(NSData *)arg1 ;
-(void)setObjectValue:(id)arg1 ;
-(id)objectValue;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)setDateValue:(NSDate *)arg1 ;
-(NSDate *)dateValue;
-(char)hasData;
-(NSData *)dataValue;
-(void)setNumberValue:(NSNumber *)arg1 ;
-(void)setDataValue:(NSData *)arg1 ;
-(NSNumber *)numberValue;
@end

