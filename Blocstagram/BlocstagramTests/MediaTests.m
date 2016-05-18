//
//  MediaTests.m
//  Blocstagram
//
//  Created by Kevin Thrailkill on 5/18/16.
//  Copyright © 2016 kevinthrailkill. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "Media.h"
#import "ComposeCommentView.h"



@interface MediaTests : XCTestCase

@end

@implementation MediaTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

- (void)testThatInitializationWorks
{
    NSDictionary *sourceDictionary = @{@"id": @"8675309"};
    
   
    Media *testMedia = [[Media alloc] initWithDictionary:sourceDictionary];
    
    XCTAssertEqualObjects(testMedia.idNumber, sourceDictionary[@"id"], @"The ID number should be equal");
    
}

- (void)testSetTextAlsoSetsIsWritingComment
{
    ComposeCommentView *composeComment = [[ComposeCommentView alloc] init];
    
    [composeComment setText:@"Text here"];
    XCTAssertTrue(composeComment.isWritingComment == YES, @"There is an error in comment section - isWritingComment not set to YES");
    // and here it should be YES
    
    [composeComment setText:@""];
    XCTAssertTrue(composeComment.isWritingComment == NO, @"There is an error in comment section - isWritingComment not set to NO");
    
    composeComment = nil;
    // test to make sure isWritingComment is NO
    
}


@end
