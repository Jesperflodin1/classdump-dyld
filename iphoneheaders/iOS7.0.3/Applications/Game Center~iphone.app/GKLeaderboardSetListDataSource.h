/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKBasicCollectionViewDataSource.h>

@class GKGameRecord, GKPlayer;

@interface GKLeaderboardSetListDataSource : GKBasicCollectionViewDataSource {

	GKGameRecord* _game;
	GKPlayer* _player;

}

@property (nonatomic,retain) GKGameRecord * game;              //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                //@synthesize player=_player - In the implementation block
-(id)initWithGame:(id)arg1 player:(id)arg2 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)dealloc;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)sectionTitle;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end
