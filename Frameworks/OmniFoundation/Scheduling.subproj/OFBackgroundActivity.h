// Copyright 2013 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <Foundation/NSObject.h>

/*
 A cover for the UIKit/AppKit mechanisms for avoiding being suspended or terminated while in the background. Eventually, this could be replaced by -[NSProcessInfo beginActivityWithOptions:reason:]. The automatic -finish on -dealloc is nice for when there are multiple pieces of a background operation -- each piece can hold onto the activity instance. (Alternatively, we could add a -start method that could increment a counter that -finished would decrement).
 
 Instances should be created and then either sent -finished or just released when done.
 
 */

@interface OFBackgroundActivity : NSObject

+ (instancetype)backgroundActivityWithIdentifier:(NSString *)identifier;
- (void)finished;

@end
