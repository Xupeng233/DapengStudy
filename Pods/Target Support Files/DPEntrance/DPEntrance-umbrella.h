#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AppDelegate.h"
#import "DPSplashViewController.h"
#import "AppDelegate+TabBar.h"

FOUNDATION_EXPORT double DPEntranceVersionNumber;
FOUNDATION_EXPORT const unsigned char DPEntranceVersionString[];

