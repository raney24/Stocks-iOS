//
//  Stock.h
//  Stocks
//
//  Created by Kyle Raney on 2/4/16.
//  Copyright © 2016 Kyle Raney. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Stock : NSObject

@property (nonatomic) NSInteger *stockId;
@property (nonatomic, strong) NSString *submitter;
@property (nonatomic, strong) NSString *projected_er_date;
@property (nonatomic, strong) NSString *full_title;
@property (nonatomic, strong) NSString *symbol;
@property (nonatomic, strong) NSString *submitted_on;
@end
