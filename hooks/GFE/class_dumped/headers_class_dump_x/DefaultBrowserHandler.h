/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class GUAlertView, GmmOpenHttpUrlService, NSString, NSURL, UIActionSheet;

@interface DefaultBrowserHandler : _ABAddressBookAddRecord <UIActionSheetDelegate, UIAlertViewDelegate>
{
    BOOL _defaultBrowserIsOpen;
    NSString *_defaultBrowserAppId;
    GmmOpenHttpUrlService *_gmmOpenHttpUrlService;
    UIActionSheet *_browsersListActionSheet;
    NSString *_defaultBrowserCandidate;
    NSURL *_urlToBeOpened;
    GUAlertView *_alertView;
}

+ (id)instance;
+ (void)initialize;
- (void)setAlertView:(id)fp8;
- (id)alertView;
- (void)setDefaultBrowserIsOpen:(BOOL)fp8;
- (BOOL)defaultBrowserIsOpen;
- (void)setUrlToBeOpened:(id)fp8;
- (id)urlToBeOpened;
- (void)setDefaultBrowserCandidate:(id)fp8;
- (id)defaultBrowserCandidate;
- (void)setBrowsersListActionSheet:(id)fp8;
- (id)browsersListActionSheet;
- (void)setGmmOpenHttpUrlService:(id)fp8;
- (id)gmmOpenHttpUrlService;
- (id)defaultBrowserAppId;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)willPresentActionSheet:(id)fp8;
- (void)actionSheet:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (BOOL)isBuiltInBrowserDefault;
- (BOOL)isUrlValid:(id)fp8;
- (void)presentActionSheetWithAvailableBrowsers;
- (void)disableOrientationNotifications;
- (void)enableOrientationNotifications;
- (void)didRotate;
- (void)hideAlert;
- (void)hideActionSheet;
- (void)writeDefaultBrowserAppIdToOptionsDB:(id)fp8;
- (id)readDefaultBrowserAppIdFromOptionsDB;
- (id)idForBrowserWithName:(id)fp8;
- (id)nameForBrowserWithId:(id)fp8;
- (id)availableBrowsersNames;
- (BOOL)openUrlUsingBuiltInBrowser:(id)fp8;
- (BOOL)openDefaultBrowser;
- (BOOL)openUrlUsingDefaultBrowser:(id)fp8;
- (void)removeBuiltInBrowserId;
- (void)refreshAvailableBrowsers;
- (BOOL)areGDBrowsersAvailable;
- (void)setDefaultBrowserAppId:(id)fp8;
- (void)dealloc;
- (id)init;

@end

