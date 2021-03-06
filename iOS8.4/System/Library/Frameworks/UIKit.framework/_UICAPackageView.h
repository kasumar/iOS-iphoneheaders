/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CAPackage, NSArray;

@interface _UICAPackageView : UIView {

	CAPackage* _package;
	NSArray* _rootViews;

}
+(BOOL)_shouldCatchDecodingExceptions;
+(id)_buildViewHierarchyFrom:(id)arg1 publishedObjectViewClassMap:(id)arg2 into:(id)arg3 ;
+(void)loadPackageViewWithObject:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadPackageViewWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 ;
-(id)publishedObjectWithName:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 ;
-(id)publishedViewWithName:(id)arg1 ;
@end

