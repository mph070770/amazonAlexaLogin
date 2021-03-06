//
//  AMZNGetProfileProfileDelegate.h
//  AVSObjcFTW
//
//  Created by Luis Castillo on 5/3/16.
//  Copyright © 2016 LC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <LoginWithAmazon/LoginWithAmazon.h>
#import "AMZNAuthorizeUserDelegate.h"
#import "LoginViewController.h"
@class LoginViewController;

@interface AMZNGetProfileProfileDelegate : NSObject<AIAuthenticationDelegate>

-(id)initWithParentController:(LoginViewController *) controller;


@end
