//
//  DetailViewController.h
//  myMeProject
//
//  Created by 18samadik on 10/13/14.
//  Copyright (c) 2014 18samadik. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

