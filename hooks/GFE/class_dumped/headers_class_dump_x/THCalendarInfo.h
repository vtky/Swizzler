/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSArray;

@interface THCalendarInfo : _ABAddressBookAddRecord
{
    double _absoluteTime;
    struct __CFCalendar *_calendar;
    struct __CFTimeZone *_timeZone;
    NSArray *_dayNames;
    NSArray *_monthNames;
}

+ (id)currentMonthName;
+ (id)currentDayName;
+ (int)daysInCurrentMonth;
+ (int)currentSecond;
+ (int)currentMinute;
+ (int)currentHourIn24HourFormat;
+ (int)currentHourIn12HourFormat;
+ (int)currentHour;
+ (int)currentYear;
+ (int)currentMonth;
+ (int)currentDayOfMonth;
+ (int)currentDayOfWeek;
+ (double)currentAbsoluteTime;
+ (id)currentDate;
+ (void)setDefaultHourFormat:(int)fp8;
+ (int)defaultHourFormat;
+ (void)setDefaultRoundingRule:(int)fp8;
+ (int)defaultRoundingRule;
+ (id)calendarInfo;
+ (void)initialize;
- (void)onSystemTimeZoneDidChange;
- (void)setTimeZone:(struct __CFTimeZone *)fp8;
- (struct __CFTimeZone *)timeZone;
- (void)setCalendar:(struct __CFCalendar *)fp8;
- (struct __CFCalendar *)calendar;
- (void)setupEnglishNames;
- (int)weeksInMonth;
- (int)weekOfMonth;
- (void)moveToBeginningOfDay;
- (void)moveToFirstDayOfMonth;
- (void)adjustYears:(int)fp8;
- (void)adjustMonths:(int)fp8;
- (void)adjustDays:(int)fp8;
- (void)moveToPreviousYear;
- (void)moveToPreviousMonth;
- (void)moveToPreviousDay;
- (void)moveToNextYear;
- (void)moveToNextMonth;
- (void)moveToNextDay;
- (id)monthName;
- (id)dayName;
- (int)daysInMonth;
- (int)second;
- (int)minute;
- (int)hourIn24HourFormat;
- (int)hourIn12HourFormat;
- (int)hour;
- (int)year;
- (int)month;
- (int)dayOfMonth;
- (int)dayOfWeek;
- (void)resetDateAndTimeToCurrent;
- (void)setDate:(id)fp8;
- (id)date;
- (void)setAbsoluteTime:(double)fp8;
- (double)absoluteTime;
- (void)dealloc;
- (id)init;

@end

