//
//  TableViewCell.h
//  FISFlashyTableviews
//
//  Created by Flatiron School on 7/1/16.
//  Copyright © 2016 Flatiron School. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWTableViewCell.h"

@interface TableViewCell : SWTableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *patternImageView;
@property (weak, nonatomic) IBOutlet UILabel *patternLabel;
@end
