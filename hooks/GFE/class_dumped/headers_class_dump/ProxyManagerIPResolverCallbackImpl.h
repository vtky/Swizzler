//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "IPResolverCallback.h"

@interface ProxyManagerIPResolverCallbackImpl : NSObject <IPResolverCallback>
{
    struct SBProxyManager *m_proxyMgr;
}

- (void)onIPAddressResolved:(_Bool)arg1 HostName:(id)arg2 IPAddressList:(id)arg3;
- (id)initWithProxyManager:(struct SBProxyManager *)arg1;

@end

