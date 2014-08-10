//
//  NSString+CommonDigest.h
//  autocarma
//
//  Created by Maksim Kasimov on 8/10/14.
//  Copyright (c) 2014 autocarma.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (CommonDigest)
- (NSString *)md5;
- (NSString *)sha1;

@end
