/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <AddressBookUI/ABContactViewControllerDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol ABPersonViewControllerDelegate;
@class NSArray, UIView, ABContactViewController, NSString, UIFont, UIImage;

@interface ABPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, UIViewControllerRestoration> {

	BOOL _badgeEmailPropertiesForMailVIP;
	BOOL _allowsEditing;
	BOOL _allowsActions;
	BOOL _shouldShowLinkedPeople;
	BOOL _allowsSharing;
	BOOL _allowsAddToFavorites;
	BOOL _allowsConferencing;
	BOOL _allowsContactBlocking;
	BOOL _allowsOnlyPhoneActions;
	BOOL _allowsOnlyFaceTimeActions;
	BOOL _highlightedImportant;
	void* _addressBook;
	void* _displayedPerson;
	<ABPersonViewControllerDelegate>* _personViewDelegate;
	NSArray* _displayedProperties;
	UIView* _personHeaderView;
	ABContactViewController* _contactViewController;
	int _style;
	int _highlightedProperty;
	int _highlightedMultiValueIdentifier;

}

@property (assign,nonatomic) <ABPersonViewControllerDelegate> * personViewDelegate;              //@synthesize personViewDelegate=_personViewDelegate - In the implementation block
@property (assign,nonatomic) void* addressBook;                                                  //@synthesize addressBook=_addressBook - In the implementation block
@property (assign,nonatomic) void* displayedPerson;                                              //@synthesize displayedPerson=_displayedPerson - In the implementation block
@property (nonatomic,copy) NSArray * displayedProperties;                                        //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                 //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                                 //@synthesize allowsActions=_allowsActions - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkedPeople;                                        //@synthesize shouldShowLinkedPeople=_shouldShowLinkedPeople - In the implementation block
@property (assign,nonatomic) BOOL allowsSharing;                                                 //@synthesize allowsSharing=_allowsSharing - In the implementation block
@property (assign,nonatomic) BOOL allowsAddToFavorites;                                          //@synthesize allowsAddToFavorites=_allowsAddToFavorites - In the implementation block
@property (assign,nonatomic) BOOL allowsDeletion; 
@property (assign,nonatomic) BOOL allowsCancel; 
@property (assign,nonatomic) BOOL allowsSounds; 
@property (assign,nonatomic) BOOL allowsVibrations; 
@property (assign,nonatomic) BOOL allowsConferencing;                                            //@synthesize allowsConferencing=_allowsConferencing - In the implementation block
@property (assign,nonatomic) BOOL allowsContactBlocking;                                         //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) UIFont * messageFont; 
@property (nonatomic,copy) NSString * messageDetail; 
@property (nonatomic,retain) UIFont * messageDetailFont; 
@property (nonatomic,retain) UIView * customMessageView; 
@property (nonatomic,readonly) UIView * tableHeaderView; 
@property (nonatomic,retain) UIView * personHeaderView;                                          //@synthesize personHeaderView=_personHeaderView - In the implementation block
@property (assign,nonatomic) BOOL shouldAlignPersonHeaderViewToImage; 
@property (nonatomic,retain) UIView * customHeaderView; 
@property (nonatomic,retain) UIView * customFooterView; 
@property (assign,nonatomic) BOOL allowsOnlyPhoneActions;                                        //@synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions - In the implementation block
@property (assign,nonatomic) BOOL allowsOnlyFaceTimeActions;                                     //@synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions - In the implementation block
@property (nonatomic,copy) NSString * attribution; 
@property (assign,nonatomic) BOOL shareMessageBodyIsHTML; 
@property (nonatomic,copy) NSString * shareMessageBody; 
@property (nonatomic,copy) NSString * shareMessageSubject; 
@property (nonatomic,copy) NSString * shareLocationURL; 
@property (nonatomic,retain) UIImage * shareLocationSnapshotImage; 
@property (nonatomic,copy) id willTweetLocationCallback; 
@property (nonatomic,copy) id willWeiboLocationCallback; 
@property (assign,nonatomic) BOOL badgeEmailPropertiesForMailVIP;                                //@synthesize badgeEmailPropertiesForMailVIP=_badgeEmailPropertiesForMailVIP - In the implementation block
@property (nonatomic,retain) ABContactViewController * contactViewController;                    //@synthesize contactViewController=_contactViewController - In the implementation block
@property (assign,nonatomic) int style;                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int highlightedProperty;                                            //@synthesize highlightedProperty=_highlightedProperty - In the implementation block
@property (assign,nonatomic) int highlightedMultiValueIdentifier;                                //@synthesize highlightedMultiValueIdentifier=_highlightedMultiValueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL highlightedImportant;                                          //@synthesize highlightedImportant=_highlightedImportant - In the implementation block
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)initWithAddressBook:(void*)arg1 ;
-(id)displayedProperties;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6 ;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5 ;
-(id)newActionButton;
-(void)setAllowsConferencing:(BOOL)arg1 ;
-(void)setPersonViewDelegate:(id)arg1 ;
-(id)contactViewController;
-(id)customHeaderView;
-(void)setCustomHeaderView:(id)arg1 ;
-(id)personHeaderView;
-(id)contactViewController:(id)arg1 highlightColorForPropertyItem:(id)arg2 contact:(id)arg3 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4 ;
-(BOOL)allowsActions;
-(BOOL)allowsSharing;
-(BOOL)allowsAddToFavorites;
-(BOOL)allowsContactBlocking;
-(BOOL)allowsOnlyPhoneActions;
-(BOOL)allowsOnlyFaceTimeActions;
-(BOOL)allowsConferencing;
-(void)setAllowsSharing:(BOOL)arg1 ;
-(void)setAllowsAddToFavorites:(BOOL)arg1 ;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
-(void)setAllowsOnlyPhoneActions:(BOOL)arg1 ;
-(void)setAllowsOnlyFaceTimeActions:(BOOL)arg1 ;
-(void)setAllowsDeletion:(BOOL)arg1 ;
-(void)setPersonHeaderView:(id)arg1 ;
-(float)ab_heightToFitForViewInPopoverView;
-(BOOL)allowsCancel;
-(BOOL)handleExternalChange;
-(void)loadContactViewController;
-(id)displayedUIPerson;
-(void)setDisplayedUIPerson:(id)arg1 ;
-(void)setShouldShowLinkedPeople:(BOOL)arg1 ;
-(void)setShouldShowLinkingUIOnCard:(BOOL)arg1 ;
-(void)setAllowsVibrations:(BOOL)arg1 ;
-(void)setEditDelegate:(id)arg1 ;
-(void)setAppearsInLinkingPeoplePicker:(BOOL)arg1 ;
-(void)setMessageFont:(id)arg1 ;
-(void)setMessageDetailFont:(id)arg1 ;
-(void)setMessageDetail:(id)arg1 ;
-(void)setCustomMessageView:(id)arg1 ;
-(id)messageDetail;
-(id)messageFont;
-(id)messageDetailFont;
-(id)customMessageView;
-(BOOL)shouldShowLinkedPeople;
-(id)attribution;
-(id)editDelegate;
-(BOOL)shouldAlignPersonHeaderViewToImage;
-(void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4 ;
-(BOOL)allowsSounds;
-(BOOL)allowsVibrations;
-(BOOL)badgeEmailPropertiesForMailVIP;
-(void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1 ;
-(BOOL)shouldShowLinkingUIOnCard;
-(BOOL)appearsInLinkingPeoplePicker;
-(void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1 ;
-(void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2 ;
-(BOOL)manuallyLinkPerson:(id)arg1 ;
-(void)setWillTweetLocationCallback:(/*^block*/ id)arg1 ;
-(id)personViewDelegate;
-(id)shareMessageSubject;
-(id)shareLocationURL;
-(/*^block*/ id)willTweetLocationCallback;
-(/*^block*/ id)willWeiboLocationCallback;
-(void)shareContactByEmail:(id)arg1 ;
-(BOOL)shareMessageBodyIsHTML;
-(void)setShareMessageBodyIsHTML:(BOOL)arg1 ;
-(id)shareMessageBody;
-(void)setShareMessageBody:(id)arg1 ;
-(void)setShareMessageSubject:(id)arg1 ;
-(void)setShareLocationURL:(id)arg1 ;
-(id)shareLocationSnapshotImage;
-(void)setShareLocationSnapshotImage:(id)arg1 ;
-(void)setWillWeiboLocationCallback:(/*^block*/ id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 style:(int)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3 ;
-(int)highlightedProperty;
-(int)highlightedMultiValueIdentifier;
-(BOOL)highlightedImportant;
-(void)setHighlightedProperty:(int)arg1 ;
-(void)setHighlightedMultiValueIdentifier:(int)arg1 ;
-(void)setHighlightedImportant:(BOOL)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 ;
-(BOOL)allowsSettingAsPreferredCardForName;
-(void)setCardContentProvider:(id)arg1 ;
-(void)setCustomFooterView:(id)arg1 ;
-(id)customFooterView;
-(void)setAttribution:(id)arg1 ;
-(void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)addressBookChangedLocally:(CFDictionaryRef)arg1 ;
-(BOOL)_updatePeopleDataForExternalChange;
-(void)_updateTableDataForExternalChange;
-(BOOL)_updateAllDataForExternalChange;
-(BOOL)makeFirstFieldBecomeFirstResponder;
-(void)personViewController:(id)arg1 willSetEditing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)cancelEditing:(BOOL)arg1 ;
-(void)setContactViewController:(id)arg1 ;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(int)arg3 ;
-(void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(int)arg6 destructive:(BOOL)arg7 ;
-(BOOL)allowsDeletion;
-(void)dealloc;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(int)style;
-(id)tableHeaderView;
-(id)message;
-(id)initWithStyle:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setMessage:(id)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setAllowsCancel:(BOOL)arg1 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(int)arg4 destructive:(BOOL)arg5 ;
-(void*)displayedPerson;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(void)setDisplayedProperties:(id)arg1 ;
-(void)setAllowsSounds:(BOOL)arg1 ;
-(void)setDisplayedPerson:(void*)arg1 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 ;
@end

