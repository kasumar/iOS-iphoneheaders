/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBundle, NSArray;

@interface SDASharedItemsFactory : NSObject {

	NSBundle* _bundle;
	NSArray* _calendarEvents;
	NSArray* _contacts;
	NSArray* _images;
	NSArray* _genericDataDocuments;
	NSArray* _pages;
	NSArray* _passes;
	NSArray* _pdfs;
	NSArray* _sharingDrawingDocuments;
	NSArray* _textDocuments;
	NSArray* _videos;
	NSArray* _voiceMemos;
	NSArray* _iLifeLinks;
	NSArray* _iWorkLinks;
	NSArray* _iTunesStoreLinks;
	NSArray* _mapsLinks;
	NSArray* _webLinks;
	NSArray* _webLinkStrings;
	NSArray* _webLinkStringBlocks;
	NSArray* _yelpLinks;
	NSArray* _strings;

}

@property (nonatomic,retain) NSArray * calendarEvents;                       //@synthesize calendarEvents=_calendarEvents - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                             //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSArray * images;                               //@synthesize images=_images - In the implementation block
@property (nonatomic,retain) NSArray * genericDataDocuments;                 //@synthesize genericDataDocuments=_genericDataDocuments - In the implementation block
@property (nonatomic,retain) NSArray * pages;                                //@synthesize pages=_pages - In the implementation block
@property (nonatomic,retain) NSArray * passes;                               //@synthesize passes=_passes - In the implementation block
@property (nonatomic,retain) NSArray * pdfs;                                 //@synthesize pdfs=_pdfs - In the implementation block
@property (nonatomic,retain) NSArray * sharingDrawingDocuments;              //@synthesize sharingDrawingDocuments=_sharingDrawingDocuments - In the implementation block
@property (nonatomic,retain) NSArray * textDocuments;                        //@synthesize textDocuments=_textDocuments - In the implementation block
@property (nonatomic,retain) NSArray * videos;                               //@synthesize videos=_videos - In the implementation block
@property (nonatomic,retain) NSArray * voiceMemos;                           //@synthesize voiceMemos=_voiceMemos - In the implementation block
@property (nonatomic,retain) NSArray * iLifeLinks;                           //@synthesize iLifeLinks=_iLifeLinks - In the implementation block
@property (nonatomic,retain) NSArray * iWorkLinks;                           //@synthesize iWorkLinks=_iWorkLinks - In the implementation block
@property (nonatomic,retain) NSArray * iTunesStoreLinks;                     //@synthesize iTunesStoreLinks=_iTunesStoreLinks - In the implementation block
@property (nonatomic,retain) NSArray * mapsLinks;                            //@synthesize mapsLinks=_mapsLinks - In the implementation block
@property (nonatomic,retain) NSArray * webLinks;                             //@synthesize webLinks=_webLinks - In the implementation block
@property (nonatomic,retain) NSArray * webLinkStrings;                       //@synthesize webLinkStrings=_webLinkStrings - In the implementation block
@property (nonatomic,retain) NSArray * webLinkStringBlocks;                  //@synthesize webLinkStringBlocks=_webLinkStringBlocks - In the implementation block
@property (nonatomic,retain) NSArray * yelpLinks;                            //@synthesize yelpLinks=_yelpLinks - In the implementation block
@property (nonatomic,retain) NSArray * strings;                              //@synthesize strings=_strings - In the implementation block
+(id)sharedItemsInCategory:(int)arg1 ofType:(int)arg2 ;
+(id)plainItemsFromItemSources:(id)arg1 ;
+(id)sharedFactory;
-(id)itemSourcesForFileNames:(id)arg1 previewImageBaseName:(id)arg2 fakeItemDuration:(float)arg3 fakeItemBytes:(int)arg4 fakeBundleID:(id)arg5 ;
-(id)itemSourcesForNonFileURLDictionaries:(id)arg1 fakeItemDuration:(float)arg2 fakeItemBytes:(int)arg3 fakeBundleID:(id)arg4 ;
-(id)calendarEvents;
-(id)voiceMemos;
-(id)textDocuments;
-(id)iTunesStoreLinks;
-(id)mapsLinks;
-(id)webLinks;
-(id)webLinkStrings;
-(id)webLinkStringBlocks;
-(id)pdfs;
-(id)sharingDrawingDocuments;
-(id)yelpLinks;
-(id)iLifeLinks;
-(id)iWorkLinks;
-(id)dataDocuments;
-(void)setCalendarEvents:(id)arg1 ;
-(id)genericDataDocuments;
-(void)setGenericDataDocuments:(id)arg1 ;
-(void)setPdfs:(id)arg1 ;
-(void)setSharingDrawingDocuments:(id)arg1 ;
-(void)setTextDocuments:(id)arg1 ;
-(void)setVoiceMemos:(id)arg1 ;
-(void)setILifeLinks:(id)arg1 ;
-(void)setIWorkLinks:(id)arg1 ;
-(void)setITunesStoreLinks:(id)arg1 ;
-(void)setMapsLinks:(id)arg1 ;
-(void)setWebLinks:(id)arg1 ;
-(void)setWebLinkStrings:(id)arg1 ;
-(void)setWebLinkStringBlocks:(id)arg1 ;
-(void)setYelpLinks:(id)arg1 ;
-(id)contacts;
-(void)setContacts:(id)arg1 ;
-(void)setPasses:(id)arg1 ;
-(id)init;
-(id)images;
-(void)setImages:(id)arg1 ;
-(void)setStrings:(id)arg1 ;
-(id)strings;
-(void).cxx_destruct;
-(id)pages;
-(void)setPages:(id)arg1 ;
-(id)videos;
-(void)setVideos:(id)arg1 ;
-(id)passes;
@end

