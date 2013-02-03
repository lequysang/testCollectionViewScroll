//
//  MyCell.h
//  testCollectionViewScroll
//
//  Created by Quy Sang Le on 2/3/13.
//  Copyright (c) 2013 Quy Sang Le. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MyCell;
@protocol MyCellDelegate
-(void)clickButtonInCell:(MyCell *)cell;
@end

@interface MyCell : UICollectionViewCell
@property(nonatomic,weak) id<MyCellDelegate> delegate;

- (IBAction)clickCell:(id)sender;

@end
