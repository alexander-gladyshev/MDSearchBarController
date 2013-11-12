//
//  MDSearchBar.h
//  SearchBarProject
//
//  Created by Alexander on 12.11.13.
//  Copyright (c) 2013 ООО "МД технолоджис". All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MDSearchBar.h"
#import "MDSearchView.h"

@class MDSearchBar;
@class MDSearchView;
@class MDSearchBarController;

@protocol MDSearchBarViewControllerDelegate <NSObject, UITableViewDelegate, UITableViewDataSource>
@optional

-(void)searchBar:(MDSearchBarController *)searchBarController searchWithText:(NSString *)text;

@end

@interface MDSearchBarController : NSObject <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>

@property (nonatomic, strong) MDSearchBar * searchBarView;
@property (nonatomic, strong) MDSearchView * searchView;
@property (nonatomic, readwrite) BOOL active;




@property (nonatomic, strong) id<MDSearchBarViewControllerDelegate> delegate;


-(void)reloadData;
@end
