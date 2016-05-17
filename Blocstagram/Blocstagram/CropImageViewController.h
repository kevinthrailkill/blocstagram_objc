//
//  CropImageViewController.h
//  Blocstagram
//
//  Created by Kevin Thrailkill on 5/17/16.
//  Copyright © 2016 kevinthrailkill. All rights reserved.
//

#import "MediaFullScreenViewController.h"


@class CropImageViewController;

@protocol CropImageViewControllerDelegate <NSObject>

- (void) cropControllerFinishedWithImage:(UIImage *)croppedImage;

@end

@interface CropImageViewController : MediaFullScreenViewController

- (instancetype) initWithImage:(UIImage *)sourceImage;

@property (nonatomic, weak) NSObject <CropImageViewControllerDelegate> *delegate;

@end
