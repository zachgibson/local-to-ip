//
//  ViewController.h
//  LocalToIP
//
//  Created by Zach Gibson on 10/9/18.
//  Copyright © 2018 Zach Gibson. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController<NSComboBoxDelegate, NSComboBoxDataSource>

- (void)setIP:NSString;

@end
