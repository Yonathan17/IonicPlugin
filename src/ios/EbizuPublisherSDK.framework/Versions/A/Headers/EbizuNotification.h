//
//  EbizuNotification.h
//  EbizuPublisherSDK
//
//  Created by Ebizu-Taufik on 1/31/17.
//  Copyright © 2017 Ebizu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EbizuNotification : NSObject


@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *campaignName;
@property (strong, nonatomic) NSString *deeplink;
@property (strong, nonatomic) NSString *image;
@property (strong, nonatomic) NSString *message;
@property (strong, nonatomic) NSString *messageId;

- (id)initWithDictionary:(NSDictionary*)dict;

@end
