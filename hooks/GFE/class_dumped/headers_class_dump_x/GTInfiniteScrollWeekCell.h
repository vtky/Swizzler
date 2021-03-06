/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GTInfiniteScrollCell.h"

#import "FilteredCacheDelegate-Protocol.h"

@class FilteredCache, NSBlockOperation, NSDate, NSMutableArray, UIImageView, UINib, UITapGestureRecognizer;

@interface GTInfiniteScrollWeekCell : GTInfiniteScrollCell <FilteredCacheDelegate>
{
    NSDate *_startOfWeek;
    NSMutableArray *_dayViews;
    UINib *_dayViewNib;
    NSDate *_endOfWeek;
    UITapGestureRecognizer *_tapGestureRecognizer;
    int _state;
    id <GTInfiniteScrollWeekCellDelegate> _delegate;
    UIImageView *_busyMeter;
    id <GTCalendarViewDataSource> _dataSourceDelegate;
    FilteredCache *_filteredCache;
    NSBlockOperation *_allDayRenderingOperation;
    NSBlockOperation *_dayRenderingOperation;
    NSBlockOperation *_filteredCacheOperation;
}

+ (void)initialize;
- (void)setFilteredCacheOperation:(id)fp8;
- (id)filteredCacheOperation;
- (void)setDayRenderingOperation:(id)fp8;
- (id)dayRenderingOperation;
- (void)setAllDayRenderingOperation:(id)fp8;
- (id)allDayRenderingOperation;
- (void)setFilteredCache:(id)fp8;
- (id)filteredCache;
- (void)setDataSourceDelegate:(id)fp8;
- (id)dataSourceDelegate;
- (void)setBusyMeter:(id)fp8;
- (id)busyMeter;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (int)state;
- (void)setTapGestureRecognizer:(id)fp8;
- (id)tapGestureRecognizer;
- (void)setEndOfWeek:(id)fp8;
- (id)endOfWeek;
- (void)setDayViewNib:(id)fp8;
- (id)dayViewNib;
- (void)setDayViews:(id)fp8;
- (id)dayViews;
- (id)startOfWeek;
- (void)createFilteredCaches;
- (void)removeFilteredCache;
- (id)allDayImageFromOccurrences_iPhone:(id)fp8 inWeek:(id)fp12 weekCellWidth:(float)fp16;
- (struct CGRect)clippingRectForWeek:(id)fp8 inMonth:(id)fp12 withFrame:(struct CGRect)fp16;
- (struct _NSRange)rangeForWeek:(id)fp8 inMonth:(id)fp12;
- (id)allDayImageFromOccurrences_iPad:(id)fp8 inWeek:(id)fp12 weekCellWidth:(float)fp16;
- (id)allDayImageFromOccurrences:(id)fp8 inWeek:(id)fp12 weekCellWidth:(float)fp16;
- (id)dayImageFromOccurrences:(id)fp8 forDate:(id)fp12 dayCellWidth:(float)fp16;
- (id)dayImagesFromOccurrences:(id)fp8 inWeek:(id)fp12 dayCellWidth:(float)fp16;
- (void)filteredCache:(id)fp8 didUpdateRowsAtIndexPaths:(id)fp12;
- (void)filteredCache:(id)fp8 didRemoveRowsAtIndexPaths:(id)fp12;
- (void)filteredCache:(id)fp8 willRemoveRowsAtIndexPaths:(id)fp12;
- (void)filteredCache:(id)fp8 didAddRowsAtIndexPaths:(id)fp12;
- (void)filteredCache:(id)fp8 didRemoveSectionsAtIndexes:(id)fp12;
- (void)filteredCache:(id)fp8 didAddSectionsAtIndexes:(id)fp12;
- (void)updateBusyMeterForFilteredCache:(id)fp8 indexPaths:(id)fp12;
- (void)didInitiallyLoadDataForFilteredCache:(id)fp8;
- (void)updateDayImages:(id)fp8;
- (void)updateAllDayImage:(id)fp8;
- (BOOL)shouldUpdateBusyMeterImages;
- (void)applyShadowsOnDayViews:(BOOL)fp8;
- (void)updateShadows;
- (void)setBusyMeterHidden:(BOOL)fp8;
- (void)setState:(int)fp8;
- (void)weekCellWasTapped:(id)fp8;
- (void)prepareForReuse;
- (void)updateDayViewsState;
- (BOOL)shouldShowMonthLabelOnScrollForDate:(id)fp8;
- (void)updateDayViews;
- (void)cancelFilteredCacheOperation;
- (void)cancelDayRenderingOperation;
- (void)cancelAllDayRenderingOperation;
- (void)cancelRenderingOperations;
- (void)setStartOfWeek:(id)fp8;
- (void)updateBusyMeterFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8 reuseIdentifier:(id)fp24;
- (void)dealloc;

@end

