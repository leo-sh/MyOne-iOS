//
//  PersonViewController.m
//  MyOne
//
//  Created by HelloWorld on 7/27/15.
//  Copyright (c) 2015 melody. All rights reserved.
//

#import "PersonViewController.h"

@interface PersonViewController ()

@end

@implementation PersonViewController

#pragma mark - View Lifecycle

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
	
	[self setUpNavigationBarShowRightBarButtonItem:NO];
}

#pragma mark - Lifecycle

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
