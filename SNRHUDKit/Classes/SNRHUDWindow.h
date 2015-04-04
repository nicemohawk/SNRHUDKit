//
//  SNRHUDWindow.h
//  SNRHUDKit
//
//  Created by Indragie Karunaratne on 12-01-22.
//  Copyright (c) 2012 indragie.com. All rights reserved.
//

#import <AppKit/AppKit.h>

// TODO: Add close button

#define SNRWindowTitlebarHeight         22.f
#define SNRWindowBorderColor            [NSColor blackColor]
#define SNRWindowTopColor               [NSColor colorWithDeviceWhite:0.240 alpha:0.960]
#define SNRWindowBottomColor            [NSColor colorWithDeviceWhite:0.150 alpha:0.960]
#define SNRWindowHighlightColor         [NSColor colorWithDeviceWhite:1.000 alpha:0.200]
#define SNRWindowCornerRadius           5.f

#define SNRWindowTitleFont              [NSFont systemFontOfSize:11.f]
#define SNRWindowTitleColor             [NSColor colorWithDeviceWhite:0.700 alpha:1.000]
#define SNRWindowTitleShadowOffset      NSMakeSize(0.f, 1.f)
#define SNRWindowTitleShadowBlurRadius  1.f
#define SNRWindowTitleShadowColor       [NSColor blackColor]

#define SNRWindowButtonSize             NSMakeSize(18.f, 18.f)
#define SNRWindowButtonEdgeMargin       5.f
#define SNRWindowButtonBorderColor      [NSColor colorWithDeviceWhite:0.770 alpha:1.000]
#define SNRWindowButtonGradientBottomColor  [NSColor colorWithDeviceWhite:0.850 alpha:1.000]
#define SNRWindowButtonGradientTopColor     [NSColor colorWithDeviceWhite:0.850 alpha:1.000]
#define SNRWindowButtonDropShadowColor  [NSColor colorWithDeviceWhite:1.000 alpha:0.100]
#define SNRWindowButtonCrossColor       [NSColor windowBackgroundColor]
#define SNRWindowButtonCrossInset       1.f
#define SNRWindowButtonHighlightOverlayColor [NSColor colorWithDeviceWhite:0.000 alpha:0.300]
#define SNRWindowButtonInnerShadowColor [NSColor colorWithDeviceWhite:1.000 alpha:0.100]
#define SNRWindowButtonInnerShadowOffset NSMakeSize(0.f, 0.f)
#define SNRWindowButtonInnerShadowBlurRadius    1.f

@interface SNRHUDWindow : NSWindow

@end

@interface SNRHUDWindowButtonCell : NSButtonCell
@end
