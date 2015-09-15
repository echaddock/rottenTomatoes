//
//  MovieCell.h
//  rottenTomatoes
//
//  Created by Liz Chaddock on 9/14/15.
//  Copyright (c) 2015 Liz Chaddock. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *synopsisLabel;
@property (weak, nonatomic) IBOutlet UIImageView *posterView;

@end
