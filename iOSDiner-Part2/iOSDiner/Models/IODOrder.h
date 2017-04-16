//
//  IODOrder.h
//  iOSDiner
//
//  Created by Adam Burkepile on 1/29/12.
//  Copyright (c) 2012 Adam Burkepile. All rights reserved.
//
//  IODOrder:
//  This class will represent the order and the operations that go along with an order:adding an item, removing an item, calculating the total for the order, and printing out an overview of the order.
//

#import <Foundation/Foundation.h>

@class IODItem; //To let the IODOrder class know there is such a class as IODItem

@interface IODOrder : NSObject

@property (nonatomic,strong) NSMutableDictionary* orderItems;//save the items ordered by user.

- (IODItem*)findKeyForOrderItem:(IODItem*)searchItem;
- (NSMutableDictionary *)orderItems;
- (NSString*)orderDescription;
- (void)addItemToOrder:(IODItem*)inItem;
- (void)removeItemFromOrder:(IODItem*)inItem;
- (float)totalOrder;

@end
