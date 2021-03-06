/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VUSocialUpload/VUSocialUpload-Structs.h>
#import <Social/SLComposeServiceViewController.h>
#import <VUSocialUpload/VimeoComposeOptionViewDelegate.h>

@class UIImageView, SLSheetAction, VimeoDetailsController, ACAccountStore, ACAccount, NSString, NSArray;

@interface VimeoComposeViewController : SLComposeServiceViewController <VimeoComposeOptionViewDelegate> {

	UIImageView* _logoView;
	SLSheetAction* _detailsAction;
	VimeoDetailsController* _detailsController;
	ACAccountStore* _accountStore;
	ACAccount* _vimeoAccount;
	NSString* _description;
	NSArray* _tags;
	long long _videoSize;
	long long _privacySettings;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * vimeoAccount;                   //@synthesize vimeoAccount=_vimeoAccount - In the implementation block
@property (nonatomic,retain) NSString * description;                     //@synthesize description=_description - In the implementation block
@property (nonatomic,retain) NSArray * tags;                             //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) long long videoSize;                        //@synthesize videoSize=_videoSize - In the implementation block
@property (assign,nonatomic) long long privacySettings;                  //@synthesize privacySettings=_privacySettings - In the implementation block
-(void)setAccountStore:(id)arg1 ;
-(id)accountStore;
-(bool)validateText:(id)arg1 ;
-(long long)privacySettings;
-(void)setPrivacySettings:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(bool)arg1 ;
-(bool)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)send;
-(void)setTags:(id)arg1 ;
-(id)tags;
-(id)sheetActions;
-(void)setDescription:(id)arg1 ;
-(void)setVimeoAccount:(id)arg1 ;
-(long long)videoSize;
-(void)setVideoSize:(long long)arg1 ;
-(id)vimeoAccount;
-(void)vimeoComposeOptionsViewDidFinish:(id)arg1 ;
@end

