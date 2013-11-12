//
//  MainViewController.h
//  SearchBarProject
//
//  Created by Alexander on 12.11.13.
//  Copyright (c) 2013 ООО "МД технолоджис". All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MDSearchBarController.h"

@interface MainViewController : UIViewController <MDSearchBarViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>


@property (nonatomic, strong) IBOutlet MDSearchBar * searchBar;
@property (nonatomic, strong) IBOutlet MDSearchBarController * searchBarController;


@end
