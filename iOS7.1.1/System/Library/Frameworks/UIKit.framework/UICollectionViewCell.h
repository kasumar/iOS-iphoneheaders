/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UILongPressGestureRecognizer;

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate> {

	UIView* _contentView;
	UIView* _backgroundView;
	UIView* _selectedBackgroundView;
	UILongPressGestureRecognizer* _menuGesture;
	id _selectionSegueTemplate;
	id _highlightingSupport;
	struct {
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showingMenu : 1;
		unsigned clearSelectionWhenMenuDisappears : 1;
		unsigned waitingForSelectionAnimationHalfwayPoint : 1;
	}  _collectionCellFlags;
	bool _selected;
	bool _highlighted;

}

@property (nonatomic,readonly) UIView * contentView;                             //@synthesize contentView=_contentView - In the implementation block
@property (assign,getter=isSelected,nonatomic) bool selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) bool highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * selectedBackgroundView;                    //@synthesize selectedBackgroundView=_selectedBackgroundView - In the implementation block
+(Class)_contentViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)contentView;
-(void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(bool)_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(void)_updateBackgroundView;
-(bool)isSelected;
-(void)setBackgroundView:(id)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(bool)arg1 ;
-(void)_setOpaque:(bool)arg1 forSubview:(id)arg2 ;
-(id)backgroundView;
-(void)setSelectedBackgroundView:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_menuDismissed:(id)arg1 ;
-(void)_performAction:(SEL)arg1 sender:(id)arg2 ;
-(void)_updateHighlightColorsForAnimationHalfwayPoint;
-(id)selectedBackgroundView;
-(bool)_shouldSaveOpaqueStateForView:(id)arg1 ;
-(bool)_isUsingOldStyleMultiselection;
-(id)_selectionSegueTemplate;
-(void)_setSelected:(bool)arg1 animated:(bool)arg2 ;
-(void)_setHighlighted:(bool)arg1 animated:(bool)arg2 ;
-(void)_updateHighlightColorsForView:(id)arg1 highlight:(bool)arg2 ;
-(void)_setupHighlightingSupport;
-(void)_teardownHighlightingSupportIfReady;
-(void)_handleMenuGesture:(id)arg1 ;
-(void)_setSelectionSegueTemplate:(id)arg1 ;
@end

