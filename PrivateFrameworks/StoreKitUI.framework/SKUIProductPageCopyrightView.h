/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, SKUIColorScheme, UILabel;

@interface SKUIProductPageCopyrightView : UIView
{
    UILabel *_copyrightLabel;
    SKUIColorScheme *_colorScheme;
}

@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *copyrightString;

@end
