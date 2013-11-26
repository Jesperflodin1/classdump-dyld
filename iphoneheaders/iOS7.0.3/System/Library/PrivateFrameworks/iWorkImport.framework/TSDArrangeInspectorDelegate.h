/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSDArrangeInspectorDelegate
@required
-(unsigned)currentZValueForArrangeInspector;
-(unsigned)minZValueForArrangeInspector;
-(void)arrangeInspectorWillBeginChangingZValue:(unsigned)arg1;
-(void)arrangeInspectorDidSetZValue:(unsigned)arg1;
-(void)arrangeInspectorDidEndChangingZValue:(unsigned)arg1;
-(unsigned)maxZValueForArrangeInspector;
-(void)moveToBackForArrangeInspector;
-(void)moveBackForArrangeInspector;
-(void)moveFrontForArrangeInspector;
-(void)moveToFrontForArrangeInspector;
-(BOOL)shouldShowWrapOptionsForSelectedDrawables;
@end
