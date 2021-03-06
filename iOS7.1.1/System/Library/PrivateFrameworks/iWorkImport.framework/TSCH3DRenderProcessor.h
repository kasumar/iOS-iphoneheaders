/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DRenderProcessor : NSObject
+(id)processor;
-(bool)canRenderPrefilteredLines;
-(void)geometry:(id)arg1 ;
-(void)updateRenderState;
-(void)setRenderState:(const RenderState*)arg1 ;
-(RenderHints)renderHints;
-(void)setRenderHints:(const RenderHints*)arg1 ;
-(void)normals:(id)arg1 ;
-(void)texcoords:(id)arg1 ;
-(long long)texture:(id)arg1 ;
-(void)popState;
-(void)pushState;
-(id)effects;
-(void)pushRenderState;
-(void)popRenderState;
-(RenderState)renderState;
@end

