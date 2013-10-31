//
//  GetSharedSecretOperation.h
//  surespot
//
//  Created by Adam on 10/20/13.
//  Copyright (c) 2013 2fours. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CredentialCachingController.h"

@interface GetSharedSecretOperation : NSOperation
-(id) initWithCache: (CredentialCachingController *) cache
        ourUsername: (NSString *) ourUsername
         ourVersion: (NSString *) ourVersion
      theirUsername: (NSString *) theirUsername
       theirVersion: (NSString *) theirVersion
           callback: (CallbackBlock) callback;
@end