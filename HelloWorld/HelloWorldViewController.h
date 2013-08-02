//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Vincent Siao on 8/1/13.
//  Copyright (c) 2013 Vincent Siao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>
- (IBAction)login:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;
@end
