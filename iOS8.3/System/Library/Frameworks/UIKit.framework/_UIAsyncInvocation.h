/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:03 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _UIAsyncInvocationObserver;

@interface _UIAsyncInvocation : NSObject {

	_UIAsyncInvocationObserver* _observer;
	/*^block*/id _invocationBlock;
	char _invocationBlockHasBeenCalled;

}
+(id)invocationWithBlock:(/*^block*/id)arg1 ;
+(id)emptyInvocation;
-(void)dealloc;
-(id)invoke;
@end

