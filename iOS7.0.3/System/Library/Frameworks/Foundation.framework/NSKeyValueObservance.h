/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSWeakCallback.h>

@class NSObject, NSKeyValueProperty, NSPointerArray;

@interface NSKeyValueObservance : NSWeakCallback {

	int _retainCountMinusOne;
	NSObject* _observer;
	NSKeyValueProperty* _property;
	unsigned _options;
	void* _context;
	NSObject* _originalObservable;
	unsigned _cachedUnrotatedHashComponent;
	BOOL _cachedIsShareable;
	NSPointerArray* _observationInfos;

}
-(id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 originalObservable:(id)arg5 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)retainCount;
-(id)description;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

