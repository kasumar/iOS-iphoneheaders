/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol EmergencyDialerDelegate;
@interface EmergencyDialer : SBUIEmergencyCallHostViewController {

	<EmergencyDialerDelegate>* _delegate;

}

@property (assign) <EmergencyDialerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)shouldAutorotate;
-(void)dismiss;
@end

