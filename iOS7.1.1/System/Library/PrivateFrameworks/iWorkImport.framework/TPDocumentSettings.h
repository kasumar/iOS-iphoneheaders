/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSString;

@interface TPDocumentSettings : TSPObject {

	bool _hasBody;
	bool _hasHeaders;
	bool _hasFooters;
	bool _qlPreview;
	bool _copyMovies;
	bool _copyAssets;
	bool _placeholderAuthoring;
	bool _sectionAuthoring;
	bool _linksEnabled;
	bool _hyphenation;
	bool _ligatures;
	bool _tocLinksEnabled;
	bool _showCTMarkup;
	bool _showCTDeletions;
	int _ctBubblesVisibility;
	bool _changeBarsVisible;
	bool _formatChangesVisible;
	bool _annotationsVisible;
	bool _documentIsRTL;
	int _footnoteKind;
	int _footnoteFormat;
	int _footnoteNumbering;
	long long _footnoteGap;
	NSString* _decimalTab;
	NSString* _language;
	NSString* _hyphenationLanguage;
	NSString* _creationLocale;
	NSString* _originalTemplate;
	NSString* _creationDate;
	NSString* _bibliographyFormat;

}

@property (assign,nonatomic) bool hasBody; 
@property (assign,nonatomic) bool hasHeaders; 
@property (assign,nonatomic) bool hasFooters; 
@property (assign,nonatomic) bool quickLookPreview; 
@property (assign,nonatomic) bool copyMovies; 
@property (assign,nonatomic) bool copyTemplateAssets; 
@property (assign,nonatomic) bool placeholderAuthoring; 
@property (assign,nonatomic) bool sectionAuthoring; 
@property (assign,nonatomic) bool hyperlinksEnabled; 
@property (assign,nonatomic) bool autoHyphenation; 
@property (assign,nonatomic) bool useLigatures; 
@property (assign,nonatomic) bool tocLinksEnabled; 
@property (assign,nonatomic) bool showCTMarkup; 
@property (assign,nonatomic) bool showCTDeletions; 
@property (assign,nonatomic) bool documentIsRTL; 
@property (assign,nonatomic) int ctBubblesVisibility;                   //@synthesize ctBubblesVisibility=_ctBubblesVisibility - In the implementation block
@property (assign,nonatomic) bool changeBarsVisible; 
@property (assign,nonatomic) bool formatChangesVisible; 
@property (assign,nonatomic) bool annotationsVisible; 
@property (assign,nonatomic) int footnoteKind; 
@property (assign,nonatomic) int footnoteFormat; 
@property (assign,nonatomic) int footnoteNumbering; 
@property (assign,nonatomic) long long footnoteGap; 
@property (nonatomic,copy) NSString * decimalTab; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * hyphenationLanguage; 
@property (nonatomic,copy) NSString * creationLocale; 
@property (nonatomic,copy) NSString * originalTemplate; 
@property (nonatomic,copy) NSString * creationDate; 
@property (nonatomic,copy) NSString * bibliographyFormat; 
-(bool)hasBody;
-(bool)hasHeaders;
-(bool)hasFooters;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(bool)useLigatures;
-(long long)footnoteGap;
-(void)resetForNewDocumentFromTemplate:(id)arg1 ;
-(void)setDocumentIsRTL:(bool)arg1 ;
-(bool)documentIsRTL;
-(bool)autoHyphenation;
-(id)hyphenationLanguage;
-(bool)showCTDeletions;
-(bool)showCTMarkup;
-(int)footnoteKind;
-(void)setDecimalTab:(id)arg1 ;
-(void)setHyphenationLanguage:(id)arg1 ;
-(void)setCreationLocale:(id)arg1 ;
-(id)stringWithCurrentDate;
-(void)setOriginalTemplate:(id)arg1 ;
-(void)setPlaceholderAuthoring:(bool)arg1 ;
-(void)setHyperlinksEnabled:(bool)arg1 ;
-(void)setQuickLookPreview:(bool)arg1 ;
-(void)setCopyMovies:(bool)arg1 ;
-(void)setCopyTemplateAssets:(bool)arg1 ;
-(void)setHasBody:(bool)arg1 ;
-(void)setHasHeaders:(bool)arg1 ;
-(void)setHasFooters:(bool)arg1 ;
-(bool)quickLookPreview;
-(bool)copyMovies;
-(bool)copyTemplateAssets;
-(bool)placeholderAuthoring;
-(bool)hyperlinksEnabled;
-(void)setAutoHyphenation:(bool)arg1 ;
-(void)setUseLigatures:(bool)arg1 ;
-(bool)tocLinksEnabled;
-(void)setTocLinksEnabled:(bool)arg1 ;
-(void)setShowCTMarkup:(bool)arg1 ;
-(void)setShowCTDeletions:(bool)arg1 ;
-(int)ctBubblesVisibility;
-(void)setCTBubblesVisibility:(int)arg1 ;
-(bool)changeBarsVisible;
-(void)setChangeBarsVisible:(bool)arg1 ;
-(bool)formatChangesVisible;
-(void)setFormatChangesVisible:(bool)arg1 ;
-(bool)annotationsVisible;
-(void)setAnnotationsVisible:(bool)arg1 ;
-(bool)sectionAuthoring;
-(void)setSectionAuthoring:(bool)arg1 ;
-(void)setFootnoteKind:(int)arg1 ;
-(int)footnoteFormat;
-(void)setFootnoteFormat:(int)arg1 ;
-(int)footnoteNumbering;
-(void)setFootnoteNumbering:(int)arg1 ;
-(void)setFootnoteGap:(long long)arg1 ;
-(id)decimalTab;
-(id)creationLocale;
-(id)originalTemplate;
-(id)bibliographyFormat;
-(void)setBibliographyFormat:(id)arg1 ;
-(void)setCtBubblesVisibility:(int)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(id)creationDate;
-(void)setCreationDate:(id)arg1 ;
@end

