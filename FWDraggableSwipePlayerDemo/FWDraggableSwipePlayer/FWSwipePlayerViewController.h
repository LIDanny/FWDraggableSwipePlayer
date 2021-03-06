//
//  FWSwipePlayerViewController.h
//  FWDraggableSwipePlayer
//
//  Created by Filly Wang on 20/1/15.
//  Copyright (c) 2015 Filly Wang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FWSwiperPlayerController.h"

@interface FWSwipePlayerViewController : UIViewController

@property (nonatomic, strong)FWSwiperPlayerController *moviePlayer;

- (void)updateMoviePlayerWithInfo:(NSDictionary * )dict Config:(FWSWipePlayerConfig*)config;
- (void)updateMoviePlayerWithVideoList:(NSArray * )list Config:(FWSWipePlayerConfig*)configuration;

@end
