//
//  DetailViewController.h
//  Stocks
//
//  Created by Kyle Raney on 1/16/16.
//  Copyright © 2016 Kyle Raney. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

