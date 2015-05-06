//
//  repController.h
//  myRep
//
//  Created by Wagner Pinto on 5/5/15.
//  Copyright (c) 2015 weeblu.co llc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Settings.h"
#import "Rep.h"

@interface repController : NSObject

+ (repController *)sharedInstance;
- (void)getRepresentativeWithInfo:(NSString *)info andSearchType:(Search)searchType completion:(void (^)(BOOL))completion;
- (void)getSenatorWithInfo:(NSString *)info andSearchType:(Search)searchType completion:(void (^)(BOOL))completion;

@property (nonatomic, strong) NSArray *representativeArray;
@property (nonatomic, strong) NSArray *senatorsArray;

@end
