//
//  MDSearchBar.h
//  SearchBarProject
//
//  Created by Alexander on 12.11.13.
//  Copyright (c) 2013 ООО "МД технолоджис". All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MDSearchBarController.h"


@class MDSearchBarController;

@interface MDSearchBar : UIView

@property (nonatomic,strong) IBOutlet UITextField * textField;
@property (nonatomic, strong) IBOutlet UIButton * cancelButton;
@property (nonatomic, strong) MDSearchBarController * searchController;

-(void)activateSearch:(BOOL)activate;

-(IBAction)cancel:(id)sender;
+(MDSearchBar *)view;
@end
