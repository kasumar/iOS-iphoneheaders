/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface MFMailAccountProxy : NSObject {

	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSString * fullUserName; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSString * firstEmailAddress; 
@property (nonatomic,readonly) NSArray * emailAddresses; 
@property (nonatomic,readonly) NSArray * fromEmailAddresses; 
@property (nonatomic,readonly) NSArray * fromEmailAddressesIncludingDisabled; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) bool isDefaultDeliveryAccount; 
@property (nonatomic,readonly) bool supportsSoftBankCodePoints; 
@property (nonatomic,readonly) bool restrictsRepliesAndForwards; 
@property (nonatomic,readonly) id mailAccount; 
-(bool)restrictsRepliesAndForwards;
-(id)mailAccount;
-(id)_initWithProperties:(id)arg1 ;
-(bool)isDefaultDeliveryAccount;
-(id)_emailAddressesAndAliases;
-(bool)_isActive;
-(void)dealloc;
-(id)uniqueID;
-(id)fullUserName;
-(id)emailAddresses;
-(id)fromEmailAddressesIncludingDisabled;
-(id)firstEmailAddress;
-(id)fromEmailAddresses;
-(bool)supportsSoftBankCodePoints;
-(id)username;
-(bool)_isRestricted;
@end

