/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError;

@interface _NSJSONReader : NSObject {

	id input;
	int kind;
	NSError* error;

}
+(bool)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(bool)arg3 ;
-(void)setError:(id)arg1 ;
-(unsigned long long)findEncodingFromData:(id)arg1 withBOMSkipLength:(unsigned long long*)arg2 ;
-(id)parseUTF8JSONData:(id)arg1 skipBytes:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)parseData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)parseStream:(id)arg1 options:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(id)error;
@end
