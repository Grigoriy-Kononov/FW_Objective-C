//
//  ViewController.h
//  FW_Objective-C
//
//  Created by Григорий Кононов on 18.09.2023.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (weak, nonatomic) IBOutlet UITextView *textViewForFile;

@property (nonatomic) NSUserDefaults *userDefaults;

-(instancetype) initWithCoder:(NSCoder *)coder;
-(instancetype) initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil;
-(void) resetUserDefaults;
@end

