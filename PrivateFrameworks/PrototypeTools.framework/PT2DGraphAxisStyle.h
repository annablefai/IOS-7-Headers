/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIColor;

@interface PT2DGraphAxisStyle : NSObject
{
    BOOL _showsGridlines;
    BOOL _showsHashmarks;
    BOOL _showsTitle;
    UIColor *_color;
    float _lineWidth;
    float _hashmarkInterval;
    NSString *_title;
    UIColor *_gridlineColor;
    UIColor *_titleColor;
    unsigned int _gridlineCount;
}

@property(nonatomic) BOOL showsTitle; // @synthesize showsTitle=_showsTitle;
@property(nonatomic) BOOL showsHashmarks; // @synthesize showsHashmarks=_showsHashmarks;
@property(nonatomic) BOOL showsGridlines; // @synthesize showsGridlines=_showsGridlines;
@property(nonatomic) unsigned int gridlineCount; // @synthesize gridlineCount=_gridlineCount;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *gridlineColor; // @synthesize gridlineColor=_gridlineColor;
@property(nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) float hashmarkInterval; // @synthesize hashmarkInterval=_hashmarkInterval;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)init;

@end

