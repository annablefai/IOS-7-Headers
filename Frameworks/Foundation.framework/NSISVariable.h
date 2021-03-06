/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSISVariable : NSObject
{
    id <NSISVariableDelegate> _delegate;
    int _refCount;
    unsigned int _ident;
}

+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
@property id <NSISVariableDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (id)markedConstraint;
@property(readonly) BOOL shouldBeMinimized;
@property(readonly) int valueRestriction;
- (BOOL)valueIsUserVisible;
- (BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
- (float)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (BOOL)shouldBeIntegral;
- (id)description;
- (unsigned int)hash;
- (id)init;

@end

