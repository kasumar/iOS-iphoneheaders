/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExternalAccessory/BTDevicePickerDelegate.h>

@protocol EABluetoothAccessoryPickerDelegate;
@class BTDevicePicker;

@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate> {

	BTDevicePicker* _picker;
	<EABluetoothAccessoryPickerDelegate>* _delegate;

}

@property (assign,nonatomic) <EABluetoothAccessoryPickerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)wakeSelectedBluetoothAccessories:(id)arg1 ;
-(void)devicePicker:(id)arg1 didDismissWithResult:(long long)arg2 device:(id)arg3 ;
-(void)dismissPicker;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)show;
-(id)initWithPredicate:(id)arg1 ;
@end

