/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSString;

@interface SBBrowserRowItem : _ABAddressBookAddRecord
{
    int _cellType;
    NSString *_cellId;
    NSString *_cellLabelText;
}

+ (id)rowItemWithCellType:(int)fp8;
- (id)cellLabelText;
- (id)cellId;
- (int)cellType;
- (void)initCell;
- (void)dealloc;
- (id)initWithCellType:(int)fp8;

@end
