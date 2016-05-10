// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-

@import Cocoa;

@class PreferencesModel;

@interface SharedPreferencesManager : NSObject

@property PreferencesModel* pm;

- (void)load;
- (void)save;

- (void)setValue:(int)newval forName:(NSString*)name;

@end
