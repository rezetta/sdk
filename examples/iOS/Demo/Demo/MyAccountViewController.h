//
//  MyAccountViewController.h
//  Demo
//
//  Created by Javier Navarro on 29/10/14.
//  Copyright (c) 2014 MEGA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MegaSDK.h"

@interface MyAccountViewController : UIViewController <MRequestDelegate>

@property (nonatomic, strong) MegaSDK *megaSDK;

@end
