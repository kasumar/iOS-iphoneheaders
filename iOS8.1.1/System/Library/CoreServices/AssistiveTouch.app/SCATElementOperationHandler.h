/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/SCATOperationHandler.h>

@interface SCATElementOperationHandler : SCATOperationHandler

@property (assign,nonatomic) id<SCATElementOperationHandlerDelegate> elementOperationHandlerDelegate; 
-(void)_recordOperationIfNecessaryWithIdentifier:(id)arg1 element:(id)arg2 stepFormat:(id)arg3 ;
-(id<SCATElementOperationHandlerDelegate>)elementOperationHandlerDelegate;
-(BOOL)_performOperationWithElement:(id)arg1 identifier:(id)arg2 ;
-(BOOL)incrementElement:(id)arg1 ;
-(BOOL)decrementElement:(id)arg1 ;
-(BOOL)showAlternateKeysForElement:(id)arg1 ;
-(BOOL)zoomInOnElement:(id)arg1 ;
-(BOOL)zoomOutOnElement:(id)arg1 ;
-(BOOL)escapeFromElement:(id)arg1 ;
-(BOOL)cutForElement:(id)arg1 ;
-(BOOL)copyForElement:(id)arg1 ;
-(BOOL)pasteForElement:(id)arg1 ;
-(BOOL)selectAllForElement:(id)arg1 ;
-(void)setElementOperationHandlerDelegate:(id<SCATElementOperationHandlerDelegate>)arg1 ;
-(void)didActivateElement:(id)arg1 ;
-(BOOL)replayOperationWithDictionary:(id)arg1 numberOfAttemptsRemaining:(unsigned long long)arg2 ;
-(void)setDelegate:(id)arg1 ;
@end

