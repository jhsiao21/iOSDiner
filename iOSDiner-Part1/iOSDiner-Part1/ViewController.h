//
//  ViewController.h
//  iOSDiner-Part1
//
//  Created by Logan on 2017/4/11.
//  Copyright © 2017年 com.Logan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *ibRemoveItemButton;
@property (weak, nonatomic) IBOutlet UIButton *ibAddItemButton;
@property (weak, nonatomic) IBOutlet UIButton *ibPreviousItemButton;
@property (weak, nonatomic) IBOutlet UIButton *ibNextItemButton;
@property (weak, nonatomic) IBOutlet UIButton *ibTotalOrderButton;
@property (weak, nonatomic) IBOutlet UILabel *ibChalkboardLabel;
@property (weak, nonatomic) IBOutlet UIImageView *ibCurrentItemImageView;
@property (weak, nonatomic) IBOutlet UILabel *ibCurrentItemLabel;

- (IBAction)ibaRemoveItem:(id)sender;
- (IBAction)ibaAddItem:(id)sender;
- (IBAction)ibaLoadPreviousItem:(id)sender;
- (IBAction)ibaLoadNextItem:(id)sender;
- (IBAction)ibaCalculateTotal:(id)sender;


@end

