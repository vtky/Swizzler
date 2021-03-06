//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIView.h"

#import "FilteredCacheDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FilteredCache, GTEventBubble, GTRecycleItemsQueue, NSArray, NSDate, NSMutableArray;

@interface GTWeekAllDayView : UIView <FilteredCacheDelegate, UIGestureRecognizerDelegate>
{
    id <GTWeekAllDayViewDelegate> _delegate;
    FilteredCache *_filteredCache;
    NSMutableArray *_bubbles;
    GTRecycleItemsQueue *_bubbleQueue;
    NSDate *_date;
    NSArray *_tiles;
    GTEventBubble *_pressedBubble;
    struct CGPoint _locationOfInitialPress;
}

@property(retain, nonatomic) GTEventBubble *pressedBubble; // @synthesize pressedBubble=_pressedBubble;
@property(nonatomic) struct CGPoint locationOfInitialPress; // @synthesize locationOfInitialPress=_locationOfInitialPress;
@property(retain, nonatomic) NSArray *tiles; // @synthesize tiles=_tiles;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) GTRecycleItemsQueue *bubbleQueue; // @synthesize bubbleQueue=_bubbleQueue;
@property(retain, nonatomic) NSMutableArray *bubbles; // @synthesize bubbles=_bubbles;
@property(retain, nonatomic) FilteredCache *filteredCache; // @synthesize filteredCache=_filteredCache;
@property(nonatomic) id <GTWeekAllDayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)recycleBubble:(id)arg1;
- (id)getNewBubble;
- (void)updateBubblesForOccurrences:(id)arg1;
- (void)filteredCache:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (void)filteredCache:(id)arg1 didRemoveRowsAtIndexPaths:(id)arg2;
- (void)deleteBubblesForOccurrences:(id)arg1;
- (void)filteredCache:(id)arg1 willRemoveRowsAtIndexPaths:(id)arg2;
- (void)adjustViewHeight;
- (void)addBubblesForOccurrences:(id)arg1;
- (void)filteredCache:(id)arg1 didAddRowsAtIndexPaths:(id)arg2;
- (void)filteredCache:(id)arg1 didRemoveSectionsAtIndexes:(id)arg2;
- (void)filteredCache:(id)arg1 didAddSectionsAtIndexes:(id)arg2;
- (void)didInitiallyLoadDataForFilteredCache:(id)arg1;
- (void)viewLongPresssed:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

