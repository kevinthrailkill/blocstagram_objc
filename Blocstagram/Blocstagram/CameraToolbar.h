//
//  CameraToolbar.h
//  Blocstagram
//
//  Created by Kevin Thrailkill on 5/17/16.
//  Copyright © 2016 kevinthrailkill. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CameraToolbar;

@protocol CameraToolbarDelegate <NSObject>

- (void) leftButtonPressedOnToolbar:(CameraToolbar *)toolbar;
- (void) rightButtonPressedOnToolbar:(CameraToolbar *)toolbar;
- (void) cameraButtonPressedOnToolbar:(CameraToolbar *)toolbar;

@end

@interface CameraToolbar : UIView

- (instancetype) initWithImageNames:(NSArray *)imageNames;

@property (nonatomic, weak) NSObject <CameraToolbarDelegate> *delegate;

@end
