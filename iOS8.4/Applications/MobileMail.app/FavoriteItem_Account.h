/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/FavoriteItem.h>

@class MailAccount;

@interface FavoriteItem_Account : FavoriteItem {

	MailAccount* _account;

}
-(id)representingMailbox;
-(void)wasSelected:(id)arg1 accessoryTapped:(char)arg2 ;
-(id)persistentIdForMigration;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(char)isVisible;
-(id)dictionaryRepresentation;
-(id)displayName;
-(void)configureCell:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)account;
@end

