/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject {

	NSMutableArray* mWhens;
	ODDOtherwise* mOtherwise;

}
-(void)dealloc;
-(id)init;
-(id)whens;
-(void)addWhen:(id)arg1 ;
-(id)otherwise;
-(void)setOtherwise:(id)arg1 ;
@end
