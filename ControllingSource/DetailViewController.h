//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Rameswar on 06/06/14.
//  Copyright (c) 2014 sparshcommunications. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
