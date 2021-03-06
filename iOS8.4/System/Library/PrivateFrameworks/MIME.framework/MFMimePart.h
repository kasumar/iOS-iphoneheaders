/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MIME/MIME-Structs.h>
@class NSString, NSMutableDictionary, MFWeakReferenceHolder, NSURL, MFPartialNetworkDataConsumer, NSData;

@interface MFMimePart : NSObject {

	NSString* _type;
	NSString* _subtype;
	NSMutableDictionary* _bodyParameters;
	NSString* _contentTransferEncoding;
	NSMutableDictionary* _otherIvars;
	NSRange _range;
	MFWeakReferenceHolder* _parent;
	MFWeakReferenceHolder* _body;
	MFMimePart* _nextPart;
	NSURL* _partURL;
	NSURL* _parentPartURL;
	MFPartialNetworkDataConsumer* _partialDataConsumer;
	NSData* _fullData;
	MFWeakReferenceHolder* _decodedData;

}
+(void)initialize;
+(BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4 ;
+(BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 ;
+(BOOL)isRecognizedClassForContent:(id)arg1 ;
+(Class)attachmentClass;
-(id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id*)arg4 ;
-(id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id*)arg3 ;
-(BOOL)_needsSignatureVerification:(id*)arg1 ;
-(void)_setSigners:(id)arg1 ;
-(void)_setSMIMEError:(id)arg1 ;
-(id)decodeMultipartSigned;
-(id)decodeApplicationPkcs7_mime;
-(id)SMIMEError;
-(id)copySigners;
-(id)decodeMultipartRelated;
-(id)decodeMultipartAlternative;
-(id)decodeMultipart;
-(id)decodeApplicationZip;
-(id)decodeApplicationOctet_stream;
-(id)bodyData;
-(id)_fullMimeTypeEvenInsideAppleDouble;
-(id)contentsForTextSystemForcingDownload:(BOOL)arg1 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(void)_contents:(id*)arg1 toOffset:(unsigned long long)arg2 resultOffset:(unsigned long long*)arg3 downloadIfNecessary:(BOOL)arg4 asHTML:(BOOL)arg5 isComplete:(BOOL*)arg6 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(void)decodeIfNecessary;
-(id)decodeText;
-(id)contentsForTextSystem;
-(BOOL)hasContents;
-(BOOL)parseIMAPPropertyList:(id)arg1 ;
-(id)partNumber;
-(BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)arg1 ;
-(BOOL)parseMimeBody;
-(void)download;
-(long long)numberOfAlternatives;
-(unsigned long long)totalTextSize;
-(id)rfc822DecodedMessageBody;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)subtype;
-(void)setSubtype:(id)arg1 ;
-(NSRange)range;
-(void)setIsGenerated:(BOOL)arg1 ;
-(id)attachments;
-(BOOL)isGenerated;
-(void)setRange:(NSRange)arg1 ;
-(void)setSubparts:(id)arg1 ;
-(void)setContentLocation:(id)arg1 ;
-(id)languages;
-(void)setLanguages:(id)arg1 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 ;
-(BOOL)isRich;
-(id)chosenAlternativePart;
-(id)_partThatIsAttachment;
-(BOOL)shouldConsiderInlineOverridingExchangeServer;
-(id)startPart;
-(id)subpartAtIndex:(long long)arg1 ;
-(void)_ensureBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 decoded:(id*)arg5 ;
-(id)bodyDataForcingDownload:(BOOL)arg1 ;
-(id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)preservedHeaderValueForKey:(id)arg1 ;
-(void)setContentDescription:(id)arg1 ;
-(void)_setRFC822DecodedMessageBody:(id)arg1 ;
-(void)clearCachedDescryptedMessageBody;
-(BOOL)_hasCompleteBodyDataToOffset:(unsigned long long)arg1 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 ;
-(void)getNumberOfAttachments:(unsigned*)arg1 isSigned:(BOOL*)arg2 isEncrypted:(BOOL*)arg3 ;
-(id)mimeBody;
-(unsigned)numberOfAttachments;
-(void)addSubpart:(id)arg1 ;
-(id)firstChildPart;
-(void)setBodyParameter:(id)arg1 forKey:(id)arg2 ;
-(id)subparts;
-(id)disposition;
-(void)setContentID:(id)arg1 ;
-(id)nextSiblingPart;
-(id)bodyParameterForKey:(id)arg1 ;
-(id)bodyParameterKeys;
-(id)dispositionParameterKeys;
-(id)dispositionParameterForKey:(id)arg1 ;
-(id)contentTransferEncoding;
-(id)contentDescription;
-(id)contentID;
-(id)contentLocation;
-(void)setContentTransferEncoding:(id)arg1 ;
-(BOOL)isReadableText;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(void)setDispositionParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setDisposition:(id)arg1 ;
-(BOOL)isHTML;
-(id)textHtmlPart;
-(id)attachmentFilename;
-(void)configureFileWrapper:(id)arg1 ;
-(id)parentPart;
-(id)attachmentURLs;
-(id)decodedDataForData:(id)arg1 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)alternativeAtIndex:(long long)arg1 ;
-(id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(unsigned)textEncoding;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(BOOL)_shouldContinueDecodingProcess;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3 ;
-(unsigned)approximateRawSize;
-(BOOL)usesKnownSignatureProtocol;
-(id)signedData;
-(id)decryptedMessageBodyIsEncrypted:(BOOL*)arg1 isSigned:(BOOL*)arg2 ;
-(void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3 ;
-(void)setMimeBody:(id)arg1 ;
-(id)partURL;
-(id)fileWrapper;
-(BOOL)isAttachment;
@end

