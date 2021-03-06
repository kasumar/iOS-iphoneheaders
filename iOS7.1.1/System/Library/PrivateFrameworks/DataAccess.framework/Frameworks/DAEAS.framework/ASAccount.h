/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAAccount.h>

@class ASFolderHierarchy, ASProtocol, NSMutableSet, NSLock, NSError, ASTaskManager, NSString;

@interface ASAccount : DAAccount {

	ASFolderHierarchy* _folderHierarchy;
	ASProtocol* _protocol;
	NSMutableSet* _searchTaskSet;
	NSMutableSet* _autodiscoveryTasks;
	NSLock* _autodiscoverTaskLock;
	NSError* _autodiscovery401Error;
	bool _useHTTPForTesting;
	bool _useLocalhostForAutodiscoveryTesting;
	bool _oneAutodiscoverAtATime;
	bool _isValidating;
	int _asAccountVersion;

}

@property (nonatomic,readonly) ASTaskManager * taskManager; 
@property (assign) int mailNumberOfPastDaysToSync; 
@property (readonly) int mailNumberOfPastDaysToSyncUpperLimit; 
@property (setter=setASAccountVersion:) int asAccountVersion;               //@synthesize asAccountVersion=_asAccountVersion - In the implementation block
@property (copy) NSString * deviceManagementID; 
+(void)cleanUpFilesForAccountWithId:(id)arg1 ;
-(void)dealloc;
-(id)protocol;
-(void)applyNewAccountProperties:(id)arg1 saveIfDifferent:(bool)arg2 ;
-(void)setMailNumberOfPastDaysToSync:(int)arg1 ;
-(id)foldersTag;
-(id)folderIdsThatExternalClientsCareAbout;
-(id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)arg1 ;
-(id)existingTaskManager;
-(id)policyManager;
-(id)taskManager;
-(void)autodiscoverTask:(id)arg1 completedWithStatus:(int)arg2 accountInfo:(id)arg3 shouldRetryWithEmail:(id)arg4 error:(id)arg5 ;
-(void)fetchAttachmentTask:(id)arg1 completedWithStatus:(int)arg2 dataWasBase64:(bool)arg3 error:(id)arg4 ;
-(void)fetchAttachmentTask:(id)arg1 receivedData:(id)arg2 ofContentType:(id)arg3 ;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(void)searchTask:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchTask:(id)arg1 returnedTotalCount:(id)arg2 ;
-(void)searchTask:(id)arg1 finishedWithError:(id)arg2 ;
-(bool)itemOperationsTask:(id)arg1 handleStreamOperation:(int)arg2 forCodePage:(int)arg3 tag:(int)arg4 withParentItem:(id)arg5 withData:(char*)arg6 dataLength:(int)arg7 ;
-(bool)itemOperationsTask:(id)arg1 hasPartialResponses:(id)arg2 ;
-(void)itemOperationsTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 responses:(id)arg4 ;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(id)_newPolicyManager;
-(id)stateString;
-(bool)isGoogleAccount;
-(void)setEnabled:(bool)arg1 forDADataclass:(int)arg2 ;
-(id)_folderHierarchy;
-(void)blowAwayFolderCache;
-(void)resetAccountID;
-(id)_visibleASFolders;
-(bool)syncDefaultFoldersOnly;
-(id)folderWithId:(id)arg1 ;
-(id)_defaultMailFolderWithDefaultType:(int)arg1 fallbackType:(int)arg2 fallbackName:(id)arg3 ;
-(id)asFolderWithId:(id)arg1 ;
-(id)defaultContactsFolder;
-(id)defaultEventsFolder;
-(id)defaultToDosFolder;
-(id)defaultNotesFolder;
-(void)_getContextElementsForItemChangeType:(int)arg1 dataclass:(int)arg2 nativeContext:(id)arg3 outContext:(id*)arg4 outServerId:(id*)arg5 ;
-(void)_removeInvitationsForMailboxFolderID:(id)arg1 ;
-(void)_fillOutActionsArray:(id)arg1 responseArray:(id)arg2 withTask:(id)arg3 added:(id)arg4 removed:(id)arg5 modified:(id)arg6 perserved:(id)arg7 addedResponse:(id)arg8 modifiedResponse:(id)arg9 removedResponse:(id)arg10 fetchedResponse:(id)arg11 ;
-(void*)_copyExchangeCalendarStore:(bool)arg1 ;
-(void)_explodeEmailAddress:(id)arg1 outUsername:(id*)arg2 outEmailAddress:(id*)arg3 ;
-(bool)_generateAutodiscoverURLsForEmailAddress:(id)arg1 explicitUsername:(id)arg2 withConsumer:(id)arg3 ;
-(void)_silentlyTearDownAutodiscoveryTasks;
-(int)mailNumberOfPastDaysToSyncUpperLimit;
-(id)lastKnownProtocolVersion;
-(bool)shouldSavePropertiesForFolderPathsThatClientsCareAbout;
-(bool)_shouldSaveLastKnownProtocolVersion;
-(void)setLastKnownProtocolVersion:(id)arg1 save:(bool)arg2 ;
-(void)setLastKnownProtocolVersion:(id)arg1 ;
-(void)accountDidUpdateProtocolVersion;
-(bool)_shouldEditNotesSupportOnProtocolChange;
-(id)domainOnly;
-(id)usernameWithoutDomain;
-(bool)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1 ;
-(void)cleanupAccountFiles;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(void)getOptionsTask:(id)arg1 completedWithStatus:(int)arg2 supportedCommands:(id)arg3 supportedVersions:(id)arg4 error:(id)arg5 ;
-(id)deviceManagementID;
-(void)setDeviceManagementID:(id)arg1 ;
-(id)visibleFolders;
-(int)sniffableTypeForFolder:(id)arg1 ;
-(id)contactsFolders;
-(id)eventsFolders;
-(id)toDosFolders;
-(id)notesFolders;
-(id)asFolderHierarchyTaskManager:(id)arg1 ;
-(id)defaultContainerIdentifierForDADataclass:(int)arg1 ;
-(bool)shouldFixOnDiskDeviceId;
-(void)folderItemsSyncTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 newSyncKey:(id)arg4 added:(id)arg5 removed:(id)arg6 modified:(id)arg7 addedResponse:(id)arg8 modifiedResponse:(id)arg9 removedResponse:(id)arg10 fetchedResponse:(id)arg11 ;
-(bool)folderItemsSyncTask:(id)arg1 handleStreamOperation:(int)arg2 forCodePage:(int)arg3 tag:(int)arg4 withParentItem:(id)arg5 withData:(char*)arg6 dataLength:(int)arg7 ;
-(bool)folderItemsSyncTask:(id)arg1 hasPartialAdded:(id)arg2 removed:(id)arg3 modified:(id)arg4 addedResponse:(id)arg5 modifiedResponse:(id)arg6 removedResponse:(id)arg7 fetchedResponse:(id)arg8 moreAvailable:(bool)arg9 ;
-(void)sendMailTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 ;
-(void*)_copyABAccount:(bool)arg1 ;
-(void*)_copyDefaultExchangeEventsCalendar:(bool)arg1 ;
-(void)moveItemsTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 movedItems:(id)arg4 ;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(bool)_reallySearchQueriesRunning;
-(void)setUseHTTPForTesting:(bool)arg1 ;
-(void)setUseLocalhostForAutodiscoveryTesting:(bool)arg1 ;
-(void)setOneAutodiscoverAtATime:(bool)arg1 ;
-(bool)autodiscoverAccountConfigurationWithConsumer:(id)arg1 ;
-(id)savedFolderPathsThatClientsCareAbout;
-(void)setSavedFolderPathsThatClientsCareAbout:(id)arg1 ;
-(void)upgradeWithProtocolVersion:(id)arg1 ;
-(bool)isActiveSyncAccount;
-(bool)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(int)asAccountVersion;
-(void)setASAccountVersion:(int)arg1 ;
-(void)setProtocolVersion:(id)arg1 ;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(bool)isHotmailAccount;
-(bool)enabledForDADataclass:(int)arg1 ;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(int)mailNumberOfPastDaysToSync;
-(bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 ;
-(id)signingIdentityPersistentReference;
-(void)setSigningIdentityPersistentReference:(id)arg1 ;
-(id)encryptionIdentityPersistentReference;
-(void)setEncryptionIdentityPersistentReference:(id)arg1 ;
-(int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(bool)arg8 consumer:(id)arg9 context:(void*)arg10 ;
-(void)cancelTaskWithID:(int)arg1 ;
@end

