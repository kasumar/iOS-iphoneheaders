/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSTLayoutDynamicResizeInfoProtocol <NSObject>
@required
-(id)initWithMasterLayout:(id)arg1;
-(BOOL)hasWidthForColumn:(unsigned char)arg1;
-(double)getColumnWidth:(unsigned char)arg1;
-(BOOL)hasHeightForRow:(unsigned short)arg1;
-(double)getRowHeight:(unsigned short)arg1;
-(double)applyResizeWidthFactor:(double)arg1;
-(void)captureNewMinimumRowHeights:(id)arg1;
-(double)applyResizeHeightFactor:(double)arg1;
-(id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2;
-(id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2;
-(id)initWithDynamicResizeInfo:(id)arg1;
-(double)getRowInitialHeight:(unsigned short)arg1;
-(double)getColumnInitialWidth:(unsigned char)arg1;
-(double)getRowHeightResize:(unsigned short)arg1;
-(double)getColumnWidthResize:(unsigned char)arg1;
-(void)invalidate;
-(BOOL)valid;

@end

