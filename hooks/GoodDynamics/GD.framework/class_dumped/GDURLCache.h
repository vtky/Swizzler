//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLCache.h"

@class NSString;

@interface GDURLCache : NSURLCache
{
    BOOL isPruning;
    unsigned int maximumFileSize;
    unsigned int estimatedDiskUsage;
    unsigned int maximumDiskCapacity;
    NSString *currentDiskPath;
    double maximumFileAge;
}

+ (void)setSharedURLCache:(id)arg1;
@property(retain) NSString *currentDiskPath; // @synthesize currentDiskPath;
@property unsigned int maximumDiskCapacity; // @synthesize maximumDiskCapacity;
@property unsigned int estimatedDiskUsage; // @synthesize estimatedDiskUsage;
@property BOOL isPruning; // @synthesize isPruning;
@property double maximumFileAge; // @synthesize maximumFileAge;
@property unsigned int maximumFileSize; // @synthesize maximumFileSize;
- (void)_schedulePruningInBackgroundIfRequired:(id)arg1;
- (void)_calculateDiskUsage:(id)arg1;
- (void)_pruneOlderFiles:(id)arg1;
- (void)_pruneFilesExceedingLimits:(id)arg1;
- (BOOL)_removeFile:(id)arg1 path:(id)arg2;
- (id)_fileAttributes:(id)arg1 path:(id)arg2;
- (id)_files:(id)arg1;
- (void)_close:(id)arg1 streamName:(id)arg2 openingSize:(unsigned int)arg3;
- (void)_incrementEstimatedDiskUsage:(unsigned int)arg1;
- (void)_decrementEstimatedDiskUsage:(unsigned int)arg1;
- (BOOL)_cacheStreamForUrl:(id)arg1 sessionID:(id *)arg2 stream:(id *)arg3 streamName:(id *)arg4 streamSize:(unsigned int *)arg5 error:(id *)arg6;
- (id)_cachePathForUrl:(id)arg1;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)_removeCachedResponse:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)_commit:(id)arg1 stream:(id)arg2 streamName:(id)arg3 openingSize:(unsigned int)arg4;
- (id)storeCacheInChunks:(id)arg1 data:(id)arg2 entry:(id)arg3 final:(BOOL)arg4;
- (void)_responseURLToMetaData:(id)arg1 metaData:(id)arg2;
- (id)_responseURLFromMetaData:(id)arg1;
- (void)_responseHeadersToMetaData:(id)arg1 metaData:(id)arg2;
- (id)_responseHeadersFromMetaData:(id)arg1;
- (void)_responseStatusCodeToMetaData:(int)arg1 metaData:(id)arg2;
- (int)_responseStatusCodeFromMetaData:(id)arg1;
- (void)_responseToMetaData:(id)arg1 metaData:(id)arg2;
- (id)_responseFromMetaData:(id)arg1;
- (id)_storeCacheInChunks:(id)arg1 data:(id)arg2 entry:(id)arg3 final:(BOOL)arg4;
- (id)cachedResponseForRequest:(id)arg1;
- (BOOL)_isCacheStale:(id)arg1 today:(double)arg2 since:(double)arg3;
- (BOOL)_isCached:(id)arg1 when:(double *)arg2 size:(unsigned int *)arg3;
- (id)initWithMemoryCapacity:(unsigned int)arg1 diskCapacity:(unsigned int)arg2 diskPath:(id)arg3;
- (void)makeDummyCacheDirectoryReadOnly;
- (id)init;
- (unsigned int)maxCacheFileSize;
- (void)setMaxCacheFileSize:(unsigned int)arg1;
- (void)setMaxCacheFileAge:(double)arg1;
- (unsigned int)currentMemoryUsage;
- (unsigned int)memoryCapacity;
- (void)setMemoryCapacity:(unsigned int)arg1;
- (void)setDiskPath:(id)arg1;
- (void)setDiskCapacity:(unsigned int)arg1;
- (unsigned int)diskCapacity;
- (void)setCurrentDiskUsage:(unsigned int)arg1;
- (unsigned int)currentDiskUsage;

@end
