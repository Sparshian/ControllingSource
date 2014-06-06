//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Rameswar on 06/06/14.
//  Copyright (c) 2014 sparshcommunications. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
