//
//  p1AppDelegate.h
//  p1
//
//  Created by Arvind Puri on 5/5/12.
//  Copyright 2012 7005 N Vista St San Gabriel CA 91775. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface p1AppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
