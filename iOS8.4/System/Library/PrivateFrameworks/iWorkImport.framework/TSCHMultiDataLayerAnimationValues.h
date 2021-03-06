/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CALayer, NSString, NSArray;

@interface TSCHMultiDataLayerAnimationValues : NSObject {

	CALayer* mLayer;
	NSString* mKey;
	NSArray* mValues;
	NSArray* mKeyTimes;
	BOOL mNeedPresentationLayerValues;

}

@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSArray * values; 
@property (nonatomic,readonly) NSArray * keyTimes; 
@property (nonatomic,readonly) BOOL needPresentationLayerValues; 
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5 ;
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 ;
+(id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 ;
-(id)initWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5 ;
-(BOOL)needPresentationLayerValues;
-(void)dealloc;
-(CALayer *)layer;
-(id)description;
-(NSString *)key;
-(NSArray *)values;
-(NSArray *)keyTimes;
@end

