//
//  MainViewController.h
//  MyTest
//
//  Created by loic on 17/12/13.
//  Copyright (c) 2013 loic. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
