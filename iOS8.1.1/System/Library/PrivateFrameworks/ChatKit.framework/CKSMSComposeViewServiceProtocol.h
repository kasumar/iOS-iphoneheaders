/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKSMSComposeViewServiceProtocol <NSObject>
@required
-(void)forceMMS;
-(void)disableCameraAttachments;
-(void)setCanEditRecipients:(BOOL)arg1;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
-(void)setPendingAddresses:(id)arg1;
-(void)setTextEntryContentsVisible:(BOOL)arg1;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
-(void)setUICustomizationData:(id)arg1;
-(void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
-(void)forceCancelComposition;

@end
