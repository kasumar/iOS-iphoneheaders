/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@class NSMutableArray;

@interface ABFavoritesListManager : NSObject {

	void* _addressBook;
	NSMutableArray* _list;
	CFDictionaryRef _uidToEntry;
	struct {
		unsigned dirty : 1;
		unsigned postCount : 1;
		unsigned needsReload : 1;
		unsigned unused : 29;
	}  _flags;

}
+(id)sharedInstanceWithAddressBook:(void*)arg1 ;
+(id)sharedInstance;
-(BOOL)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2 ;
-(void)_addEntryToMap:(id)arg1 ;
-(void)recacheIdentitiesSoon;
-(void)_loadListWithAddressBook:(void*)arg1 ;
-(void)_entryIdentityChanged:(id)arg1 ;
-(void)_loadList;
-(id)entriesForPeople:(id)arg1 ;
-(BOOL)_isValueForEntry:(id)arg1 equalToValue:(id)arg2 ;
-(id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 identifier:(int)arg4 value:(id)arg5 label:(id)arg6 ;
-(id)entriesForPerson:(void*)arg1 ;
-(id)entryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)entryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(BOOL)isFull;
-(void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2 ;
-(void)_scheduleSave;
-(BOOL)_writeFavoritesToFile:(id)arg1 ;
-(void)_delayedLookup;
-(id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 value:(id)arg4 label:(id)arg5 ;
-(BOOL)containsEntryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(BOOL)containsEntryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(BOOL)addEntryForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3 ;
-(void)saveImmediately;
-(void)_listChangedExternally;
-(void)removeEntryAtIndex:(long long)arg1 ;
-(void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)removeAllEntries;
-(void)save;
-(void)dealloc;
-(id)entries;
-(void)addEntry:(id)arg1 ;
-(void)_postChangeNotification;
-(id)initWithAddressBook:(void*)arg1 ;
@end

