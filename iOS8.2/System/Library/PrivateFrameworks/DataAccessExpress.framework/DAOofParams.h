/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSString;

@interface DAOofParams : NSObject {

	int _oofState;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _message;
	int _externalState;
	NSString* _externalMessage;

}

@property (assign,nonatomic) int oofState;                            //@synthesize oofState=_oofState - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                        //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) int externalState;                       //@synthesize externalState=_externalState - In the implementation block
@property (nonatomic,retain) NSString * externalMessage;              //@synthesize externalMessage=_externalMessage - In the implementation block
-(void)setEndTime:(NSDate *)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(char)isEnabled;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSDate *)startTime;
-(id)dictionaryRepresentationForASSettingTask;
-(int)oofState;
-(void)setOofState:(int)arg1 ;
-(void)setExternalMessage:(NSString *)arg1 ;
-(int)externalState;
-(void)setExternalState:(int)arg1 ;
-(NSString *)externalMessage;
-(void)enableOof:(char)arg1 From:(id)arg2 to:(id)arg3 withMessage:(id)arg4 ;
-(NSDate *)endTime;
@end

