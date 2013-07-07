/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIButton.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface UIAlertButton : UIButton
{
    float _imageOffset;
    UIImageView *_overlayView;
}

@property(readonly) UIImageView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) float imageOffset; // @synthesize imageOffset=_imageOffset;
- (void)dealloc;
- (void)setEnabled:(BOOL)arg1;
- (void)_transitionBackgroundViewToHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (id)image;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitle:(id)arg1;
- (id)title;
@property(retain, nonatomic) UIImage *highlightImage;
- (id)initWithTitle:(id)arg1;

@end
