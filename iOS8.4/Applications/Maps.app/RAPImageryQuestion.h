/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPQuestion.h>

@class RAPImageryIssue, NSArray, RAPCommentQuestion, RAPReportContext, NSString;

@interface RAPImageryQuestion : RAPQuestion {

	RAPImageryIssue* _selectedIssue;
	NSArray* _selectableIssues;
	RAPCommentQuestion* _commentQuestion;
	RAPReportContext* _imageryPickingMapContext;
	SCD_Struct_RA6 _incorrectImageryMapRect;

}

@property (nonatomic,retain) RAPImageryIssue * selectedIssue;                            //@synthesize selectedIssue=_selectedIssue - In the implementation block
@property (nonatomic,readonly) NSArray * selectableIssues;                               //@synthesize selectableIssues=_selectableIssues - In the implementation block
@property (assign,nonatomic) SCD_Struct_RA6 incorrectImageryMapRect;                     //@synthesize incorrectImageryMapRect=_incorrectImageryMapRect - In the implementation block
@property (nonatomic,retain) RAPReportContext * imageryPickingMapContext;                //@synthesize imageryPickingMapContext=_imageryPickingMapContext - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RA6 initialImageryPickingMapRect; 
@property (nonatomic,readonly) NSString * localizedImageryPickingPrompt; 
@property (nonatomic,readonly) RAPCommentQuestion * commentQuestion;                     //@synthesize commentQuestion=_commentQuestion - In the implementation block
+(int)mapServiceAction;
-(RAPCommentQuestion *)commentQuestion;
-(NSArray *)selectableIssues;
-(RAPImageryIssue *)selectedIssue;
-(void)setSelectedIssue:(RAPImageryIssue *)arg1 ;
-(NSString *)localizedImageryPickingPrompt;
-(SCD_Struct_RA6)initialImageryPickingMapRect;
-(SCD_Struct_RA6)incorrectImageryMapRect;
-(void)setIncorrectImageryMapRect:(SCD_Struct_RA6)arg1 ;
-(void)setImageryPickingMapContext:(RAPReportContext *)arg1 ;
-(char)_isRecursivelyComplete;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 ;
-(id)_alternateMapViewContext;
-(id)_commentsTitle;
-(id)_commentsPlaceholderText;
-(RAPReportContext *)imageryPickingMapContext;
-(char)isComplete;
@end

