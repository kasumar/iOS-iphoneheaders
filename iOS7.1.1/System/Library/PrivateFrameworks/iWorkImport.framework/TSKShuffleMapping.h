/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSKShuffleMapping : NSObject <NSCopying> {

	unsigned short mStartIndex;
	unsigned short mEndIndex;
	unsigned short* mMapping;
	bool mIsVertical;
	bool mIsMoveOperation;
	unsigned short mFirstMovedIndex;
	unsigned short mDestinationIndexForMove;
	unsigned short mNumberOfIndicesMoved;

}

@property (nonatomic,readonly) unsigned short startIndex; 
@property (nonatomic,readonly) unsigned short endIndex; 
@property (nonatomic,readonly) unsigned short* mapping; 
@property (nonatomic,@dynamic,readonly) unsigned short mappingSize; 
-(SCD_Struct_TS267)reverseMapCoordinate:(SCD_Struct_TS267)arg1 ;
-(SCD_Struct_TS267)mapCoordinate:(SCD_Struct_TS267)arg1 ;
-(SCD_Struct_TS268)contiguousMappingForRange:(SCD_Struct_TS268)arg1 inTable:(CFUUIDRef)arg2 ;
-(void)saveToArchive:(ShuffleMappingArchive*)arg1 ;
-(unsigned short)mapIndex:(unsigned short)arg1 ;
-(bool)isMove;
-(unsigned short)reverseMapIndex:(unsigned short)arg1 ;
-(id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 mapping:(unsigned short*)arg3 ;
-(unsigned short)mappingSize;
-(id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 ;
-(id)initForMovedIndicesStartingAtIndex:(unsigned short)arg1 destinationIndex:(unsigned short)arg2 numberOfIndices:(unsigned short)arg3 vertical:(bool)arg4 ;
-(id)copyInverse;
-(void)enumerateMappingRange:(NSRange)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)insert:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 insertingBefore:(bool)arg3 ;
-(void)remove:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 ;
-(void)swapIndex:(unsigned short)arg1 withIndex:(unsigned short)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isVertical;
-(unsigned short)endIndex;
-(unsigned short)startIndex;
-(id)initWithArchive:(const ShuffleMappingArchive*)arg1 ;
-(unsigned short*)mapping;
@end

