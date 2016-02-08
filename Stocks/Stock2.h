//
//  Stock+CoreDataProperties.h
//  Stocks
//
//  Created by Kyle Raney on 1/19/16.
//  Copyright © 2016 Kyle Raney. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Stock.h"

NS_ASSUME_NONNULL_BEGIN

@interface Stock (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *stockId;
@property (nullable, nonatomic, retain) NSString *submitter;
@property (nullable, nonatomic, retain) NSDate *projected_er_date;
@property (nullable, nonatomic, retain) NSString *full_title;
@property (nullable, nonatomic, retain) NSString *symbol;
@property (nullable, nonatomic, retain) NSDate *submitted_on;

@end

NS_ASSUME_NONNULL_END
