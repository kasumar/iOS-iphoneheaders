/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/AuxiliaryDebugViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MapsDebugViewControllerDelegate;
@class UITextField, UISwitch, GEOActiveTileSet, NSString;

@interface TileSetOverrideDebugController : AuxiliaryDebugViewController <UITextFieldDelegate> {

	UITextField* _versionTextField;
	UITextField* _baseURLTextField;
	UITextField* _localizationURLTextField;
	UITextField* _multiTileURLTextField;
	UISwitch* _multiTileURLUsesStatusCodesSwitch;
	GEOActiveTileSet* _tileSetBeingOverridden;
	char _hasOverrideVersion;
	char _hasOverrideMultiTileUseStatusCodes;
	id<MapsDebugViewControllerDelegate> _delegate;
	int _style;
	int _size;
	int _scale;
	unsigned _version;
	NSString* _baseURL;
	NSString* _multiTileURL;
	NSString* _localizationURL;

}

@property (assign,nonatomic) int style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int size;                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) int scale;                                     //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * baseURL;                              //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * localizationURL;                      //@synthesize localizationURL=_localizationURL - In the implementation block
@property (nonatomic,copy) NSString * multiTileURL;                         //@synthesize multiTileURL=_multiTileURL - In the implementation block
@property (assign,nonatomic) char multiTileURLUsesStatusCodes; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)navigationDestinationTitle;
-(void)_multiTileURLUsesStatusCodesSwitchChanged:(id)arg1 ;
-(void)_reloadTileSetBeingOverridden;
-(void)dealloc;
-(int)size;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(int)scale;
-(int)style;
-(void)setSize:(int)arg1 ;
-(void)setScale:(int)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(NSString *)baseURL;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setBaseURL:(NSString *)arg1 ;
-(void)setMultiTileURL:(NSString *)arg1 ;
-(void)setLocalizationURL:(NSString *)arg1 ;
-(void)setMultiTileURLUsesStatusCodes:(char)arg1 ;
-(NSString *)multiTileURL;
-(NSString *)localizationURL;
-(char)multiTileURLUsesStatusCodes;
@end

