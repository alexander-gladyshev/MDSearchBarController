//
//  MDSearchBar.m
//  SearchBarProject
//
//  Created by Alexander on 12.11.13.
//  Copyright (c) 2013 ООО "МД технолоджис". All rights reserved.
//

#import "MDSearchBar.h"

#define kDefaultSpace 10


@implementation MDSearchBar

@synthesize searchController = _searchController;

-(void)activateSearch:(BOOL)activate{
    [UIView animateWithDuration:0.3 animations:^{
        self.textField.frame = CGRectMake(self.textField.frame.origin.x,
                                          self.textField.frame.origin.y,
                                          activate ? self.frame.size.width - self.cancelButton.frame.size.width - self.textField.frame.origin.x  - kDefaultSpace *2 :
                                                    self.frame.size.width - self.textField.frame.origin.x - kDefaultSpace,
                                          self.textField.frame.size.height);
        self.cancelButton.frame = CGRectMake(self.textField.frame.origin.x + kDefaultSpace + self.textField.frame.size.width, self.cancelButton.frame.origin.y, self.cancelButton.frame.size.width, self.cancelButton.frame.size.height);
        self.cancelButton.alpha = activate ? 1 : 0;
    }];
}


+(MDSearchBar *)view{
    return ( MDSearchBar *)[[UIViewController alloc] initWithNibName:@"MDSearchBar" bundle:nil].view;
}


-(IBAction)cancel:(id)sender{
    self.searchController.active = NO;
}

-(void)setSearchController:(MDSearchBarController *)searchController{
    _searchController  = searchController;
    self.textField.delegate = searchController;
}


@end
