/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/IMFrameEnvironment.h>
#import <iBooks/IMLayoutDirectionEnvironment.h>
#import <UIKit/UITraitEnvironment.h>
#import <iBooks/THLayoutEnvironment.h>

@protocol IMFrameEnvironmentIMLayoutDirectionEnvironmentUITraitEnvironmentTHLayoutEnvironmentTHPaginatedConfigurationShimTraitCollectionProvider;
@class UITraitCollection, NSString;

@interface THPaginatedConfigurationShim : NSObject <IMFrameEnvironment, IMLayoutDirectionEnvironment, UITraitEnvironment, THLayoutEnvironment> {

	id<IMFrameEnvironment><IMLayoutDirectionEnvironment><UITraitEnvironment><THLayoutEnvironment><THPaginatedConfigurationShimTraitCollectionProvider> _shimContext;

}

@property (assign,nonatomic) id<IMFrameEnvironment><IMLayoutDirectionEnvironment><UITraitEnvironment><THLayoutEnvironment><THPaginatedConfigurationShimTraitCollectionProvider> shimContext;              //@synthesize shimContext=_shimContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect im_frameEnvironmentBounds; 
@property (nonatomic,readonly) CGRect im_frameEnvironmentFrame; 
@property (nonatomic,readonly) char im_isRTL; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) float statusBarHeight; 
@property (nonatomic,readonly) float toolbarHeight; 
@property (nonatomic,readonly) float fontSize; 
@property (nonatomic,readonly) char isEpub; 
-(CGRect)im_frameEnvironmentBounds;
-(CGRect)im_frameEnvironmentFrame;
-(char)im_isRTL;
-(float)toolbarHeight;
-(char)isEpub;
-(id<IMFrameEnvironment><IMLayoutDirectionEnvironment><UITraitEnvironment><THLayoutEnvironment><THPaginatedConfigurationShimTraitCollectionProvider>)shimContext;
-(void)setShimContext:(id<IMFrameEnvironment><IMLayoutDirectionEnvironment><UITraitEnvironment><THLayoutEnvironment><THPaginatedConfigurationShimTraitCollectionProvider>)arg1 ;
-(float)statusBarHeight;
-(UITraitCollection *)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(float)fontSize;
@end

