/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASTTemplateRating.h>

@class SAUILocalImageResource, SAUIDecoratedText;

@interface SASTTemplatePercentageRating : SASTTemplateRating

@property (nonatomic,retain) SAUILocalImageResource * localImageResource; 
@property (nonatomic,retain) SAUIDecoratedText * value; 
+(id)templatePercentageRating;
+(id)templatePercentageRatingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIDecoratedText *)value;
-(void)setValue:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
-(SAUILocalImageResource *)localImageResource;
-(void)setLocalImageResource:(SAUILocalImageResource *)arg1 ;
@end

