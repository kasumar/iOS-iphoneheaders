/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKUIInviteesViewSection.h>

@class NSMutableArray, EKEvent, NSString;

@interface EKUIInviteesViewRespondedInviteesSection : NSObject <EKUIInviteesViewSection> {

	BOOL _editable;
	/*^block*/id _participantTapped;
	/*^block*/id _participantRemoved;
	NSMutableArray* _participants;
	EKEvent* _event;
	NSString* _cachedCellReuseIdentifier;
	unsigned long long _reuseIdentifierVersion;
	/*^block*/id _tableViewCellHook;

}

@property (nonatomic,copy) id participantTapped;                                     //@synthesize participantTapped=_participantTapped - In the implementation block
@property (nonatomic,copy) id participantRemoved;                                    //@synthesize participantRemoved=_participantRemoved - In the implementation block
@property (nonatomic,retain) NSMutableArray * participants;                          //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                        //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSString * cachedCellReuseIdentifier;                   //@synthesize cachedCellReuseIdentifier=_cachedCellReuseIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long reuseIdentifierVersion;              //@synthesize reuseIdentifierVersion=_reuseIdentifierVersion - In the implementation block
@property (nonatomic,copy) id tableViewCellHook;                                     //@synthesize tableViewCellHook=_tableViewCellHook - In the implementation block
@property (assign,nonatomic) BOOL editable;                                          //@synthesize editable=_editable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isValidRow:(long long)arg1 ;
-(unsigned long long)reuseIdentifierVersion;
-(void)setReuseIdentifierVersion:(unsigned long long)arg1 ;
-(id)tableViewCellHook;
-(id)debugTitle;
-(BOOL)sectionShouldBeShown;
-(id)cellForIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg1 ;
-(BOOL)canSelectRow:(id)arg1 ;
-(void)selectRow:(id)arg1 ;
-(double)estimatedHeightForRow:(id)arg1 ;
-(BOOL)canEditRow:(id)arg1 ;
-(long long)editingStyleForRow:(id)arg1 ;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg1 ;
-(void)commitEditingStyle:(long long)arg1 forRow:(id)arg2 ;
-(void)setTableViewCellHook:(id)arg1 ;
-(void)cancelOutstandingOperations;
-(NSString *)cachedCellReuseIdentifier;
-(void)setCachedCellReuseIdentifier:(NSString *)arg1 ;
-(id)participantTapped;
-(id)participantRemoved;
-(void)updateWithEvent:(id)arg1 editable:(BOOL)arg2 ;
-(void)setParticipantTapped:(id)arg1 ;
-(void)setParticipantRemoved:(id)arg1 ;
-(unsigned long long)numberOfRows;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)editable;
-(void)setEvent:(EKEvent *)arg1 ;
-(EKEvent *)event;
-(id)headerTitle;
-(NSMutableArray *)participants;
-(void)setParticipants:(NSMutableArray *)arg1 ;
@end

