//
//  FurbDetailViewController.h
//  Projeto_01
//
//  Created by André Ricardo Gielow on 3/24/14.
//  Copyright (c) 2014 Furb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FurbDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
