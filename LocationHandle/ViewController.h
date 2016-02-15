//
//  ViewController.h
//  LocationHandle
//
//  Created by dev on 12/11/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController<CLLocationManagerDelegate>

- (IBAction)OnGetLocation:(id)sender;

@end

