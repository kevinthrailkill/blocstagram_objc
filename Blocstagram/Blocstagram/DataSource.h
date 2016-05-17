//
//  DataSource.h
//  Blocstagram
//
//  Created by Kevin Thrailkill on 5/10/16.
//  Copyright © 2016 kevinthrailkill. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Media;


typedef void (^NewItemCompletionBlock)(NSError *error);


@interface DataSource : NSObject

+(instancetype) sharedInstance;
+ (NSString *) instagramClientID;
@property (nonatomic, strong, readonly) NSString *accessToken;


@property (nonatomic, strong, readonly) NSArray *mediaItems;

 - (void) deleteMediaItem:(Media *)item;

- (void) requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) downloadImageForMediaItem:(Media *)mediaItem;
- (void) toggleLikeOnMediaItem:(Media *)mediaItem withCompletionHandler:(void (^)(void))completionHandler;
- (void) commentOnMediaItem:(Media *)mediaItem withCommentText:(NSString *)commentText;






@end
