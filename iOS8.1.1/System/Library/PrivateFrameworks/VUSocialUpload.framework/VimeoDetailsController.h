/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VUSocialUpload/VUSocialUpload-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol VimeoComposeOptionViewDelegate;
@class UITextView, UITableViewCell, NSMutableArray, NSIndexPath, NSArray, NSString;

@interface VimeoDetailsController : UITableViewController <UITextFieldDelegate> {

	UITextView* _descriptionTextView;
	UITableViewCell* _descriptionCell;
	NSMutableArray* _tags;
	id<VimeoComposeOptionViewDelegate> _delegate;
	NSMutableArray* _videoSizes;
	long long _videoSize;
	long long _privacySetting;
	NSIndexPath* _indexPathForPendingFirstResponder;
	NSArray* _videoSizeStrings;
	NSArray* _videoSizeFormatStrings;
	NSArray* _privacyLevels;

}

@property (assign,nonatomic,__weak) id<VimeoComposeOptionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableArray * videoSizes;                                   //@synthesize videoSizes=_videoSizes - In the implementation block
@property (nonatomic,readonly) NSString * videoDescription; 
@property (nonatomic,readonly) NSArray * tags; 
@property (nonatomic,readonly) long long videoSize;                                           //@synthesize videoSize=_videoSize - In the implementation block
@property (nonatomic,readonly) long long privacySetting;                                      //@synthesize privacySetting=_privacySetting - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathForPendingFirstResponder;                 //@synthesize indexPathForPendingFirstResponder=_indexPathForPendingFirstResponder - In the implementation block
@property (nonatomic,retain) NSArray * videoSizeStrings;                                      //@synthesize videoSizeStrings=_videoSizeStrings - In the implementation block
@property (nonatomic,retain) NSArray * videoSizeFormatStrings;                                //@synthesize videoSizeFormatStrings=_videoSizeFormatStrings - In the implementation block
@property (nonatomic,retain) NSArray * privacyLevels;                                         //@synthesize privacyLevels=_privacyLevels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)defaultVideoSize;
-(long long)privacySetting;
-(void)setDelegate:(id<VimeoComposeOptionViewDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<VimeoComposeOptionViewDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSArray *)tags;
-(long long)videoSize;
-(NSMutableArray *)videoSizes;
-(id)_tagIndexPathForTextField:(id)arg1 ;
-(void)setIndexPathForPendingFirstResponder:(NSIndexPath *)arg1 ;
-(NSIndexPath *)indexPathForPendingFirstResponder;
-(NSArray *)videoSizeStrings;
-(void)setVideoSizeStrings:(NSArray *)arg1 ;
-(NSArray *)videoSizeFormatStrings;
-(void)setVideoSizeFormatStrings:(NSArray *)arg1 ;
-(NSArray *)privacyLevels;
-(void)setPrivacyLevels:(NSArray *)arg1 ;
-(NSString *)videoDescription;
@end

