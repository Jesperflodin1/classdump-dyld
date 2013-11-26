/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/RemindersSettings.bundle/RemindersSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, EKEventStore;

@interface RemindersSettingsPlugin : PSListController {

	PSSpecifier* _syncDaysSpecifier;
	PSSpecifier* _defaultCalendarSpecifier;
	EKEventStore* _eventStore;
	BOOL _isSyncingReminders;

}
-(void)_eventStoreChanged;
-(BOOL)_calculateIsSyncingReminders;
-(void)dealloc;
-(id)init;
-(void)setDaysToSync:(id)arg1 specifier:(id)arg2 ;
-(id)daysToSync:(id)arg1 ;
-(id)_titlesForDaysToSync;
-(void)setDefaultCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)defaultCalendarName:(id)arg1 ;
-(id)specifiers;
-(void).cxx_destruct;
@end
