/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITextInput.h"
#import "UITextInputTokenizer.h"
#import "UITextInputTraits_Private.h"

@class UITextInteractionAssistant;

@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private>
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (BOOL)hasSelection;
- (void)selectAll;
- (BOOL)hasContent;
- (struct _NSRange)selectionRange;
- (id)textInputTraits;

@optional
+ (void)_preheatDictationIfNecessary;
@property(nonatomic) int selectionGranularity;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (id)fontForCaretSelection;
- (id)textColorForCaretSelection;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (BOOL)_shouldRepeatInsertText:(id)arg1;
- (float)_delayUntilRepeatInsertText:(id)arg1;
- (BOOL)isAutoFillMode;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)_startDictation;
- (void)dictationRecordingDidBegin;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (id)metadataDictionariesForDictationResults;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)automaticallySelectedOverlay;
- (void)setBottomBufferHeight:(float)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (BOOL)requiresKeyEvents;
@end

