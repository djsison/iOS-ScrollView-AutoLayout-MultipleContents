//
//  ViewController.h
//  AutoLayoutScrollViewMultipleSubviews
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/**
    Content 1
 */
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *content1WidthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *content1HeightConstraint;

/**
    Content 2
 */
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *content2HeightConstraint;

/**
    Content 3
 */
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *content3HeightConstraint;

@end
