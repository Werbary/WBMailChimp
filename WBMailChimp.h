//
//  MailChimpHelper.h
//  pdd
//
//  Created by Иван Труфанов on 28.03.15.
//  Copyright (c) 2015 werbary. All rights reserved.
//

#import <Foundation/Foundation.h>

//Your mailchimp data center
//A solid example - say your API Key is myapikey-us2. You are in us2
#define mailchimpDC @"YOUR_MAILCHIMP_DC"
//API Key
#define mailchimpApiKey @"YOUR_MAILCHIMP_APIKEY"

typedef void (^MailChimpHelperResultBlock)(BOOL successS, NSError *err);

@interface WBMailChimp : NSObject
+ (void) addEmail:(NSString*)email toList:(NSString *)listId resBlock:(MailChimpHelperResultBlock)resBlock;
@end
