/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MSShare;

@interface MSInvitationResponse : NSObject {

	MSShare* _invitation;
	BOOL _accept;

}

@property (nonatomic,retain) MSShare * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (assign,nonatomic) BOOL accept;                       //@synthesize accept=_accept - In the implementation block
+(id)responseWithInvitation:(id)arg1 accept:(BOOL)arg2 ;
-(void)setInvitation:(MSShare *)arg1 ;
-(MSShare *)invitation;
-(id)initWithInvitation:(id)arg1 accept:(BOOL)arg2 ;
-(BOOL)accept;
-(void)setAccept:(BOOL)arg1 ;
@end

