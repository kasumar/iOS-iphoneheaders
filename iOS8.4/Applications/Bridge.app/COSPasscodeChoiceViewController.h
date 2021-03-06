/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bridge/COSOptinViewController.h>

@class UIButton, UILabel;

@interface COSPasscodeChoiceViewController : COSOptinViewController {

	UIButton* _acceptButton;
	UIButton* _declineButton;
	UILabel* _footerLabel;

}

@property (nonatomic,retain) UIButton * acceptButton;               //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) UIButton * declineButton;              //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                 //@synthesize footerLabel=_footerLabel - In the implementation block
+(char)controllerNeedsToRun;
-(id)detailString;
-(void)selecedOptinChoice:(id)arg1 ;
-(id)suggestedButtonString;
-(id)alternateButtonString;
-(id)detailTitleString;
-(char)legacyButtonStyles;
-(id)moreOptionsButtonString;
-(void)selectedMoreOptions:(id)arg1 ;
-(id)init;
-(void)viewDidLoad;
-(id)titleString;
-(UIButton *)acceptButton;
-(void)setAcceptButton:(UIButton *)arg1 ;
-(UIButton *)declineButton;
-(void)setDeclineButton:(UIButton *)arg1 ;
-(id)imageResource;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UILabel *)footerLabel;
@end

