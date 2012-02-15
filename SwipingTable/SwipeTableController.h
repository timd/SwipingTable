//
//  SwipeTableController.h
//  SwipingTable
//
//  Created by Tim Duckett on 13/12/2011.
//  Copyright (c) 2011 Charismatic Megafauna Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SwipeCellProtocol.h"

@interface SwipeTableController : UITableViewController <SwipeCellProtocol>

@property (nonatomic, strong) NSIndexPath *swipedCell;

-(void)didSwipeRightInCellWithIndexPath:(NSIndexPath *)indexPath;
-(void)didSwipeLeftInCellWithIndexPath:(NSIndexPath *)indexPath;

@end
