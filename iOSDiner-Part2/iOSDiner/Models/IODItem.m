//
//  IODItem.m
//  iOSDiner
//
//  Created by Adam Burkepile on 1/29/12.
//  Copyright (c) 2012 Adam Burkepile. All rights reserved.
//

#import "IODItem.h"
#define kInventoryAddress @"http://adamburkepile.com/inventory/"

@implementation IODItem

@synthesize name;
@synthesize price;
@synthesize pictureFile;

- (id)initWithName:(NSString*)inName andPrice:(float)inPrice andPictureFile:(NSString*)inPictureFile {
    if (self = [self init]) {
        [self setName:inName];
        [self setPrice:inPrice];
        [self setPictureFile:inPictureFile];
    }
    
    return self;
}

-(id)copyWithZone:(NSZone *)zone {
    IODItem* newItem = [IODItem new];
    [newItem setName:[self name]];
    [newItem setPrice:[self price]];
    [newItem setPictureFile:[self pictureFile]];
    
    return newItem;
}

//This is a class method, not an instance method.
+ (NSArray*)retrieveInventoryItems {
    // 1 - Create variables
    NSMutableArray* inventory = [NSMutableArray new];
    NSError* err = nil;
    // 2 - Get inventory data
    NSArray* jsonInventory = [NSJSONSerialization JSONObjectWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:kInventoryAddress]] 
                                                             options:kNilOptions 
                                                               error:&err];
    // 3 - Enumerate inventory objects
    [jsonInventory enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        NSDictionary* item = obj;
        [inventory addObject:[[IODItem alloc] initWithName:[item objectForKey:@"Name"] 
                                                  andPrice:[[item objectForKey:@"Price"] floatValue]
                                            andPictureFile:[item objectForKey:@"Image"]]];
    }];
    // 4 - Return a copy of inventory data
    //Note that we return a copy of the array instead of returning it directly, because we don't want to return a mutable version. The copy method creates an immutable version you can safely return.
    return [inventory copy];
}
@end
