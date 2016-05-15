//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Kevin Thrailkill on 5/11/16.
//  Copyright © 2016 kevinthrailkill. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;
@class MediaTableViewCell;


@protocol MediaTableViewCellDelegate <NSObject>

- (void) cell:(MediaTableViewCell *)cell didTapImageView:(UIImageView *)imageView;
- (void) cell:(MediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;

@end

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;
@property (nonatomic, weak) id <MediaTableViewCellDelegate> delegate;



+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;




@end
