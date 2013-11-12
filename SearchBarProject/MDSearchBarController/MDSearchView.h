//
//  MDSearchView.h
//  SearchBarProject
//
//  Created by Alexander on 12.11.13.
//  Copyright (c) 2013 ООО "МД технолоджис". All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MDSearchBarController.h"

@class MDSearchBarController;

@interface MDSearchView : UIView
@property (nonatomic, strong) IBOutlet UITableView * searchTable;
@property (nonatomic, strong) MDSearchBarController * searchController;


+(MDSearchView *)view;
@end
