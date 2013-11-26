/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PTSHUDControl <NSObject>
@property (assign,nonatomic,__weak) _UISettings * settings; 
@property (nonatomic,copy) NSString * valueKeyPath; 
@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) BOOL enabled; 
@required
-(void)setAlignment:(int)arg1;
-(void)setEnabled:(BOOL)arg1;
-(int)alignment;
-(void)setSettings:(id)arg1;
-(id)settings;
-(BOOL)enabled;
-(void)setValueKeyPath:(id)arg1;
-(id)valueKeyPath;
@end
