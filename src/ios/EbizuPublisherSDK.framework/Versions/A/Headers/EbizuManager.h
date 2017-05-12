//
//  EbizuManager.h
//  EbizuPublisherSDK
//
//  Created by Ebizu-Taufik on 1/26/17.
//  Copyright © 2017 Ebizu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EBNUserObject.h"
#import "EbizuNotification.h"

@protocol EbizuManagerDelegate <NSObject>

@optional

/*
 *  onNotificationReceived:
 *
 *  Discussion:
 *    Invoked when notification received (if delegate has been set).
 */

- (void)onNotificationReceived:(EbizuNotification *)notif;

@end

@interface EbizuManager : NSObject



@property (nonatomic , strong)  id <EbizuManagerDelegate> delegate;

typedef void (^EbizuHandleNotification)(EbizuNotification* notification);

+ (EbizuManager*)sharedManager;

+ (id)initWithAppID:(NSString*)appID launchOptions:(NSDictionary *)launchOptions;
+ (id)initWithAppID:(NSString*)appID launchOptions:(NSDictionary *)launchOptions autoPrompt:(BOOL)autoPrompt;
+ (id)initWithAppID:(NSString*)appID launchOptions:(NSDictionary *)launchOptions autoPrompt:(BOOL)autoPrompt development:(BOOL)development;
+ (id)initWithAppID:(NSString*)appID launchOptions:(NSDictionary *)launchOptions autoPrompt:(BOOL)autoPrompt development:(BOOL)development debugMode:(BOOL)debugMode;
+ (id)initWithAppID:(NSString*)appID launchOptions:(NSDictionary *)launchOptions handleNotification:(EbizuHandleNotification)handler;
+ (id)initWithAppID:(NSString*)appID launchOptions:(NSDictionary *)launchOptions handleNotification:(EbizuHandleNotification)handler autoPrompt:(BOOL)autoPrompt development:(BOOL)development debugMode:(BOOL)debugMode;

- (void)userLoginWithObject:(EBNUserObject *)user;

- (void)userLogout;

- (void)logEvent:(NSString *)eventName data:(NSDictionary*)data;

- (void)logEvent:(NSString *)eventName withArray:(NSArray*)events;


/*
 *  registerRemoteNotification:
 *
 *  Discussion:
 *    Invoked when notification received (if delegate has been set).
 */
- (void)registerRemoteNotification;
    
+ (NSString*)appId;

@end
