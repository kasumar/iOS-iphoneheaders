/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/DuetLST
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DuetLST, NSMutableDictionary;

@interface DuetLSTenergystats : NSObject {

	DuetLST* lst;
	NSMutableDictionary* launchReadings;

}

@property (nonatomic,retain) DuetLST * lst; 
-(void)setLst:(id)arg1 ;
-(id)lst;
-(id)initWithLSTinstance:(id)arg1 ;
-(void)launchStart:(id)arg1 energyUsed:(unsigned long long)arg2 ;
-(void)launchEnd:(id)arg1 energyUsed:(unsigned long long)arg2 ;
-(void)dumpAll;
-(void)dumpLight;
-(void).cxx_destruct;
@end

