//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface GUDrawShapeHelper : NSObject
{
    struct CGColorSpace *colorSpace;
}

@property(nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace;
- (void)dealloc;
- (void)drawBumpedRoundedRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withColor:(struct CGColor *)arg3;
- (id)initWithColorSpace:(struct CGColorSpace *)arg1;

@end

