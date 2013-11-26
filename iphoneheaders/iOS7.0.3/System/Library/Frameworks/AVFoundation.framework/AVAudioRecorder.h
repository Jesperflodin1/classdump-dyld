/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSURL, NSDictionary, NSArray;

@interface AVAudioRecorder : NSObject {

	void* _impl;

}

@property (getter=isRecording,readonly) BOOL recording; 
@property (readonly) NSURL * url; 
@property (readonly) NSDictionary * settings; 
@property (assign) <AVAudioRecorderDelegate> * delegate; 
@property (readonly) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
-(BOOL)isRecording;
-(AudioRecorderImpl*)impl;
-(void)finishedRecording;
-(BOOL)isMeteringEnabled;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned)arg1 ;
-(float)averagePowerForChannel:(unsigned)arg1 ;
-(id)baseInit;
-(double)deviceCurrentTime;
-(id)channelAssignments;
-(void)setChannelAssignments:(id)arg1 ;
-(void)privCommonCleanup;
-(id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(BOOL)prepareToRecord;
-(BOOL)recordAtTime:(double)arg1 ;
-(BOOL)recordForDuration:(double)arg1 ;
-(BOOL)recordAtTime:(double)arg1 forDuration:(double)arg2 ;
-(BOOL)deleteRecording;
-(void)endInterruptionWithFlags;
-(double)currentTime;
-(void)beginInterruption;
-(void)endInterruption;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)url;
-(id)settings;
-(void)stop;
-(void)pause;
-(BOOL)record;
-(void)finalize;
@end
