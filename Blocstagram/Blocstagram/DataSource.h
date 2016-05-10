//
//  DataSource.h
//  Blocstagram
//
//  Created by Kevin Thrailkill on 5/10/16.
//  Copyright © 2016 kevinthrailkill. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;


@end
