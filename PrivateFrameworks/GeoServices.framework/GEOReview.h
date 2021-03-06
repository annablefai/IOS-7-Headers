/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOUser, NSString;

@interface GEOReview : PBCodable
{
    double _reviewTime;
    double _score;
    GEOUser *_reviewer;
    NSString *_snippet;
    NSString *_uid;
    struct {
        unsigned int reviewTime:1;
        unsigned int score:1;
    } _has;
}

@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) GEOUser *reviewer; // @synthesize reviewer=_reviewer;
@property(nonatomic) double reviewTime; // @synthesize reviewTime=_reviewTime;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasUid;
@property(readonly, nonatomic) BOOL hasReviewer;
@property(nonatomic) BOOL hasReviewTime;
@property(nonatomic) BOOL hasScore;
@property(readonly, nonatomic) BOOL hasSnippet;
- (void)dealloc;

@end

