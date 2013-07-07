/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CPLRUDictionary;

@interface SUImageCache : NSObject
{
    CPLRUDictionary *_dictionary;
}

- (void)removeAllCachedImages;
- (id)imageForURL:(id)arg1 dataProvider:(id)arg2;
- (void)addImage:(id)arg1 forURL:(id)arg2 dataProvider:(id)arg3;
- (void)dealloc;
- (id)initWithMaximumCapacity:(int)arg1;
- (id)init;

@end
