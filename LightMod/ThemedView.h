//
//  ThemedView.h
//  LightMod
//
//  Created by Guanshan Liu on 13/01/2013.
//  Copyright (c) 2013 Guanshan Liu. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, LightModTheme) {
    LightModThemeLight  = 0,
    LightModThemeDark   = 1,
};

@interface ThemedView : UIView

@property (nonatomic, assign) LightModTheme currentTheme;

- (void)toggleTheme;

/*
 *  Background gradient colors and locations
 */
@property (nonatomic,strong) NSArray *gradientLocations;
@property (nonatomic,strong) NSArray *gradientColors;

@end
