/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:55 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <Foundation/NSCoder.h>

@class UINibStringIDTable;

@interface UINibDecoder : NSCoder {

	Class arrayClass;
	Class setClass;
	Class dictionaryClass;
	Class* classes;
	id* missingClasses;
	UINibDecoderObjectEntry* objects;
	UINibDecoderValue* values;
	char* valueTypes;
	void* valueData;
	unsigned long valueDataSize;
	UINibDecoderHeader header;
	id* objectsByObjectID;
	unsigned* longObjectClassIDs;
	char* shortObjectClassIDs;
	unsigned* keyMasks;
	long inlinedValueKey;
	UINibDecoderRecursiveState recursiveState;
	UINibStringIDTable* keyIDTable;
	id delegate;
	UIKeyToKeyIDCache* keyIDCache;
	UIKeyAndScopeToValueCache* valueCache;
	int lookupRounds;
	int maxPossibleLookupRounds;
	int failedByKeyMask;
	int savedByKeyMask;

}

@property (assign) id delegate; 
+(id)unarchiveObjectWithData:(id)arg1 ;
+(id)unarchiveObjectWithFile:(id)arg1 ;
-(void)dealloc;
-(id)decodeObjectForKey:(id)arg1 ;
-(char)decodeBoolForKey:(id)arg1 ;
-(char)containsValueForKey:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(unsigned)systemVersion;
-(int)decodeIntForKey:(id)arg1 ;
-(void)finishDecoding;
-(char)allowsKeyedCoding;
-(int)decodeIntegerForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned*)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(CGRect)decodeCGRectForKey:(id)arg1 ;
-(CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1 ;
-(UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(id)initForReadingWithData:(id)arg1 error:(id*)arg2 ;
-(id)initForReadingWithData:(id)arg1 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(char)validateAndIndexData:(id)arg1 error:(id*)arg2 ;
-(char)validateAndIndexClasses:(const void*)arg1 length:(unsigned long)arg2 ;
-(char)validateAndIndexKeys:(const void*)arg1 length:(unsigned long)arg2 ;
-(char)validateAndIndexValues:(const void*)arg1 length:(unsigned long)arg2 ;
-(char)validateAndIndexObjects:(const void*)arg1 length:(unsigned long)arg2 ;
-(char)decodeArrayOfCGFloats:(float*)arg1 count:(int)arg2 forKey:(id)arg3 ;
-(id)nextGenericKey;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(char)decodeArrayOfFloats:(float*)arg1 count:(int)arg2 forKey:(id)arg3 ;
-(char)decodeArrayOfDoubles:(double*)arg1 count:(int)arg2 forKey:(id)arg3 ;
-(id)decodeNXObject;
-(id)decodeDataObject;
-(id)decodeObject;
-(id)decodePropertyList;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned)arg2 at:(void*)arg3 ;
-(void*)decodeBytesWithReturnedLength:(unsigned*)arg1 ;
-(int)versionForClassName:(id)arg1 ;
@end

