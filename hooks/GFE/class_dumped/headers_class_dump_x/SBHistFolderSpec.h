/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface SBHistFolderSpec : _ABAddressBookAddRecord <NSCopying>
{
    NSDate *startDate;
    NSDate *endDate;
    NSString *name;
}

+ (id)dayHistoryFolderSpecForDate:(id)fp8;
+ (id)dayStartDateForDate:(id)fp8;
- (void)setName:(id)fp8;
- (id)name;
- (void)setEndDate:(id)fp8;
- (id)endDate;
- (void)setStartDate:(id)fp8;
- (id)startDate;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (BOOL)isEqual:(id)fp8;
- (unsigned int)hash;
- (BOOL)isStartDateSameDayAs:(id)fp8;
- (id)initWithStartDate:(id)fp8 endDate:(id)fp12 name:(id)fp16;

@end
