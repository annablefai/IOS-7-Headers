/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface NSRunStorage : NSObject <NSCopying>
{
    unsigned int _count;
    unsigned int _elementSize;
    unsigned int _numBlocks;
    unsigned int _maxBlocks;
    unsigned int _indexDeltaStartBlock;
    int _indexDelta;
    struct _NSRunBlock *_runs;
    unsigned int _cachedBlock;
    struct _NSRange _cachedBlockRange;
    unsigned int _gapBlockIndex;
}

+ (void)initialize;
+ (void)_setConsistencyCheckingEnabled:(BOOL)arg1 superCheckEnabled:(BOOL)arg2;
- (id)description;
- (void)removeElementsInRange:(struct _NSRange)arg1 coalesceRuns:(BOOL)arg2;
- (void)insertElement:(void *)arg1 range:(struct _NSRange)arg2 coalesceRuns:(BOOL)arg3;
- (void)replaceElementsInRange:(struct _NSRange)arg1 withElement:(void *)arg2 coalesceRuns:(BOOL)arg3;
- (void *)elementAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (unsigned int)elementSize;
- (unsigned int)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRunStorage:(id)arg1;
- (id)init;
- (id)initWithElementSize:(unsigned int)arg1 capacity:(unsigned int)arg2;
- (void)_deallocData;
- (void)_reallocData:(unsigned long)arg1;
- (void)_allocData:(unsigned long)arg1;
- (void)_consistencyError:(int)arg1 startAtZeroError:(BOOL)arg2 cacheError:(BOOL)arg3 inconsistentBlockError:(BOOL)arg4;
- (void)_consistencyCheck:(int)arg1;
- (void)_moveGapAndMergeWithBlockRange:(struct _NSRange)arg1;
- (void)_moveGapToBlockIndex:(unsigned int)arg1;
- (void)_ensureCapacity:(unsigned int)arg1;

@end

