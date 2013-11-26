/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapWebKitPlugin/MapWebKitPlugin-Structs.h>
#import <ChatKit/MKAnnotation.h>

@class NSString;

@interface MapPluginAnnotationSO : NSObject <MKAnnotation> {

	BOOL _hasLeftCalloutButton;
	BOOL _hasRightCalloutButton;
	BOOL _animatesDrop;
	BOOL _draggable;
	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	NSString* _imageURLString;
	unsigned _pinColor;
	CGPoint _centerOffset;
	SCD_Struct_Ma3 _coordinate;

}

@property (assign,nonatomic) SCD_Struct_Ma3 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * imageURLString;                //@synthesize imageURLString=_imageURLString - In the implementation block
@property (assign) CGPoint centerOffset;                             //@synthesize centerOffset=_centerOffset - In the implementation block
@property (assign) BOOL hasLeftCalloutButton;                        //@synthesize hasLeftCalloutButton=_hasLeftCalloutButton - In the implementation block
@property (assign) BOOL hasRightCalloutButton;                       //@synthesize hasRightCalloutButton=_hasRightCalloutButton - In the implementation block
@property (assign) unsigned pinColor;                                //@synthesize pinColor=_pinColor - In the implementation block
@property (assign) BOOL animatesDrop;                                //@synthesize animatesDrop=_animatesDrop - In the implementation block
@property (assign) BOOL draggable;                                   //@synthesize draggable=_draggable - In the implementation block
-(id)imageURLString;
-(BOOL)hasLeftCalloutButton;
-(BOOL)hasRightCalloutButton;
-(id)initDroppedPinAtCoordinate:(SCD_Struct_Ma3)arg1 title:(id)arg2 identifier:(id)arg3 ;
-(void)setImageURLString:(id)arg1 ;
-(void)setHasLeftCalloutButton:(BOOL)arg1 ;
-(void)setHasRightCalloutButton:(BOOL)arg1 ;
-(id)initWithWebScriptObject:(id)arg1 ;
-(unsigned)pinColor;
-(BOOL)animatesDrop;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)identifier;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setIdentifier:(id)arg1 ;
-(void)setPinColor:(unsigned)arg1 ;
-(void)setAnimatesDrop:(BOOL)arg1 ;
-(SCD_Struct_Ma3)coordinate;
-(CGPoint)centerOffset;
-(void)setCoordinate:(SCD_Struct_Ma3)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(BOOL)draggable;
-(void)setDraggable:(BOOL)arg1 ;
@end
