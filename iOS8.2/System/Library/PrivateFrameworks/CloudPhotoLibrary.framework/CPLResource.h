/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <CloudPhotoLibrary/NSSecureCoding.h>
#import <CloudPhotoLibrary/NSCopying.h>

@class CPLResourceIdentity, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying> {

	char _generateDerivative;
	CPLResourceIdentity* _identity;
	NSString* _itemIdentifier;
	unsigned _resourceType;

}

@property (nonatomic,retain) CPLResourceIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;                     //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) unsigned resourceType;                       //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) char generateDerivative;                     //@synthesize generateDerivative=_generateDerivative - In the implementation block
+(char)supportsSecureCoding;
+(id)normalizedResourcesFromResources:(id)arg1 ;
+(id)shortDescriptionForResourceType:(unsigned)arg1 ;
+(id)descriptionForResourceType:(unsigned)arg1 ;
+(unsigned)maxPixelSizeForResourceType:(unsigned)arg1 ;
-(char)deleteAfterUpload;
-(void)setDeleteAfterUpload:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bestFileNameForResource;
-(id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 ;
-(unsigned)maxPixelSizeForPhotoResource;
-(void)setIdentity:(CPLResourceIdentity *)arg1 ;
-(void)setResourceType:(unsigned)arg1 ;
-(char)generateDerivative;
-(void)setGenerateDerivative:(char)arg1 ;
-(NSString *)itemIdentifier;
-(unsigned)resourceType;
-(CPLResourceIdentity *)identity;
-(id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned)arg3 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
@end

