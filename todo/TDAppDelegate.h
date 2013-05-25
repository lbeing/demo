//
//  TDAppDelegate.h
//  todo
//
//  Created by lbeing on 13-5-25.
//  Copyright (c) 2013年 lbeing. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "todoIncrementalStore.h"

@interface TDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;

@property (strong, nonatomic) UINavigationController *navigationController;

@end
