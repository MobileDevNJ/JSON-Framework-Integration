//
//  MADNJDetailViewController.h
//  mobiledevnj_json
//
//  Created by Ainsley Rattray on 3/14/12.
//  Copyright (c) 2012 Kaliware, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MADNJDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
