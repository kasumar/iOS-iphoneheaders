/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/MobileSafari.axbundle/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/AddressViewAccessibility_super.h>

@interface AddressViewAccessibility : AddressViewAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)setShowsSecurityButton:(bool)arg1 ;
-(void)updateReaderButton;
-(void)_hideCompletions;
-(void)setProgress:(float)arg1 forceUpdate:(bool)arg2 ;
-(void)_axLoadAddressTextInfo;
-(void)_createAddressTextFieldIfNecessary;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(unsigned long long)accessibilityTraits;
-(bool)accessibilityScrollToVisible;
-(void)_accessibilityLoadAccessibilityInformation;
@end

