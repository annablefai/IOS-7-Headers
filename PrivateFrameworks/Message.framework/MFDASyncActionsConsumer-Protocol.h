/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MFRequestQueueResponseConsumer.h"

@protocol MFDASyncActionsConsumer <MFRequestQueueResponseConsumer>
- (void)commitSyncActions;
- (void)receiveSyncActions:(id)arg1;
- (void)drainMailbox;
@end

