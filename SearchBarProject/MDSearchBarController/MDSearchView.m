//
//  MDSearchView.m
//  SearchBarProject
//
//  Created by Alexander on 12.11.13.
//  Copyright (c) 2013 ООО "МД технолоджис". All rights reserved.
//

#import "MDSearchView.h"

@implementation MDSearchView


+(MDSearchView *)view{
    return ( MDSearchView *)[[UIViewController alloc] initWithNibName:@"MDSearchView" bundle:nil].view;
}


-(void)setSearchController:(MDSearchBarController *)searchController{
    _searchController  = searchController;
    self.searchTable.delegate = searchController;
    self.searchTable.dataSource = searchController;
}
- (IBAction)cancel:(id)sender {
    self.searchController.active = NO;
}
@end
