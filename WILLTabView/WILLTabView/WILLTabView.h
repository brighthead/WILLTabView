//
//  WILLTabView.h
//  WILLTabView
//
//  Created by Aaron C on 12/6/11.
//  Copyright (c) 2011 WILLINTERACTIVE. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>

@class WIllSegmentedControl;

@interface WILLTabView : NSTabView

@property (strong) IBOutlet WIllSegmentedControl *segmentedControl;
@end