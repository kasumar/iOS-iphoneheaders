/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSVariableExpression, NSExpression;

@interface NSVariableAssignmentExpression : NSExpression {

	NSVariableExpression* _assignmentVariable;
	NSExpression* _subexpression;

}
+(BOOL)supportsSecureCoding;
-(void)allowEvaluation;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)predicateFormat;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2 ;
-(id)subexpression;
-(id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2 ;
-(id)assignmentVariable;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)variable;
@end

