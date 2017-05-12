//
//  EBNUserObject.h
//  EbizuSDK
//
//  Created by ebizu on 10/17/16.
//  Copyright © 2016 Ebizu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EBNUserObject : NSObject


extern NSString * const kEBNLastName;
extern NSString * const kEBNBirtDay;
extern NSString * const kEBNGender;
extern NSString * const kEBNLanguage;
extern NSString * const kEBNPhoneNumber;
extern NSString * const kEBNFacebookID;
extern NSString * const kEBNLocation;
extern NSString * const kEBNCity;
extern NSString * const kEBNState;
extern NSString * const kEBNCountry;
extern NSString * const kEBNEmail;
extern NSString * const kEBNInterest;
extern NSString * const kEBNSignUpFacebook;
extern NSString * const kEBNSignUpGoogle;
extern NSString * const kEBNFirstName;
extern NSString * const kEBNUserID;
extern NSString * const kEBNUserIDKey;

@property (nonatomic,strong) NSString * userID;
@property (nonatomic,strong) NSString * userIDKey;
@property (nonatomic,strong) NSString * firstName;
@property (nonatomic,strong) NSString * lastName;
@property (nonatomic,strong) NSString * birthDay;
@property (nonatomic,strong) NSString * gender;
@property (nonatomic,strong) NSString * language;
@property (nonatomic,strong) NSString * phoneNumber;
@property (nonatomic,strong) NSString * facebookID;
@property (nonatomic,strong) NSString * location;
@property (nonatomic,strong) NSString * city;
@property (nonatomic,strong) NSString * state;
@property (nonatomic,strong) NSString * country;
@property (nonatomic,strong) NSString * email;
@property (nonatomic,strong) NSString * interest;
@property (nonatomic,assign) BOOL signUpFacebook;
@property (nonatomic,assign) BOOL signUpGoogle;
@property (nonatomic,strong) NSMutableDictionary * additionalData;

- (id)initWithUserID:(NSString*)userID forKey:(NSString *)key additionalData:(NSDictionary*)additionalData;
- (id)initWithUserID:(NSString*)userID forKey:(NSString *)key;
- (id)initFromDictionary:(NSDictionary*)dict;

- (NSDictionary*)getUserDictionary;
@end
